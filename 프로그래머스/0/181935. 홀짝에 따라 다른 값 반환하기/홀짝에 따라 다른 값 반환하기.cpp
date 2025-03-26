#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    if(n%2==0){
        while(n){
            if(n%2==0){
                answer += pow(n,2);
            }
            n--;
        }
    }else{
        while(n){
            if(n%2 != 0){
                answer += n;
            }
            n--;
        }
    }
    return answer;
}