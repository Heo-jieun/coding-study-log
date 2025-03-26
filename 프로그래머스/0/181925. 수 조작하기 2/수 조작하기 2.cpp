#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int pre = numLog[0];
    for(int num : numLog){
        if(num == pre+1) answer+='w';
        else if(num == pre-1) answer+='s';
        else if(num == pre+10) answer+='d';
        else if(num == pre-10) answer+='a';
        pre = num ; 
    }
    return answer;
}