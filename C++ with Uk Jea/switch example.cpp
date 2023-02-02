// 학점을 결정하는 프로그램 작성
// 입력값은 0 ~ 100 사이의 값
// 출력은 90이상 A, 80이상 B, 70이상 C, 60이상 D, 60미만 F 학점으로 출력하자.

#include <iostream>

using namespace std;
int main(){
    cout << "학점을 입력하세요.>>";
    char score;
    cin >> score;

    switch (score){
        case 'A':
            cout << "4 \n";
            break;

        case 'B':
            cout << "3 \n";
            break;

        case 'C':
            cout << "2 \n";
            break;

        case 'D':
            cout << "1 \n";
            break;
        
        case 'F':
            cout << "0 \n";
            break;
        
        default:
            cout << "잘못된 값을 입력하였습니다. \n";
            break;

    }
}