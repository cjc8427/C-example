// p.89 실습문제 2번
// cout과 << 연산자를 이용해 구구단을 출력해라

#include<iostream>

using namespace std;

int main(){
    for( int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            cout << j << "x" << i << "=" << i*j << "\t";
        }
        cout << "\n";
    }
    return 0;
}
// 큰 for문이 1회 돌때 작은 for문이 9회를 돈다
// 큰 for문 1ghl -> 가로로 작은 for문 9회 -> "\n" 명령어 출력 