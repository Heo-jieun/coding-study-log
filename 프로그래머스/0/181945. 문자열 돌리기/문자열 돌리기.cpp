#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    int num = str.size();
    for(auto c : str){
        cout << c << endl;
    }
}