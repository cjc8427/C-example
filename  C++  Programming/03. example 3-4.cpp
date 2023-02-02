#include<iostream>
using namespace std;

class Circle                         // Circle이라는 이름의 클래스 생성
{
public:
    int radius;                      // 멤버 변수 선언
    Circle();                        // 위임 생성자
    Circle(int r);                   // 타켓 생성자
    double getArea();                // 멤버 함수 선언
};

Circle::Circle() : Circle(1) { }     // 위임 생성자 -> 타겟 생성자 호출 및 r에 1 전달

Circle::Circle(int r)                // 객체 초기화를 전담하는 타겟 생성자
{
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea()             // 클래스 구현
{
    return 3.14*radius*radius;
}

int main() {
    Circle donut;                    // donut이란 이름의 객체 생성 -> 매개변수가 없는 생성자 호출 -> 위임 생성자로 감
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);               // pizza란 이름의 객체 생성 -> 매개변수가 있는 생성자 호출 -> 30이 r에 전달됨
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

}