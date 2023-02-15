// 2단계 조건문 3번
// 백준 2753번 - 윤년
// 백준 주소: https://www.acmicpc.net/problem/2753


// 2회차
#include<iostream>
using namespace std;

int main(){
    int year;
    cin >> year;

    if((year%4 == 0)&&((year%100 != 0)||(year % 400 == 0))){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }

    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
    
//     int year;
//     cin >> year;

//     if((year%4 == 0)&&((year%100 != 0)||(year%400 == 0))){
//         cout << "1" << endl;
//     }else{cout << "0" << endl;}

//     return 0;
// }