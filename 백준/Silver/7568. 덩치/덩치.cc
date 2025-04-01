// 몸무게 x, 키 y
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y, i, j, grade;
    vector<vector<int>> big;
    // 입력받기 
    cin >> n ; 
    for(i=0; i<n; i++){
        cin >> x >> y ; 
        big.push_back({x,y});

    }
    for(i = 0; i<n ; i++){
        grade = 1 ; 
        for(j = 0; j<n; j++){
            if(i==j) continue;
            if(big[i][0] < big[j][0] && big[i][1] < big[j][1]){
                grade++;
            }
        }
        big[i].push_back(grade); 
    }
    for(i = 0; i<n; i++){
        cout << big[i][2] << " " ;
    }
    cout << "\n";
}