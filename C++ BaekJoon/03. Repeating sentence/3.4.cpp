// 3단계 반복문 4번
// 백준 25304번
// 백준 주소: https://www.acmicpc.net/problem/25304

#include<iostream>
using namespace std;

int main(){
    int X, N, a, b, sum = 0;
    // 변수의 값을 지정하는게 아니라 문자만 선언할때는 "="를 쓰지 않는다.
    cin >> X >> N;

    for(int i = 0; i < N; i++){
        cin >> a >> b;
        sum += a * b;
        // 최초 sum의 값이 0이므로, sum에 합산값을
        // 누적해서 저장 할 수 있다.
    }

    if(X == sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}