#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, v;
    cin >> N;
    int a; 
    vector<int> arr;
    while(N--){
        cin >> a;
        arr.push_back(a);
    }
    int answer = 0 ;
    cin >> v;
    for(int num : arr ){
        answer += num==v ? 1:0;
    }
    cout << answer << "\n" ;
}