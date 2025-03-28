#include <stdio.h>
using namespace std;

int main(){
    int L, answer=0, i, r=1;
    char str;
    scanf("%d", &L);
    
    for(i = 0; i<L; i++){
        scanf(" %c",&str);
        answer += (str - 96)*r;
        r*=31;
    }
    printf("%d\n", answer);
}