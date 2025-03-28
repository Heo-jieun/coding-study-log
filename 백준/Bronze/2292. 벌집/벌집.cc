#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int N, layer = 1, cnt = 1; 
    scanf("%d",&N);
    while(N>cnt){
        cnt += 6*layer;
        layer++;
    }
    printf("%d\n", layer);
}