// p.88 실습문제 1번
// cout과 << 연산자를 이용해 1에서 100까지의 정수를 한줄에 10개씩 출력해라
// 각 정수는 탭으로 분리해서 출력해라

#include<iostream>

using namespace std;

int main(){
    int i;
    for( i = 1; i <= 100; i++)
    {
        cout << i << "\t"; // i를 출력한 후 \t를 이용해 띄어쓰기 공백을 정렬

        if(i%10 == 0)      // i가 10과 나눴을때 나머지가 0일경우 실행하는 if문 (% -> 나머지 연산자)
        {
            cout << "\n";  // 줄을 띄우라는 명령
        }
    }

    return 0;
}