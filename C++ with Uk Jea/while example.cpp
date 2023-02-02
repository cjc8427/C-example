// N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
//첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.

#include <iostream>
using namespace std;

int main (){
    cout << "정수를 입력하세요.>>";
    int number;
    cin >> number;
    int i = 1;

    while( i <= 9 ){
        cout << number << " * " << i << " = " << number*i << "\n";
        i++;
    }
 return 0;
}