#include <stdio.h>
using namespace std;
// 3개를 뽑을 모든 경우의 수를 계산
// 각 조합의 합을 계산 
// 제일 근접하면서 M을 넘지 않는 합을 출력 

int main(){
    int N,M, arr[100], max_sum = 0;
    scanf("%d%d",&N, &M);
    
    // 배열 입력받기 
    for(int i = 0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<N ; i++){
        for(int j = i+1; j<N; j++){
            for(int k = j+1 ; k<N ; k++){
                int sum = arr[i] + arr[j] + arr[k];
                if(max_sum < sum && sum <= M) max_sum = sum ;
            }
        }
    }
    printf("%d\n", max_sum);
}