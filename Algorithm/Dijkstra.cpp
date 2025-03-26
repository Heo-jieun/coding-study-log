#include <cstdio>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

#define INF INT_MAX


// 1) 그래프 만들기
typedef struct{
    int node; // 연결된 다음 노드 번호
    int weight; // 간선의 가중치
}Data;

struct cmp{ //사용자 정의 비교 함수
    bool operator()(Data a, Data b){
        return a.weight > b.weight ; // 가중치 오름차순
    }
};

// queue생성 및 시작노드 정보 삽입/갱신
priority_queue<Data, vector<Data>, cmp> pq;

void InitQueue(int start){
    pq.push({start, 0}) ; //시작하는 노드 삽입
    Dijk[start] = 0; // Dijk[시작] = 0으로 갱신
}

vector<Data> v[6];

void MakeGraph(){
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

// 2) 최단 경로 값을 담을 배열 생성 및 초기화 
int Dijk[6]; // Dijk[x] : x번 노드까지의 최단 경로 값

void InitDijkArray(){
    for(int i = 1; i<= 5; i++){
        Dijk[i] = INF;
    }
}

// Dijkstra 구현
void DijkStra(){
    while(!pq.empty()){
        //priority_queue 맨앞노드 가져오기
        Data nowNode = pq.top();
        pq.pop();

        int node = nowNode.node;
        int weightSum = nowNode.weight;

        if(Dijk[node] < weightSum) continue; // 이미 최단거리 정보가 있으면 넘김
        // nowNode와 연결되어 있는 다른 모든 노드 탐색
        for(int i = 0; i< v[node].size(); i++){
            int nextNode = v[node][i].node;
            int weight = v[node][i].weight;

            // 다음 노드에 저장된 값 > 다음 노드로 방문하면서 소비할 가중치의 합   --> 일때만 값 갱신, 그리고 pq삽입
            if(Dijk[nextNode] > weight + weightSum) {
                Dijk[nextNode] = weight + weightSum;
                pq.push({nextNode, Dijk[nextNode]});
            }
        }
    }
}

int main(void){
    MakeGraph();
    InitDijkArray();
    InitQueue(1); //노드 1을 시작이라고 가정

    DijkStra();
}

