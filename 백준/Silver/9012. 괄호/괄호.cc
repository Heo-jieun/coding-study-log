#include <iostream>
#include <string>
#include <stack>
using namespace std; 

int main(){
    int n ;  
    string str;
    cin >> n ; 

    while(n--){
        cin >> str; 
        bool result = true;
        stack<char> s;
        for(char a : str){
            if(a=='('){
                s.push('(');
            }else if(a==')'){
                if(!s.empty() && s.top()=='('){
                    s.pop();
                }else{
                    result = false; 
                    break;
                }
            }
        }
        if(s.empty() && result){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

   
}