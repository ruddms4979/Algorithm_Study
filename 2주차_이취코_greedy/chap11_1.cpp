//공포도가 1인 사람들은 각자 다른 그룹으로 놓고
//2, 3인 사람들을 그 그룹에 포함 시키기

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int a;
vector<int> v;
int group = 0; // 그룹 수
int people = 0; // 그룹의 사람 수

int main(){
    cin >> a;

    for (int i = 0; i < a; i++) {
        int n;
        cin >> n;
        v.push_back(n);  //공포도 array 만들기
    }

    sort(v.begin(), v.end()); //공포도 순서대로 나열하기


    for (int i = 0; i < a; i++) { // 공포도 낮은 것부터
        people += 1; // 그룹에 해당 모험가를 포함시키기
        if (people >= v[i]) { //공포도가 사람수 넘어가기전에 그룹시키기
            group += 1; 
            people = 0; 
        }
    }

    cout << group << '\n'; // 총 그룹의 수 출력
}