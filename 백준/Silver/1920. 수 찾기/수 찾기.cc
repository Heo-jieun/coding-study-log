#include <iostream>
#include <algorithm>
using namespace std; 

int input_arr[100001];
int find_num[100001];


int binary(int num, int size){
    int start=0, end=size-1, mid=(start+end)/2;
    while(start <= end){
        if(num < input_arr[mid]){
            end = mid-1;
            mid = (start+end)/2;
        }else if(num > input_arr[mid]){
            start = mid+1;
            mid = (start+end)/2;
        }
        else if(num==input_arr[mid]){
            return 1 ; 
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,i, num, pre ; 
    cin >> n ;
    for(i=0; i<n; i++){
        cin >> input_arr[i]; 
    }
    sort(input_arr, input_arr+n);
    
    cin >> m ;
    for(i=0; i<m; i++){
        cin >>find_num[i]; 
    }

    for(i=0; i<m; i++){
        pre = binary(find_num[i], n);
        cout << pre << "\n";
    }

}