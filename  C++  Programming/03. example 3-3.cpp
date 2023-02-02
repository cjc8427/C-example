#include<iostream>
using namespace std;

class Circle                         // Circle이라는 이름의 클래스 생성
{
public:
    int radius;                      // 멤버 변수 선언
    Circle();                        // 생성자 함수 선언 -> 매개 변수를 가지지 않음
    Circle(int r);                   // 생성자 함수 선언 -> 매개 변수를 가짐
    double getArea();                // 멤버 함수 선언
};

Circle::Circle()                     // 생성자 함수 구현
{
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r)                // 생성자 함수 구현
{
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea()             // 클래스 구현
{
    return 3.14*radius*radius;
}

int main() {
    Circle donut;                    // donut이란 이름의 객체 생성 -> 매개변수가 없는 생성자 호출
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);               // pizza란 이름의 객체 생성 -> 매개변수가 있는 생성자 호출 -> 30이 r에 전달됨
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

}