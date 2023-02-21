// 3단계 반복문 5(1)번
// 백준 25314번 - 코딩은 체육과목 입니다.
// 백준 주소: https://www.acmicpc.net/problem/25314

#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i = 0; i < num/4; i++){
        cout << "long ";
    }
    cout << "int" << endl;

    return 0;
}