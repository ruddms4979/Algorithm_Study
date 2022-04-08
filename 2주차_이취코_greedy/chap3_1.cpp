#include <stdio.h>
#include <iostream>

using namespace std;

    int n = 1260;
    int cnt = 0;
    int coinTypes[4] = {500, 100, 50, 10};      //동전 종류


int main() {
  
    for (int i = 0; i < 4; i++) {
        int money = coinTypes[i];
        cnt += n / money;
        n %= money;
    }
    cout << "이경은" << cnt << '\n';
}