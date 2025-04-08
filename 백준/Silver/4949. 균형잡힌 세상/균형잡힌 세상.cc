#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std; 

int main(){
    string str;
    char s; 
    while(1){
        getline(cin, str);
        if(str.length() == 1 && str==".") break; 

        stack<char> s_s;
        bool result = true;
        for(char a : str){   
            if(a=='(' || a=='['){
                s_s.push(a);
            }
            if(a==')'){
                if(!s_s.empty() && s_s.top()=='('){
                    s_s.pop();
                }else{
                    result = false;
                    break; 
                }
            }else if(a==']'){
                if(!s_s.empty() && s_s.top()=='['){
                    s_s.pop();
                }else{
                    result = false;
                    break; 
                }
                
            }
        }
        if(s_s.empty() && result){
            cout << "yes\n" ;
        }else{
            cout << "no\n" ;
        }

    } 
    
    return 0;
}