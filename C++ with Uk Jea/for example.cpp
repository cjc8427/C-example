// for문을 이용해 n!출력

#include <iostream>

using namespace std;


int main(){

    int n;
    int result = 1;
    cin >> n;

    for( int i = 1; i <= n; i++ ){
        result *= i;
    }
    cout << n << "!은" << result <<"이다. \n";

}