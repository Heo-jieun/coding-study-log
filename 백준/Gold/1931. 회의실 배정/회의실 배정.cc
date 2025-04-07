#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, start, end, i,j, cnt, time; 
    vector<vector<int>> times; 
    cin >> n ;
    for(i=0; i<n; i++){
        cin >> start >> end; 
        times.push_back({end, start});
    }

    sort(times.begin(), times.end());   

    // for(i=0; i<n; i++){
    //     cout << "end : " << times[i][0] << ", start : " << times[i][1] << "\n";
    // }
    time = times[0][0];
    cnt = 1; 
    for(j=1;j<n; j++){
        if(times[j][1]>= time){
            time = times[j][0];
            cnt++; 
        }
    }
    cout << cnt << "\n";
}