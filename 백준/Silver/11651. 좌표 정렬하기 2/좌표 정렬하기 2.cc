#include <iostream>
#include <algorithm>
using namespace std; 

struct Coor{
    int x,y;
};

bool compare(Coor a, Coor b){
    if(a.y==b.y) return a.x < b.x;
    return a.y<b.y; 
}

int main(){
    int n, i, x, y ; 
    cin >> n ;
    Coor arr[100001];
    for(i=0; i<n; i++){
        cin >> x >> y; 
        arr[i].x = x;
        arr[i].y = y;
    } 
    sort(arr, arr+n, compare);
    for(i=0; i<n ; i++){
        cout << arr[i].x << " " << arr[i].y << "\n" ;
    }
}