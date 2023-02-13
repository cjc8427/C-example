// 5단계 함수 3번
// 백준 1065번
// 백준 주소: https://www.acmicpc.net/problem/1065

// 입력받은 값보다 작거나 같은
// 한수(각 자리의 숫자가 등차수열인 수)의 갯수를 출력한다.
// 등차수열의 일반항
// an = a1 + (n - 1)d
// d = 공차 (두 항의 차이)

#include<iostream>
using namespace std;

int sequence(int num){
    int count = 0;
    // 한수의 갯수 카운팅

    if(num < 100)
    // 100보다 작은 수는 본인의 수만큼의 한수의 갯수를 가진다.
    // why? = 1~9 -> 모두 등차수열 (한자리이기 때문)
    //      = 10 ~ 99 -> 모두 등차수열
    {
        return num;
    }

    else{
        count = 99;
        // 100이상의 수는 최소 99개의 한수를 가짐

        for(int i = 100; i <= num; i++){
            int hun = i / 100;          // 백의 자릿수
            int ten = (i / 10) % 10;    // 십의 자릿수
            int one = i % 10;           // 일의 자릿수
        
            if((hun - ten) == (ten - one))
            // 자릿수의 차이  = 공차
            // 공차가 같다 = 등차수열
            {
                count++;
            }
        }
    }

    return count;
}

int main(){
    int N;
    cin >> N;

    int result = sequence(N);
    cout << result;

    return 0;
}