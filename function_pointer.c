#include <stdio.h>
#include <string.h>
#include <sys/mman.h>

typedef int (*binary_func_t)(int, int);

int main() {
  char code[] = { 0x48, 0x89, 0xF8, 0x48, 0x39, 0xF7, 0x48, 0x0F, 0x4C, 0xC6, 0xC3 };
  char* code_buf = mmap(NULL, sizeof(code), PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANON, -1, 0);
  memcpy(code_buf, code, sizeof(code));
  mprotect(code_buf, sizeof(code), PROT_READ|PROT_EXEC);

  binary_func_t max = (binary_func_t)code_buf;
  int n = max(3, 42);
  printf("max(3, 42) = %d\n", n);

  munmap(code_buf, sizeof(code));

  return 0;
}