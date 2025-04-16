#include <iostream>
using namespace std; 
int nums[10001];

int main(){
    int k , n ;
    long long  mid, num, right = 0, left = 1, pcs, answer=0 ;
    cin >> k ; 
    cin >> n ; 

    for(int i = 0; i<k ; i++){
        cin >> num; 
        nums[i] = num; 
        if(num > right){
            right = num; 
        }
    }
    while(left<=right){
        mid = (left+right)/2; 
        pcs = 0 ;
        for(int i = 0; i<k; i++){
            pcs += nums[i]/mid;
        }
        if(pcs>=n){
            answer = mid; 
            left = mid+1; 
        }else{
            right = mid-1; 
        }
        
    }
    cout << answer << "\n";
    
}
