#include <iostream> 
#include <string>
#include <sstream>
using namespace std; 

int stack[10001]; 
int stack_size=0; 

void push(int num);
int pop();
int size();
int empty();
int top();

int main(){
    int k , num; 
    string str; 
    cin >> k ;
    while(k--){
        cin >> str; 
        if(str == "push"){
            cin >> num;
            push(num);
        } 
        else if(str == "size") cout << size() << "\n";
        else if(str == "pop") cout << pop() << "\n";
        else if(str == "empty") cout << empty() << "\n";
        else if(str == "top") cout << top() << "\n";
    }
}

// 정수 X를 스택에 넣는 연tks
void push(int num){
    stack[stack_size]=num;
    stack_size++;
}

// 스택에 들어있는 정수의 개수를 출력
int size(){
    return stack_size;
}

//스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 
//만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
int pop(){
    if (stack_size == 0){
        return -1; 
    }else{
        int tmp=stack_size ; 
        stack_size--;
        return stack[tmp-1];
    }
}

//스택이 비어있으면 1, 아니면 0을 출력
int empty(){
    if(stack_size==0) return 1;
    else return 0;
}

//스택의 가장 위에 있는 정수를 출력
//만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력
int top(){
    if (stack_size == 0){
        return -1; 
    }else{
        return stack[stack_size-1];
    }
}
