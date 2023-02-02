// 이중 for문을 이용해 구구단 3, 6, 9단을 출력

#include <iostream>

using namespace std;

int main(){

    for( int i=1; i<=9; i++ ){
        for( int j = 3; j<=9; j+=3){                            // j += 3 -> j = j + 3 -> j에 3을 더한 값이 저장된다.
            cout << j << " * " << i << " = " << j*i << " " ;
        }
        cout << "\n";
    }

    return 0;
}