// 3단계 조건문 12번
// 백준 1110번 - 더하기 사이클
// 백준 주소: https://www.acmicpc.net/problem/1110















































// #include<iostream>
// using namespace std;

// int main(){
//     int N, T;
//     int i = 0;
//     cin >> N;

//     T = N;
//     // T와 N의 값은 처음엔 무조건 같아야한다.

//     do{
//         T = ((T%10)*10) + ((T/10) + (T%10))%10;
//         // 앞 연산 -> T의 10의 자리, 뒤 연산 -> T의 1의 자리
//         i++;
//         // 반복후 사이클 수 1만큼 증가
//     } while(T != N);
//     // "while문"과 "do while문"
//     // while문 = 조건 확인후 명령 수행
//     // do while문 = 최초 1회는 명령을 실행한 후, 조건 확인

//     cout << i << endl;

//     return 0;
// }