// cin과 >>로 키 입력받기

#include <iostream>

using namespace std;
int main(){
    cout << "너비를 입력하세요>>";

    int width;
    cin >> width;

    cout << "높이를 입력하세요>>";
    
    int height;
    cin >> height;

    int area = width*height;
    cout << "면적은" << area << "입니다.\n";

    return 0;
    
}