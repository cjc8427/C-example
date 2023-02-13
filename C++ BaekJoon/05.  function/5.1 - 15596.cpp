// 5단계 함수 1번
// 백준 15596번
// 백준 주소: https://www.acmicpc.net/problem/15596

#include<vector>
using namespace std;

long long sum(vector<int> &a)
// 함수 선언 -> 변수 타입 = long long
{
    long long ans = 0;

    vector<int>::iterator iter;
    // 반복자 iter 선언
    for(iter = a.begin(); iter < a.end(); iter++)
    // begin (첫번째 원소)부터 end(마지막 원소 다음)까지 반복하는 for문
    {
        ans = ans + *iter;
    }

    return ans;
    
}