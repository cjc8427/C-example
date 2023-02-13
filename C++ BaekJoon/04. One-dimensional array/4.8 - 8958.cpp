// 4단계 1차원 배열 8번
// 백준 8958번
// 백준 주소: https://www.acmicpc.net/problem/8958

#include<iostream>
#include<cstring>
// strlen함수(문자열 길이 반환 함수)를 사용하기 위한 헤더파일
using namespace std;

int main(){
    int size = 0, score = 0, total = 0;
    char arr[80] = {0};

    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> arr;

        for(int j = 0; j < strlen(arr); j++){
            if(arr[j] == 'O'){
                score++;
                total = total + score;
            }
            if(arr[j] == 'X'){
                score = 0;
            }
        }
        cout << total << endl;
        total = 0;
        score = 0;
    }

    return 0;
}