#include <iostream>
#include <string> 

using namespace std; 

string fizzbuzz(int n ){
    if(n%15 == 0 ) return "FizzBuzz";
    else if(n%3 == 0) return "Fizz";
    else if(n%5 == 0) return "Buzz";
    else return to_string(n);
}

int main(){
    string a,b,c, answer; 
    int  next_num;
    cin >> a >> b >> c;
    // a, b, c가 숫자인지 아닌지 판별
    if(a!="FizzBuzz" && a!="Fizz" && a!="Buzz"){
        next_num = stoi(a) +3;
    } 
    else if(b!="FizzBuzz" && b!="Fizz" && b!="Buzz"){
        next_num = stoi(b) +2;
    } 
    else if(c!="FizzBuzz" && c!="Fizz" && c!="Buzz"){
        next_num = stoi(c) +1;
    } 
    answer = fizzbuzz(next_num);
    cout << answer << "\n";
    return 0; 
}