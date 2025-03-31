#include <stdio.h>

int main(){
    long long a, b, v, day=0, snail_can_go; 
    scanf("%lld%lld%lld", &a, &b, &v);
    v -= a; 
    snail_can_go = a-b;
    if(v%snail_can_go == 0){
        day = v/snail_can_go;
    }
    else{
        day = v/snail_can_go;
        day++;
    }
    
    printf("%lld\n", day+1);
    return 0;
}