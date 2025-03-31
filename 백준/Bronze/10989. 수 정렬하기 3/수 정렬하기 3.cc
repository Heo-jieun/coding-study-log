#include <stdio.h>
using namespace std; 

int arr[10001] = {0};


int main(){


    int n,idx ; 
    scanf("%d", &n);
    // 배열 입력받기 
    for(int i = 0; i<n ; i++){
        scanf("%d", &idx);
        arr[idx] += 1;
    }

    for(int i = 1; i<10001 ; i++){
        for(int j = 0; j<arr[i] ;j++){
            printf("%d\n", i);
        }  
    }
}