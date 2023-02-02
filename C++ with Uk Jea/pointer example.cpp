// 포인터의 주소값과 그 주소값에 있는 변수의 값

#include <iostream>

using namespace std;

int main(){
    
    int num = 7;
    int*pnum = &num;
    
    cout << pnum << " " << *pnum << "\n";

    return 0;
}