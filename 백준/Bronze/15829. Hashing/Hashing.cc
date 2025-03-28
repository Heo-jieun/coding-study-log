#include <stdio.h>
using namespace std;

const int r = 31;
const int mod = 1234567891;

int main(){
    int L; 
    long long hash=0, power=1;
    char str;
    scanf("%d", &L);
    
    for(int i = 0; i<L; i++){
        scanf(" %c",&str);
        hash = (hash+(str - 96)*power) % mod ;
        power = (power*r)%mod;
    }
    printf("%lld\n", hash%mod);
}