#include <iostream> 
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){
    int num, i, idx ;
    double sum=0, n;
    vector<int> nums;
    cin >> n ;
    if(n==0){
        cout << 0;
        return 0; 
    }
    idx = round(n*0.15);
    for( i= 1; i<=n; i++){
        cin >> num; 
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    for(i=idx; i<n-idx; i++){
        sum+= nums[i]; 
    } 
    cout << round(sum/(n-idx*2)) << "\n";
}