#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int a = -1, i; 
    while(a!=0){
        scanf("%d", &a);
        if(a==0){
            return 0; 
        }
        string str = to_string(a);
        for(i = 0; i<str.size()/2; i++){
            if(str[i]!=str[str.size()-1-i]){
                printf("no\n");
                break;
            }
        }
        if(i == (str.size()/2)) printf("yes\n");
    }
}