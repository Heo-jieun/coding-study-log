#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(vector idxes : queries){
        int tmp = arr[idxes[0]];
        arr[idxes[0]] = arr[idxes[1]];
        arr[idxes[1]] = tmp;
    }
    return arr;
}