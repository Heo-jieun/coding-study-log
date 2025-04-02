#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

bool compare(const vector<int> a, const vector<int> b){
    if(a[0] == b[0]) return a[1] < b[1];
    return a[0] < b[0];
}

int main(){
    int n, i, x, y;
    vector<vector<int>> arr; 
    cin >> n ;
    for(i=0; i<n ; i++){
        cin >> x >> y; 
        arr.push_back({x,y});
    }
    sort(arr.begin(), arr.end(), compare);
    for(i=0; i<n; i++){
        cout << arr[i][0] << " " << arr[i][1] << "\n";
    }
}