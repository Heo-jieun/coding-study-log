#include <iostream>
#include <string> 
#include <vector> 
using namespace std; 

string WB[] = 
{
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BB[] = 
{
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
};

vector<string> input_board;

int findMinB(int a, int b){
    int i, j, cnt=0; 
    for(i=0; i<8; i++){
        for(j=0;j<8; j++){
            if(BB[i][j] != input_board[a+i][b+j]){
                cnt++;
            } 
        }
    }
    return cnt ; 
}

int findMinW(int a, int b){
    int i, j, cnt=0; 
    for(i=0; i<8; i++){
        for(j=0;j<8; j++){
            if(WB[i][j] != input_board[a+i][b+j]){
                cnt++;
            } 
        }
    }
    return cnt ; 
}

int main(){
    int n, m, i, j ; 
    cin >> n >> m ; 
    string str;
    
    for(i=0; i<n; i++){
        cin >> str; 
        input_board.push_back(str);
    }

    int minval = 65, tmp, b_result, w_result ;
    for(i=0; i+8<=n; i++){
        for(j=0; j+8<=m ; j++){
            b_result = findMinB(i,j);
            w_result = findMinW(i,j);
            tmp = min(b_result, w_result);
            if(tmp<minval){
                minval = tmp;
            }
        }
    }
    cout << minval << "\n"; 
}