// 2단계 조건문 7번
// 백준 2525번
// 백준 주소: https://www.acmicpc.net/problem/2525


#include<iostream>
using namespace std;

int main(){
   int a, b, c, cash, max;

   cin >> a >> b >> c;

    if(a!=b && b!=c && c!= a){
        if(a > b)
        // a > b일때
        {   if(c > a)
            // c > a > b 일때
                { max = c; }
            else
            // a > (b, c) 일때
                {max = a;}
        }
        else
        // b > a일때
        {   if(c > b)
            // c > b > a 일때
                { max = c; }
            else
            // b > (a, c) 일때
                { max = b; }
        }
        // 3개의 수 대소비교
    cash = max*100;
    }else if (a == b && b != c){
        cash = 1000 + a*100;
    }else if ( b == c && c != a){
        cash = 1000 + b*100;
    }else if ( c == a && a != b){
        cash = 1000 + c*100;
    }else{
        cash = 10000 + a*1000;
    }

    cout << cash << endl;

    return 0;
}