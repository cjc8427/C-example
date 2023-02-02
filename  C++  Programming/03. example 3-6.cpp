#include<iostream>
using namespace std;

class Rectangle{
public:
    int width, height;              // width과 height 멤버 변수 선언
    Rectangle();                    // 생성자 선언
    Rectangle(int w, int h);        // 매개변수가 있는 생성자 선언
    Rectangle(int length);          // 생성자 선언
    bool isSquare();                // bool형의 함수 서언
};

Rectangle::Rectangle()              // 생성자 구현
{
    width = height = 1;
}

Rectangle::Rectangle(int w, int h)  // 생성자 구현
{
    width = w, height = h;
}

Rectangle::Rectangle(int length)    // 생성자 구현
{
    width = height = length;
}

bool Rectangle::isSquare()          // bool형 멤버 함수 구현
{
    if(width == height){
        return true;                
    }else{
        return false;
    }
}

int main(){
    Rectangle rect1;               
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if(rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
    if(rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}