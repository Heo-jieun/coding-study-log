#include <iostream> 
#include <stack>
using namespace std; 

int main(){
    int k,num ,sum = 0 ;
    stack<int> nums; 
    cin >> k ;
    while(k--){
        cin >> num;

        if(num==0){
            nums.pop();
        }else{
            nums.push(num);
        }
    }
    while(!nums.empty()){
        sum += nums.top();
        nums.pop();
    }
    cout << sum << "\n";
}