// 3단계 조건문 10번
// 백준 10952번
// 백준 주소: https://www.acmicpc.net/problem/10952

#include<iostream>
using namespace std;

int main(){
    int A, B;

    while (true){
        cin >> A >> B;
        if(A == 0 && B == 0){
            break;
        }else{cout << A + B << "\n";}
    }
    
    return 0;
}