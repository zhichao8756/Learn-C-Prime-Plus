//
// Created by EDY on 2023/7/14.
//
class MyClass {
private:
    int value;

public:
    void setValue(int val) {
        value = val;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    MyClass obj;
    obj.setValue(5); // 编译错误，无法在常量对象上调用非常量成员函数
    return 0;
}
