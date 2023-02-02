// 2단계 조건문 6번
// 백준 2525번
// 백준 주소: https://www.acmicpc.net/problem/2525

#include<iostream>
using namespace std;

int main(){
   int h, m, t , H, M;
   cin >> h >> m >> t;

    if( t > 60 ){
        M = m + t%60;
        H = h + t/60;
    }else{
        M = m + t;
        H = h;
    }

    if( M >= 60 ){
    H = H + M/60; 
    M = M % 60;
    }
  
    if(H >= 24){
       H = H - 24;
    }

    cout << H << " " << M << endl;
    return 0;
}

// int main(){
//    int h, m, t , min, H, M;
//    cin >> h >> m >> t;

//     min = h*60 + m;
//     min = min + t;

//     H = (min/60)%24;
//     M = min%60;    

//     cout << H << " " << M;

//     return 0;
// }

// 시간을 모두 분으로 바꿔주는 발상이 필요
