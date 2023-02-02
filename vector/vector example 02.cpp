#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    // 비어있는 벡터 v를 생성

    v.push_back(21);
    v.push_back(32);
    v.push_back(53);
    v.push_back(64);
    v.push_back(15);
    // 비어있는 벡터 v에 push_back을 이용해 원소 삽입

    cout << "ex1-1) [v.at(i)] size_type : ";
    for(vector<int>::size_type i = 0; i<v.size(); i++){
        cout << v.at(i) << " ";
        // i번째의 원소를 참조
    }
    cout << endl;
    cout << "ex1-1) [ v[i] ] size_type : ";
    for(vector<int>::size_type i = 0; i<v.size(); i++){
        cout << v[i] << " ";
        // i번째의 원소를 참조
    }
    cout << endl << endl;

    cout << "ex2-1) [v.at(i)] int : ";
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
        // i번째의 원소 참조
    }
    cout << endl;
    cout << "ex2-2) [ v[i] ] int : ";
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
        // i번째의 원소 참조
    }
    cout << endl << endl;

    cout << "ex3) [*iter] iterator : ";
    vector<int>::iterator iter;
    for(iter = v.begin(); iter != v.end(); iter++){
        cout << *iter << " ";
    }
    cout << endl << endl;

    return 0;
}