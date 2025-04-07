#include <iostream>
using namespace std; 

int arr[1000001];

int solve(int n ){
    if(n==1){
        return 1; 
    }
    if(n==2){
        return 2; 
    }
    if(arr[n] != 0){
        return arr[n];
    }
    else{
        arr[n] = (solve(n-1) + solve(n-2))%15746;
        return arr[n];
    }

}

int main(){
    int n ;
    cin >> n ;
    cout << solve(n)%15746 << "\n";
}