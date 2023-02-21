// 3단계 반복문 11번
// 백준 10951번 - A+B - 4
// 백준 주소: https://www.acmicpc.net/problem/10951

// 2회차
#include<iostream>
using namespace std;

int main(){
    int a, b;

    while (cin >> a >> b)
     // 조건식의 의미 = int형 변수 a와 b에 int형이 아닌
     // 입력값이 들어오면 fales를 반환
     // true -> false가 되면서 while문을 종료
     {
         cout << a + b << "\n";
     }

    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){

//     int A, B;
    
//     while (cin >> A >> B)
//     // 조건식의 의미 = int형 변수 a와 b에 int형이 아닌
//     // 입력값이 들어오면 fales를 반환
//     // true -> false가 되면서 while문을 종료
//     {
//         cout << A + B << "\n";
//     }
    
//     return 0;
// }