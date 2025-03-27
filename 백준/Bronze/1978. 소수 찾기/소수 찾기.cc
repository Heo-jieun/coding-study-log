#include <stdio.h>
using namespace std;

int isPrim(int num){
    if(num<2) return 0;
    for(int i = 2; i*i <= num ; i++){
        if(num%i == 0) return 0;
    }
    return 1;
}

int main(){
    int N, answer=0, a;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &a);
        answer += isPrim(a);
    }
    printf("%d\n", answer);
}
