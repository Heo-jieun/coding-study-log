#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int n,k,i, cnt = 0,tmp ; 
    cin >> n >> k ; 
    vector<int> monyes; 
    for(i = 0; i<n; i++){
        cin >> tmp;
        monyes.push_back(tmp);
    }

    for(i=n-1; i>=0; i--){
        int a = monyes[i];
        while(k>=a){
            k-=a;
            cnt++;
        }  
        if(k==0){
            break; 
        }
    }
    cout << cnt << "\n";
}