// 1단계 입출력과 사칙연산 9번
// 백준 3003번
// 백준 주소: https://www.acmicpc.net/problem/3003

#include<iostream>
using namespace std;

int main(){

    int k = 1;
    int q = 1;
    int l = 2;
    int v = 2;
    int kn = 2;
    int p = 8;
    int K,Q,L,V,KN,P;

    cin >> K >> Q >> L >> V >> KN >> P;

    cout << k-K << " " << q-Q << " " << l-L << " " << v-V << " " << kn-KN << " " << p-P << " " << endl;

    return 0;
}

// 그냥 하나하나 입력받고 출력하면 끝