#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(vector<int>::iterator itr = v.begin(); itr != v.end(); ++itr){
        cout << *itr << endl;
    }
    // 전체 벡터를 출력하는 명령
    // begin부터 end(마지막 원소의 다음)전까지 반복
    // *은 itr이 가진 원소의 레퍼런스를 리턴함

    vector<int>::iterator itr = v.begin() + 2;
    // "+" 연산자를 이용해 그 만큼 떨어져있는 원소를 가리킬수 있음
    cout << "3 번째 원소 :: " << *itr << endl;
}