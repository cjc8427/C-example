//char변수에 입력을 받았을 때, char변수가 N이면 No출력, Y면 Yes출력, 둘 다 아니면 hello 출력

#include <stdio.h>
#include <iostream>

using namespace std;
int main(){

   cout << "알파벳을 입력하시오>>";
   
   char press;
   cin >> press;

   if( press == 'N'){   // ==는 좌항과 우항이 같은지 묻는 관계 연산자 , =는 우항의 값을 좌항에 입력하는 대입연산자 ex)변수 초기화
    cout << "No\n";
   } else if (press == 'Y'){
    cout << "Yes\n";
   }else{
    cout << "hello\n";
   }

   return 0;
}