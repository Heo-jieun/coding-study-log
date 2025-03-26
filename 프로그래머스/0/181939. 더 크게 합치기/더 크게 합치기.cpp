#include <string>
#include <vector>

using namespace std;


int solution(int a, int b) {
    string str_a = to_string(a);
    string str_b = to_string(b);
    string result1 = str_a ; 
    result1 += str_b;
    string result2 = str_b;
    result2 += str_a;
    return (stoi(result1) > stoi(result2)) ?  stoi(result1) : stoi(result2);
}