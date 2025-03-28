#include <stdio.h>
#include <vector>
#include <numeric>
using namespace std;
// 3개를 뽑을 모든 경우의 수를 계산
// 각 조합의 합을 계산 
// 제일 근접하면서 M을 넘지 않는 합을 출력 

vector<vector<int>> permute_arr; // 조합 vector선언
vector<int> nums; // 카드 vector선언
vector<int> sums; // 3카드의 합을 저장

// 3개씩 조합해주는 함수
void permute(int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1 ; j < n ; j++){
            for(int k = j+1; k<n; k++){
                permute_arr.push_back({nums[i],nums[j], nums[k]});
            }
        }
    }
}

// M과 가까우면서 최대로 큰 값 찾기 
int max_sum(int m){
    for(auto per : permute_arr){
        sums.push_back(accumulate(per.begin(), per.end(), 0));
    }
    int max = 0;
    for(int num : sums){
        if(num>max && num <= m ){
            max = num ;
        }
    }
    return max; 
}

int main(){
    int N,M;
    scanf("%d%d",&N, &M);
    
    // 배열 입력받기 
    for(int i = 0; i<N; i++){
        int a = 0 ; 
        scanf("%d", &a);
        nums.push_back(a);
    }

    permute(N);
    int answer = max_sum(M);
    printf("%d\n", answer);
}