#include<iostream>
#include<vector>
using namespace std;

template <typename T>
// typename은 class와 동일하게 작동 -> 하지만 동등하진 않음
void print_vector(vector<T>& vec){
    // 전체 벡터 출력하기
    for (typename vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
    // typename을 추가하는 이유 = iterator가 vector<T>의 의존 타입이기 때문
    // 내부의 멤버변수와 혼동되지 않게 하기위해 typename을 추가
    {
        cout << *itr << endl;
    }
}

int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout << "처음 벡터 상태" << endl;
    print_vector(vec);
    cout<< "----------------------------" << endl;

    vec.insert(vec.begin() + 2, 15);
    // (begin + 2)앞에 15를 추가
    // insert는 원하는 위치에 원하는 원소를 추가한다.
    print_vector(vec);

    cout << "----------------------------" << endl;
    vec.erase(vec.begin() + 3);
    // erase는 원하느 위치에 있는 원소를 지운다.
    print_vector(vec);
        
}