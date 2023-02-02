// 4단계 1차원 배열 6번
// 백준 3052번
// 백준 주소: https://www.acmicpc.net/problem/3052

#include<iostream>
using namespace std;

int main(){
    int tmp, arr[42] = {0}, count = 0;
    
    for(int i = 0; i<10; i++){
        cin >> tmp;
        arr[tmp % 42]++;
        // 42로 나눴을때 나머지가 있다면 그 인덱스에
        // 원소는 1이 대입됌
        // -> 원소가 1이다 = 나머지가 있다.
        // -> 원소가 0이다 = 나머지가 없다.
        // tmp에 같은 수가 들어갈 경우
        // 같은 인덱스에 수가 더해진다.
    }

    for(int i = 0; i < 42; i++){
        if(arr[i] != 0)
        // 원소가 0이다 = 나머지가 없다.
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}