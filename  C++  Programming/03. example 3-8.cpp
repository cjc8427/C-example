#include<iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
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

double Circle::getArea() {
    return 3.14*radius*radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);
// 전역 객체 생성

void f() {
    Circle fDonut(100);
    Circle fPizza(200);
}
// 지역 객체 생성

int main(){
    Circle maindonut;       // 메인 객체 생성
    Circle mainpizza(30);   // 메인 객체 생성
    f();                    // f 함수 호출
}

// 생성순서 -> 위에서 아래로 = 로딩(전역 객체 생성) -> 메인 함수(메인 객체 생성) -> f함수 (지역 객체 생성)
// 소멸순서 -> 생성 순서의 역순으로 소멸 = 전역객체는 메인 함수가 끝난 뒤에 소멸