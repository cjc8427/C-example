// 3단계 반복문 1번
// 백준 2739번
// 백준 주소: https://www.acmicpc.net/problem/2739


#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i = 1; i <= 9; i++){
        cout << N << " * " << i << " = " << N*i << endl;
    }
    return 0;
}