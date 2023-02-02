// p.89 실습문제 4번
// 소수점을 가지는 5개의 실수를 입력받아 가장 큰 수를 화면에 출력해라

#include <iostream>
using namespace std;

int main(){

    double num[5] = {0}, max = 0; // 실수 형태의 문자열 초기화, max 선언

 	cout << "5 개의 실수를 입력하라>>";

 	for (int i = 0; i < 5; i++){
 		cin >> num[i];      // num[i]와 cin을 이용해 문자열 내에 숫자 지정
 		if(num[i] > max)
 			max = num[i];   // num[i] 값을 순서대로 크기를 비교하고, 큰 값을 max에 저장해 다음 값과 크기 비교
 	}

 	cout<< "제일 큰 수 = " << max << "\n";  // 가장 큰 수 출력
}


// #include <iostream>

// using namespace std;

// int main() {

// 	double num[5] = {0}, max = 0;

// 	cout << "5 개의 실수를 입력하라>>";

// 	for (int i = 0; i < 5; i++)
// 	{
// 		cin >> num[i];
// 		num[i] > max?max = num[i]: max;
// 	}

// 	cout<< "제일 큰 수 = " << max;
// }