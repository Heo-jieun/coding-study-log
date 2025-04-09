#include <iostream> 
#include <string>
#include <queue>
using namespace std; 


queue<int> q; 

int main(){
    int k , num; 
    string str; 
    cin >> k ;
    while(k--){
        cin >> str; 
        if(str == "push"){
            cin >> num;
            q.push(num);
        } 
        else if(str == "size"){
            cout << q.size() << "\n";
        } 
        else if(str == "pop"){
            if (q.size() == 0){
                cout << -1 << "\n";
            }else{
                cout << q.front() << "\n";
                q.pop();
            }
        } 
        else if(str == "empty"){
            if(q.size()==0) cout << 1 << "\n";
            else  cout << 0 << "\n";
           
        } 
        else if(str == "front"){
            if (q.size() == 0){
                cout << -1 << "\n";
            }else{
                cout << q.front() << "\n";
            }
            
        }
        else if(str == "back"){
            if (q.size() == 0){
                cout << -1 << "\n";
            }else{
                cout << q.back() << "\n";
            }
            
        } 
    }
}
