#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
//
class Solution {
public:
    bool isValid(string s) {
        
        //stack의 최종값이 0이 아니면 false를 반환하도록 한다
        
        
        stack<char>st;   //스택생성
        
        for(int i=0; i<s.size(); i++) {      //s의 길이만큼
            
            if( s[i]=='{' || s[i] == '(' || s[i]=='[') {
                st.push(s[i]);                              //(, {, [ 들은 스택에 넣음
            }
            else{
                if (st.empty()){
                    return false;
                }                               // 입력이 없으면 false
                
                else{
                    if(s[i]=='}' && st.top() == '{')
                        st.pop();
                    else if (s[i]==')' && st.top() == '(')
                        st.pop();
                    else if (s[i]==']' && st.top() == '[')
                        st.pop();                               // 닫는 기호들에 대해서 짝이 맞으면 pop시킴
                    
                    else
                        return false;  //짝이 안맞으면 
                    
                }
            }
      
        }
        
      return st.empty();
    }
    

   
};