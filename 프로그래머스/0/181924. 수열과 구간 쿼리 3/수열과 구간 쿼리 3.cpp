#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(vector query : queries){
        swap(arr[query[0]], arr[query[1]]);
    }
    return arr;
}