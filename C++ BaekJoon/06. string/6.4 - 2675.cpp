// 6단계 문자열 4번
// 백준 2675번 - 알파벳 찾기
// 백준 주소: https://www.acmicpc.net/problem/2675

#include<iostream>
#include<string>
using namespace std;

int main(){
    int R,T;
    string S;
    string P;

    cin >> T;
    // 테스트 갯수 T를 입력받음

    for(int i = 0; i < T; i++)
    // 테스트 갯수만큼 반복
    {
        cin >> R >> S;
        // 문자의 반복 횟수(R)와 원소(S) 입력받음
        for(int j = 0; j < S.length(); j++)
        // 문자열의 길이 (S.length())만큼 반복
        {
            for(int k = 0; k < R; k++)
            // 문자의 반복 횟수(R)만큼 반복
            {
                cout << S[j];
                // 반복횟수 만큼 j번째의 원소 출력
            }
        }
        cout << endl;
        // 한줄 띄고 다음 문자열 입력 받을 준비
        
    }

    

    return 0;
}