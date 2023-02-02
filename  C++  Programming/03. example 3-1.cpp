#include<iostream>
using namespace std;

class Circle {
public:
    int radius;
    double getArea();
};
// Circle이라는 이름의 클래스 선언부

double Circle::getArea() {
    return 3.14*radius*radius;
}
// 클래스 구현부

int main(){
    Circle donut;                              // 객체 donut 선언
    donut.radius = 1;                          // donut의 멤버변수 radius를 1로 설정
    double area = donut.getArea();             // donut의 멤버 함수를 호출해 면적 알아내기
    cout << "donut 면적은 " << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}