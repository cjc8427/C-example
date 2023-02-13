// 6단계 문자열 1번
// 백준 11654번 - 아스키코드
// 백준 주소: https://www.acmicpc.net/problem/11654

#include<iostream>
#include<string>
using namespace std;

int main(){
    char N;
    cin >> N;

    int i = int(N);
    // char형을 int형으로 바꾸면서
    // 아스키코드 값이 출력
    cout << i << endl;

    return 0;
}