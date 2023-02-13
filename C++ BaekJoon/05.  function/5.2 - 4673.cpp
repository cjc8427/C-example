// 5단계 함수 2번
// 백준 4673번
// 백준 주소: https://www.acmicpc.net/problem/4673

#include<iostream>
#include<vector>
using namespace std;

int d(int number){
    int sum = number;

    while(number != 0)
    // 셀프넘버를 찾기 위한 반복문
    {
        sum = sum + (number % 10);
        // 첫째 자리수
        number = number / 10;
        // 10을 나눠 첫째자리를 없앤다.
    }
    return sum;
}

int main(){

    bool check[10001] = { false, };
    // check배열을 false로 초기화
    // 10000이하의 수에서 찾아야함으로 크기는 10001으로 선언

    for(int i = 1; i < 10001; i++){
        int n = d(i);
        // 함수d에서 구한 sum이 n으로 들어감
        if(n < 10001){
            check[n] = true;
        }
    }
    
    for(int i = 1; i < 10001; i++){
        if(!check[i]){
            cout << i << "\n";
        }
    }
    
    return 0;
}