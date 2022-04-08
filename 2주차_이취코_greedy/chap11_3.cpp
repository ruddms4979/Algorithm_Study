//앞에서부터 비교 하다가 한 번씩 바뀔 때 마다 바꿔주면 됨 
//1로 처음 바꿀때랑 0으로 처음 바꿀때랑 비교하기!!


//처음에꺼랑 두번째꺼랑으로 나눠서 풀땐 어떻게 풀까?


#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

string str;
int changeF = 0; 
int changeS = 0; 

int main(void) {
    cin >> str;


   
    if (str[0] == '1') {
        changeF += 1;
    }
    else {
        changeS += 1;
    }

   
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] != str[i + 1]) {                 //바뀔 때마다!!
       
            if (str[i + 1] == '1') {
            changeF += 1;
            }
       
            else changeS += 1;
        }
    }

    cout << min(changeF, changeS) << '\n';