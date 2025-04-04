#include <iostream>
#include <queue>
using namespace std; 

int main(){
    int n, arr[500001], i, flag=1, tmp ;
    cin >> n ;
    queue<int> q; 
    for(i=1; i<=n;i++){
        q.push(i);
    }

    while(q.size()!=1){
        if(flag){
            q.pop();
            flag=0;
        }else{
            tmp = q.front();
            q.pop();
            q.push(tmp);
            flag = 1; 
        }        
    }
    cout << q.front() << "\n" ;
}