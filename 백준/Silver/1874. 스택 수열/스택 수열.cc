#include <iostream>
#include <stack> 
#include <vector>
using namespace std; 

vector<char> state ; // stack push pop현황을 저장
int arr[100001] ; // 입력된 수열 저장
stack<int> st ; // 1~n까지 순서대로 입력되는 stack

bool stackPerm(int n){
    int j = 1; 
    for(int i=0; i<n; i++){
        int target = arr[i];
        while(j<=target){
            st.push(j);
            state.push_back('+');
            j++;
        }
        if(st.top()==target){
            st.pop();
            state.push_back('-');
        }else{
            return false; 
        }
    }

    return true; 
}

int main(){
    int n, num; 
    cin >> n ; 
    for(int i = 0 ; i<n ; i++){
        cin >> num; 
        arr[i] = num; 
    }
    if(stackPerm(n)){
        for(char s : state){
            cout << s << "\n";
        }
    }else{
        cout << "NO\n";
    }
}
