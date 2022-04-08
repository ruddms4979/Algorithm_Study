
// 다양한 수의 배열이 있을때 이 수를 이용해서 M번 더했을때 가장 큰 수를 만드는 방법
// but 각 특정한 인덱스의 수가 연속해서 K번을 초과할 수 없음
// 사실상 가장 큰 수 두개만 사용한다!!

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;



int main() {

    int n, m, k;
    vector<int> v;
    
    cin >> n >> m >> k;

    //배열을 벡터를 사용해서 입력 받음
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    // 큰 수 2개 찾기
    sort(v.begin(), v.end()); 
    int first = v[n - 1]; 
    int second = v[n - 2]; 

    // 제일 큰 수가 몇번 더해지는지 찾기 
    int cnt = (m / (k + 1)) * k;
    cnt += m % (k + 1);

    int result = 0;
    result += cnt * first; // 제일 큰 수 더하기
    result += (m - cnt) * second; // 다음으로로 큰 수 더하기

    cout << result << '\n'; 
}