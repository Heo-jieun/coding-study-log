#include <stdio.h>
using namespace std;

int main(){
    int a, b, tmp_a,tmp_b, tmp, gcd, lcm;
    scanf("%d%d", &a, &b);
    // 최대 공약수 구하기 
    tmp_a = a; tmp_b = b;
    while(tmp_b){
        tmp = tmp_a;
        tmp_a = tmp_b; 
        tmp_b = tmp%tmp_b;
    }
    gcd = tmp_a;
    //최소 공배수 구하기 
    tmp_a = a/gcd;
    tmp_b = b/gcd;
    lcm = gcd*tmp_a*tmp_b;

    printf("%d\n%d\n", gcd, lcm);
}