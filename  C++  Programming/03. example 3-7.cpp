#include<iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();                    // 소멸자 생성
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "반지름" << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름" << radius << " 원 생성" << endl;
}

Circle::~Circle() {
    cout << "반지름" << radius << " 원 소멸" << endl;
}
// 소멸자 구현

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main (){
    Circle dont;
    Circle pizza(30);
    return 0;                   // main 함수 종료 후 객체들이 소멸 된다.
}