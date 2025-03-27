#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c; 
    int min, max ;
    while(a!=0 && b!=0 && c!=0 ){
        max = std::max({a, b, c});
        if(max == a) {
            if (a*a == b*b + c*c){
                cout << "right" << "\n";
            }else{
                cout << "wrong" << "\n" ;
            }
        }
        else if(max == b){
            if (b*b == a*a + c*c){
                cout << "right" << "\n";
            }else{
                cout << "wrong" << "\n" ;
            }
        }
        else{
            if (c*c == a*a + b*b){
                cout << "right" << "\n";
            }else{
                cout << "wrong" << "\n" ;
            }
        }
        cin >> a >> b >> c; 
    }
}