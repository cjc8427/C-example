// 6단계 문자열 3번
// 백준 10809번 - 알파벳 찾기
// 백준 주소: https://www.acmicpc.net/problem/10809

#include<iostream>
#include<string>
using namespace std;

int main(){
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string word;
    cin >> word;
    
    for(int i  = 0; i < alpha.length(); i++){
        cout << (int)word.find(alpha[i]) << " ";
        // (int)word.find(alpha[i])
        // -> find는 그 문자가 해당하는 index값을 출력시킴
        // -> 해당하는 문자가 없을 경우엔 -1이 출력됨
        // npos값이 -1이기 때문
    }

    return 0;
}