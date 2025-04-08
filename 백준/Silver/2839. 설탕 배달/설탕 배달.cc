#include <iostream>
using namespace std; 

int dCnt[5001];

int main(){
    int n, i ; 
    cin >> n ;
    
    dCnt[3]= 1;
    dCnt[5] = 1;
    for(i=6; i<=n; i++){
        if(dCnt[i-3]){
            dCnt[i] = dCnt[i-3] + 1;
        }
        if(dCnt[i-5]){
            dCnt[i] = dCnt[i]? min(dCnt[i], dCnt[i-5]+1) : dCnt[i-5]+1;
        }
    }
    cout << (dCnt[n]==0 ? -1 : dCnt[n] ) << "\n" ;
    return 0; 
}