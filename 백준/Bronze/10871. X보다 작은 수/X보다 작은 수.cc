#include <iostream>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    int A; 
    while(N--){
        cin >> A; 
        if(A<X) cout << A << " ";
    }
    cout << "\n" ;
}