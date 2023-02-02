#include<iostream>

using namespace std;

class Rectangle             // Rectangle이란 이름의 클래스 선언
{
public:                     
    int width, height;      // 변수 선언
    int getArea();          // 면적 계산하는 함수
};

int Rectangle::getArea()    // 클래스 구현
{
    return width*height;    // getArea 함수의 계산
}

int main(){
    Rectangle rect;         // rect라는 이름의 객체 생성
    rect.width = 3;         // 멤버에 상수값 저장
    rect.height = 5;        // 멤버에 상수값 저장
    cout << "사각형의 면적은 " << rect.getArea() << endl;
}