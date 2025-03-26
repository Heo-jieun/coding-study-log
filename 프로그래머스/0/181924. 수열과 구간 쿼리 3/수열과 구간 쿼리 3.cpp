#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(vector idxes : queries){
        swap(arr[idxes[0]], arr[idxes[1]]);
    }
    return arr;
}