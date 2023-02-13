// 6단계 문자열 2번
// 백준 11720번 - 숫자의 합
// 백준 주소: https://www.acmicpc.net/problem/11720

#include<iostream>
#include<string>
using namespace std;

int main(){
    int N, sum = 0;
    string str;
    cin >> N;
    str.resize(N);

    cin >> str;

    for(int i = 0; i < N; i++){
        sum = sum + str[i]-'0';
    }

    cout << sum << endl;

    return 0;
}