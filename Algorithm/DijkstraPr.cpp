#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

#define INF INT_MAX
#define ARRAY_SIZE 6

int main(void){

    // 입력값 받기
    int node_num, weight_num; 
    cin >> node_num >> weight_num; 

    // graph 입력 받기 
    vector<pair<int, int>> graph[ARRAY_SIZE];
    int a, b, c;
    cin >> a >> b >> c;
    while(a <= node_num){
        graph[a].push_back({b,c});
        cin >> a >> b >> c;
    }
    
    
}