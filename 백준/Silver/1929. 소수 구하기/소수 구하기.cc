#include <iostream> 
#include <vector>
using namespace std; 

int main(){
    int m, n;
    cin >> m >> n ; 
    
    vector<int> arr(n+1, 0);
    for(int i = 2 ; i<n+1; i++){
        arr[i] =i; 
    }

    for(int i = 2; i< n+1; i++){
        if(arr[i] == 0) continue; 
        for(int j = i*2 ; j<n+1; j+=i){
            if(arr[j]!=0) arr[j] = 0;
        }
    }

    for(int i = m; i< n+1; i++){
        if(arr[i] !=0 ){
            cout << i << "\n";
        }
    }

}