// 2단계 조건문 2번
// 백준 9498번
// 백준 주소: https://www.acmicpc.net/problem/9498

#include<iostream>
using namespace std;

int main(){
    
    int score;
    cin >> score;

    if( score >= 90){
        cout << "A" << endl;
    }else if ( score >= 80){
        cout << "B" << endl;
    }else if ( score >= 70){
        cout << "C" << endl;
    }else if ( score >= 60){
        cout << "D" << endl;
    }else{cout << "F" << endl;}
    // 조건식은 (90 <= score <= 100) 이런식의 이중문은 불가능
    // 필요할 때 &&(and),||(or) 같은 연산자 사용 

    return 0;
}