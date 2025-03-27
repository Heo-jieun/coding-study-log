#include <stdio.h>
using namespace std;


int main(){
    int N; 
    scanf("%d", &N); // 값 입력

    for(int i=1;i<N; i++){  // 최소값 생성자 구하기 
        int answer = 0, tmp = i;
        answer += i; 
        while(tmp!=0){
            answer += tmp%10;
            tmp = tmp/10;
        }
        if(answer == N) {
            printf("%d\n", i); 
            return 0;
        }
    }
    printf("%d",0); // 생성자가 없으면 0 
}