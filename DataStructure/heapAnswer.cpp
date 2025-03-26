#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEAP_SIZE 256
#define ARRAY_SIZE 10 

// MAX Heap 구현 
// 구현을 쉽게 하기 위해서 노드의 값들은 모두 양수라고 가정
// 배열에서 값 0은 비어있음을 의미한다고 가정
// heap은 배열의 인덱스가 1부터 시작

int heap[HEAP_SIZE]; // max heap
int heap_count = 0 ; // heap원소의 갯수를 나타냄과 동시에 배열의 가장 끝 원소를 나타냄.

void swap(int *a, int *b){
    int tmp = *a; 
    *a = *b; 
    *b = tmp;
}

void init(){
    heap_count = 0;
}

int size(){
    return heap_count;
}

// 힙 삽입
void push(int data){
    // 힙의 가장 끝에 데이터 추가
    heap[++heap_count] = data;

    // 자식노드를 부모 노드와 비교하면서 알맞은 위치로 찾아감
    int child = heap_count;
    int parent = child / 2;
    while(child > 1 && heap[parent] < heap[child]){
        swap(&heap[parent], &heap[child]);
        child = parent; 
        parent = child/2;
    }
}


// 힙 삭제 
int pop(){
    // 힙의 가장 첫번쨰 원소를 반환 
    int result = heap[1];

    // 첫번째 원소를 힙의 가장 끝에 원소와 바꿈
    swap(&heap[1], &heap[heap_count]);

    // 가장 끝의 원소는 쓰지 않을 예정이니 heap_count를 내려줌 -> 삭제
    heap_count-- ;
    
    // 자식노드와 부모노드를 비교하여 알맞은 위치로 찾아감
    int parent = 1;
    int child = parent * 2; 
    if(child + 1 <= heap_count){ // 자식노드 중 더 큰 값을 찾음
        child = (heap[child] > heap[child +1]) ? child : child + 1; 
    }

    while(child <= heap_count && heap[parent] < heap[child]){
        swap(&heap[parent], &heap[child]);

        parent = child;
        child = parent * 2;
        if(child + 1 <= heap_count){ // 자식노드 중 더 큰 값을 찾음
            child = (heap[child] > heap[child +1]) ? child : child +1;
        }
    }

    return result ;
}

int main(){
    int arr[ARRAY_SIZE];

    // 랜던함수를 위한 srand와 seed
    srand(time(NULL));

    // 배열초기화 
    for(int i = 0; i < ARRAY_SIZE; i++){
        // 1 ~ 50 까지의 난수 생성
        arr[i] = rand() % 50 + 1;
    }

    // heap에 값 삽입
    for(int i = 0; i < ARRAY_SIZE; i++){
        push(arr[i]);
    }

    // pop하면서 값들 하나씩 확인
    // Max heap이기 때문에 값들은 내림차순으로 정렬
    for(int i = 0; i < ARRAY_SIZE; i++){
        printf("%d",pop());
    }
    printf("\n");

    return 0; 
}