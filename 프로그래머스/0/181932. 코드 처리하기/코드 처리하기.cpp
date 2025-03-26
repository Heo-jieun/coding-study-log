#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string ret = "";
    bool mode = false;
    for(int i = 0; i < code.size();i++){
        if(mode && code[i] != '1' && i%2 !=0) ret+=code[i];
        else if(code[i] != '1' && !mode && i%2==0) ret += code[i] ;
        mode = (code[i] == '1') ? !mode : mode;
    }
    return ret.size() == 0 ? "EMPTY" : ret;
}