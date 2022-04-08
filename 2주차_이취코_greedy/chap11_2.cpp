//0이나 1빼고는 전부다 곱하기

#include <stdio.h>
#include <iostream>
using namespace std;

string str;

int main(void) {
    cin >> str;

    
    long long result = str[0] - '0'; // 스트링을 숫자로 바꾸기*****

    for (int i = 1; i < str.size(); i++) {
      
        int num = str[i] - '0';
        if (num <= 1 || result <= 1) {
            result += num;
        }
        else {
            result *= num;
        }
    }

    cout << result << '\n';
}