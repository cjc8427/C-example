// 1단계 입출력과 사칙연산 11번
// 백준 2588번
// 백준 주소: https://www.acmicpc.net/problem/2588

#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int A;        // A는 숫자 자체를 모두 쓰기 때문에 정수형으로 선언
    string B;     // B는 자리수 별로 숫자를 사용하기 때문에 문자열로 선언
 
    cin >> A;
    cin >> B;
 
    cout << A * (B[2] - '0') << "\n";
    cout << A * (B[1] - '0') << "\n";
    cout << A * (B[0] - '0') << "\n";
    // '0'을 빼는 이유 = 문자열이기 때문에 string에 들어있는 숫자는 숫자가 아니라 문자로 취급된다.
    // 문자는 각자 고유한 아스키코드를 가지고 있고, 그 아스키코드는 순서대로 정해진다
    // ex) '0'의 아스키 코드 = 48, '1'의 아스키 코드 = 49, '2'의 아스키 코드 = 50...
    // 그러므로 각각 문자를 빼주면 아스키 코드가 남고, '0'을 빼면 그 코드가 그 자리의 숫자와 같아진다. 
    cout << A * stoi(B) << "\n";        // string -> int(10진수) 로 변환
    return 0;
}