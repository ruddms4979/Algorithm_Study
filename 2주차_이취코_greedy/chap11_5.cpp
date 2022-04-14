// 볼링공 고르기

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int n,m;
cin >> n >> m;

vector<int> arr;

for(int i=0; i<n; i++){
    int a;
    cin >> a;
    arr.push_back(a);
}

int main(){
    int count=0;

    for(int i=0 i<n; i++){
        for(int j=i+1; j,n; j++){
            if(arr[i]!=arr[j]) count += 1; 
        }
    }
    cout << count;

}