#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    // int형의 데이터 타입을 가지는 v라는 이름의 벡터 선언

    cout << "[ v[i], v.size(), v.capacity()]" << endl;
    // i번째 원소, v의 size, v의 capacity를 순서대로 출력
    for (int i = 0; i <= 64; i++){
        v.push_back(i+1);
        // v의 마지막 원소 뒤에 i+1을 삽입
        // -> size와 capacity가 자동으로 증가
        cout << "[" << v[i] << "," << v.size() << "," << v.capacity() << "]" << endl;
    }
    return 0;
}