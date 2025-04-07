#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){
    int n, i, time=0, tmp ;
    vector<int> arr ; 
    cin >> n;
    for(i = 0; i<n ; i++){
        cin >> tmp; 
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    for(i=0;i<n;i++){
        time += arr[i]*(n-i);
    }
    cout << time << "\n";
}