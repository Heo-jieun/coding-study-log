#include <stdio.h>
using namespace std;

int main(){
   int num; 
   while(1){
    scanf("%d", &num); // a입력받기 
    if(!num) break; // a==0이면 종료
    int n=num, p=0; 
    while(n){
        p = 10*p + n%10;
        n /= 10;
    }
    puts(num==p ? "yes":"no");
   }
   return 0;
}