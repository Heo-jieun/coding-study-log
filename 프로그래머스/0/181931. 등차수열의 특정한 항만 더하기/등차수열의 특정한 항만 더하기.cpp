#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for(bool flag : included){
        answer += flag ? a : 0;
        a += d;
    }
    return answer;
}