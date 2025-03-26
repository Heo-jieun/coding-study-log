#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEAP_SIZE 256
#define ARRAY_SIZE 10

// heap의 인덱스 변수
int heap_count = 0; 
int heap[HEAP_SIZE];

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b ; 
    *a = tmp;
}

// heap 삽입
void push(int data){
    // heap에 값 추가 
    heap_count++;
    heap[heap_count] = data;

    // 정렬
    int child = heap_count;
    int parent = child / 2;

    // 자식노드가 부모노드 보다 값이 크면 교환
    while( child >  1 && heap[child] > heap[parent]){
        swap(&heap[parent], &heap[child]);
        child = parent ;
        parent = child / 2;
    }

}

// heap 삭제 
int pop(){
    int result = heap[1];

    // 루트 노드의 값과 heap의 마지막 값 교환
    swap(&heap[1], &heap[heap_count]);
    // heap의 마지막 노드가 최댓값이기 때문에 heap_count를 -1하여 삭제 
    heap_count--;

    // 정렬
    int parent = 1 ;
    int child = parent * 2;
    if(child + 1 <= heap_count ){ // 자식 노드 중 더 큰값 찾기 
        child = (heap[child] > heap[child + 1]) ? child : child+1 ; 
    } 

    while(child <= heap_count && heap[child] > heap[parent]){
        swap(&heap[child], &heap[parent]);
        parent = child; 
        child = parent * 2; 
        if(child + 1 <= heap_count){
            child = (heap[child] > heap[child + 1]) ? child : child + 1; 
        }
    }

    return result;
}

int main(){
    int arr[ARRAY_SIZE];

    srand(time(NULL));

    // 랜덤 값으로 배열생성
    for(int i=0; i < ARRAY_SIZE; i++){
        arr[i] = rand() % 50 + 1;
    }

    // heap초기화 
    for(int i=0; i < ARRAY_SIZE; i++){
        push(arr[i]);
    }

    // heap에서 꺼내면서 값 확인
    for(int i = 0; i<ARRAY_SIZE; i++){
        printf("%d", pop());
    }
    printf("\n");

    return 0;
}