#include <iostream>
#include <string>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, count = 0, i; 
    cin >> N; 
    string ter_num = "666", tmp = "";
    for(i=666; count!=N; i++){
        tmp = to_string(i);
        if(tmp.find(ter_num) != string::npos){
            count++;
        }
    }
    cout << i-1 << "\n";
}