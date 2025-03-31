#include <stdio.h>
using namespace std;

int arr[15][15] = {0}; //배열 0으로 초기화 

int live_people(int k, int n){ 
    if(k==0) return n;
    if(n==1) return 1; 
    return live_people(k-1, n) + live_people(k, n-1);
}

int main(){
    int t, k , n, answer;
    scanf("%d", &t);
    while(t--){
        scanf("%d\n%d", &k, &n);
        printf("%d", live_people(k,n));
        printf("\n");
    } 
}