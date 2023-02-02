// 배열과 관련된 예제 -> 크기가 5인 정수형 배열의 for을 통한 원소 출력

#include <iostream>
#define MAX 5

using namespace std;

int main(){
    int arr[MAX] = {4, 8, 12, 16, 20};
    for(int i =0; i < MAX; i++){
        cout << arr[i] << "\n";
    }

    return 0;
}