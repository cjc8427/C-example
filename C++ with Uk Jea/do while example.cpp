// 정수형 변수를 입력을 받고, 입력 받은값을 출력 BUT 0을 입력 받으면 종료

#include <iostream>

using namespace std;

int main(){
    int i;
    cin >> i;

    do { cout << i <<"\n";
        cin >> i;
    }while(i != 0 );

    return 0;
}