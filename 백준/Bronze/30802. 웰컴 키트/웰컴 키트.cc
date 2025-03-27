#include <stdio.h>
using namespace std;

int main(){
    // 변수 선언
    int n, a, T, P ;
    scanf("%d", &n); // 인원수 입력받기 
    int size_arr[6];

    // 배열 입력
    for(int i = 0; i<6; i++){
        scanf("%d", &size_arr[i]);
    }

    // 묶음 수 입력
    scanf("%d%d", &T,&P);

    // 펜 주문 구하기 
    int pen_order = n / P;
    int pen_one_order = n%P;

    // 티셔츠 주문 구하기
    int t_order = 0 ;
    for(int size : size_arr){
        t_order += (size+T-1)/T ; //올림 나눗셈 공식
    }
    printf("%d\n%d %d\n", t_order, pen_order, pen_one_order);
}