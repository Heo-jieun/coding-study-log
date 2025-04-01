#include <iostream>
#include <string> 
#include <algorithm>

using namespace std; 

bool CompStr(string a, string b){
    if(a.length() != b.length()){
        return a.length()<b.length(); // 길이 비교
    }else{
        return a<b; //사전순 나열
    }
}

int main(){
    ios::sync_with_stdio(false);

    int N, i ; 
    cin >> N ;
    string str[20000];
    for(i = 0; i<N; i++){
        cin >> str[i];
    }
    
    sort(str, str+N, CompStr);
    for(i = 0; i<N; i++){
        if(str[i]==str[i-1]) continue ;  // 중복제거 
        else cout << str[i] << "\n";
    }

}