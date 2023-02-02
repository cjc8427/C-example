// p.89 실습문제 3번
// 두개의 정수를 읽어 큰 수를 화면에 출력해라

#include<iostream>

using namespace std;

int main(){
    
    cout << "두 수를 입력하라>>";
    int i, j;                       // 두 개의 변수 선언
    cin >> i >> j;                  // 두 개의 변수 입력 받기
    if ( i > j){
        cout << i << endl;
    }else if( i < j ){
        cout << j << endl;
    }
    return 0;
}