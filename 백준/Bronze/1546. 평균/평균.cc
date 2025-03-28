#include <stdio.h>
using namespace std;

int main(){
    int n, scores[1000];
    float answer=0,  max =0 ;
    scanf("%d", &n);
    for(int i = 0; i<n ; i++){
        scanf("%d", &scores[i]);
        if(scores[i] > max) max = scores[i];
    }
    for(int i = 0; i<n ; i++){
        answer += (scores[i]/max) * 100;
    }
    printf("%f\n",answer/n);
}