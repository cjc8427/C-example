// string 클래스를 이용한 문자열

#include <iostream>  // C++의 기본 명령어를 담아놓은 헤더파일
#include <string>    // string 클래스를 사용하기 위한 헤더파일

using namespace std; // std룰 사용하겠다는 명령어

int main()           // 메인 함수
{
    string song("Fallling in love with you");  // song이라는 이름의 문자열 선언
    string elvis("Elvis Presley");             // elvis라는 이름의 문자열 선언
    string singer;                             // singer라는 이름의 문자열 선언

    cout << song + "를 부른 가수는";                        // song 문자열을 이용해 질문 출력 (+를 이용해 문자열 연결)
    cout << "(힌트 : 첫글자는" << elvis[0] << ")? \n";      // elvis 문자열의 첫번째 자리의 문자만 공개해 힌트 제공

    getline(cin, singer);
    // string 클래스를 사용하기 위한 명령어
    // 사용 형태는 getline(cin, 객체이름)

    if(singer == elvis)
        cout << "맞았습니다.";

    else
        cout << "틀렸습니다." + elvis + "입니다." << endl;
}