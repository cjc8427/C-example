// 4단계 1차원 배열 9번
// 백준 4344번
// 백준 주소: https://www.acmicpc.net/problem/4344

#include<iostream>
using namespace std;

int main(){
    int c, n ,num;
    int avg;
    int score[1000] = {0};
    // 학생수가 1000명 이하이므로 크기는 1000으로 정한다.
    double result;
    // 결과는 소수점이 나와야함으로 정수형이 아닌 실수형으로 선언

    cin >> c;
    for(int i = 0; i < c; i++){
        avg = 0;
        num = 0;
        // 한바퀴 돌은 후 0으로 초기화해서 다시 계산.
        cin >> n;
        // 학생수 입력 받기

        for(int j = 0; j < n; j++){
            cin >> score[j];
            // 배열에 들어가는 점수 입력받기 
            avg = avg + score[j];
            // 평균을 구하기 전에 점수 합산
        }
        avg = avg / n;
        // 합산한 점수를 이용해 평균 계산

        for(int j = 0; j < n; j++){
            if (score[j] > avg){
                num++;
                // 평균보다 점수 높은 배열이 있을때마다 num에 1씩 더함.
            }
        }
        result = (double)num / n * 100;
        // 형변환 연산자 = (바꿀 자료형) 데이터
        // 계산 결과를 위해 잠시 형태를 바꾼다.
        // 결과인 비율을구한다.

        cout << fixed;
        // 소수점을 고정시켜 표현하겠다는 뜻
        cout.precision(3);
        // 3자리까지 표현하겠다는 뜻
        cout << result << "%" << endl;
    }

    return 0;
}