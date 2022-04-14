// 볼링공 고르기  다른방법 확인해보기!!!!!

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;


int main(){
    
    int n,m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    
    int count=0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]!=arr[j]) count += 1;
        }
    }
    cout << count;

}
