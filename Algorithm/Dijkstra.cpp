#include <cstdio>
#include <vector>
using namespace std;

#define INF INT_MAX


// 1) 그래프 만들기
typedef struct{
    int node; // 연결된 다음 노드 번호
    int weight; // 간선의 가중치
}Data;

vector <Data> v[6];

void MakerGraph(){
    // 1번 노드와 연결된 그래프 생성
    v[1].push_back({2, 8});
    v[1].push_back({3, 2});
    // 2번 노드와 연결된 그래프 생성
    v[2].push_back({1, 8});
    v[2].push_back({4, 10});
    // 3번 노드와 연결된 그래프 생성
    v[3].push_back({1, 2});
    v[3].push_back({4, 1});
    v[3].push_back({5, 7});
    // 4번 노드와 연결된 그래프 생성
    v[4].push_back({2, 10});
    v[4].push_back({5, 9});
    // 5번 노드와 연결된 그래프 생성
    v[5].push_back({3, 7});
    v[5].push_back({4, 9});
}

int main(void){
    MakerGraph();
}

// 2) 최단 경로 값을 담을 배열 생성 및 초기화 
int Dijk[6]; // Dijk[x] : x번 노드까지의 최단 경로 값

void InitDijkArray(){
    
}
