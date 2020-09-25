#include <iostream>

using namespace std;

// 运算符重载测试
class Box {
public:
    double getVolume(void) {
        return length * breadth * height;
    }
    double getLength() {
        return this->length;
    }
    void setLength(double len) {
        length = len;
    }
    void setBreadth(double bre) {
        breadth = bre;
    }
    void setHeight(double hei) {
        height = hei;
    }
    // 重载 + 运算符，用于把两个 Box 对象相加
    Box operator+(const Box& b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
    // 重载前缀++运算符
    Box operator++() {
        Box b;
        b.length = this->length * 2;
        b.breadth = this->breadth * 2;
        b.height = this->height * 2;
        return b;
    }

    // 重载后缀++运算符
    Box operator++(int) {
        Box b;
        b.length = this->length * 2;
        b.breadth = this->breadth * 2;
        b.height = this->height * 2;
        return b;
    }
private:
    double length;      // 长度
    double breadth;     // 宽度
    double height;      // 高度
};
// 运算符重载测试
void operator_overloading() {
    Box Box1;                // 声明 Box1，类型为 Box
    Box Box2;                // 声明 Box2，类型为 Box
    Box Box3;                // 声明 Box3，类型为 Box
    double volume = 0.0;     // 把体积存储在该变量中

    // Box1 详述
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // Box2 详述
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // Box1 的体积
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // Box2 的体积
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;

    // 把两个对象相加，得到 Box3
    Box3 = Box1 + Box2;

    // Box3 的体积
    volume = Box3.getVolume();
    cout << "Volume of Box3 : " << volume << endl;

    cout << "前缀自增前: " << Box1.getLength() << endl;
    cout << "前缀自增运算符: " << (++Box1).getLength() << endl;
    cout << "后缀自增前: " << Box1.getLength() << endl;
    cout << "后缀自增运算符: " << (Box1++).getLength() << endl;
}