//숫자 n을 1로 만들기
//n에서 1빼기 or k로 나누기 둘 중 하나만 가능

//무조건 많이 나누는 것이 좋음
//일단 나눌 수 있으면 나누고 아니면 1을 빼자

#include <stdio.h>
#include <iostream>


using namespace std;

int n, k;
int result;

int main() {

    cin >> n >> k;

    while(n>=k) {
        while(n%k !=0){
            n -= 1;
            result += 1;
        }
         n = n/k;
         result += 1;

    }
    while(n>1){
        n  -= 1;
        result += 1;
    }

    cout << result << '\n';
}