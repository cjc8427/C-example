#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v;
    // 데이터 타입이 int형인 "v"라는 이름의 벡터 선언

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // 맨 뒤에 원소 추가

    for(vector<int>::size_type i = 0; i < v.size(); i++){
        cout << "v의 " << i + 1 << " 번째 원소 :: " << v[i] << endl;
    }    
}