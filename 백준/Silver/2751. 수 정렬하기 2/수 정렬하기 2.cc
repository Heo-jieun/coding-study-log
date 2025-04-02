#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num, i ; 
    vector<int> arr ;
    cin >> n ; 
    for(i = 0;i<n; i++){
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    for(i = 0 ; i<n; i++){
        cout << arr[i] << "\n";
    }
}