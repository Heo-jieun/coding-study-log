#include <iostream>
#include <queue>
using namespace std;

int main(){
    // maxheap
    priority_queue<int, vector<int>, less<int>> pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(3);
    pq1.push(10);

    cout << "Max Heap PQ : ";
    while(!pq1.empty()){
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;

    // minheap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(11);
    pq2.push(15);
    pq2.push(6);
    pq2.push(3);

    cout << "Min Heap PQ : " ;
    while(!pq2.empty()){
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << endl;
}