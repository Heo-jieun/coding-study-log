#include <iostream>
#include <algorithm>
using namespace std; 

int input_card[500001], find_card[500001];

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,i; 
    cin >> n ;
    for(i=0; i<n; i++){
        cin >> input_card[i];
    }
    cin >> m ;
    for(i=0; i<m; i++){
        cin >> find_card[i];
    }
    sort(input_card, input_card+n);

    for(i=0; i<m; i++){
        cout << (upper_bound(input_card, input_card+n, find_card[i])-input_card ) - (lower_bound(input_card, input_card+n, find_card[i])- input_card) << " ";
    }
    cout << "\n";
}