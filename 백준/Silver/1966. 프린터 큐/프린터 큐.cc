#include <iostream>
#include <queue>
#include <algorithm>
using namespace std; 

bool compare(int a, int b){
    return a > b;
}

int main(){
    int t; 
    int arr[101];

    // TEST case입력받기 
    cin >> t; 
    
    while(t--){
        int n, m, input, answer=1;
        // 문서 갯수, 궁금한 문서 입력받기
        cin >> n >> m ;
        queue<pair<int,int>> q; 

        // 문서 중요도 입력값 받기 
        for(int i =0; i< n ; i++){
            cin >> input;
            arr[i] = input; 
            q.push({input, i});
        }
        int find_doc = arr[m];
        sort(arr, arr+n, compare);
        // 궁금한 문서가 출력될 차례인지 q가 빌때까지 확인
        // 궁금한 문서 찾으면 loop 종료 
        for(int i = 0; i<n; i++){
            while(1){
                auto t = q.front() ;
                if(arr[i]==find_doc && t.second==m){
                    cout << answer << "\n";
                    q.pop();
                    break ;
                }
                else if(t.first == arr[i]){
                    q.pop();
                    answer++;
                    break; 
                }
                else{
                    auto tmp = q.front();
                    q.pop();
                    q.push(tmp);
                }
            }
        }   
    }
    return 0;
}