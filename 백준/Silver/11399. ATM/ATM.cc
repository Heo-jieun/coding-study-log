#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){
    int n, i, time=0,sum=0, tmp ;
    vector<int> arr ; 
    cin >> n;
    for(i = 0; i<n ; i++){
        cin >> tmp; 
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    for(i=0;i<n;i++){
        sum += arr[i];
        time += sum; 
    }
    cout << time << "\n";
}