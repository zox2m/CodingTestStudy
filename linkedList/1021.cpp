#include <list>
#include <iostream>
#include <string>
using namespace std;

// 노드 구조 정의 
typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
} NODE;

typedef struct linkedList
{
    int size;
    NODE* head;
    NODE* rear;

}LLIST;

// 사용될 함수 선언 //

// pList 위치에 data 값 삽입 
void insert(LLIST* pList, int data); 
// 1번 값 버림
void func1(LLIST* pList);
// 왼쪽으로 1칸씩 밀기 
void func2(LLIST* pList);
// 오른쪽으로 1칸씩 밀기 
void func3(LLIST* pList);

// 왼쪽으로 미는 연산이, 해당 data까지 몇번 소요되는지 계산
int count_func2(LLIST* pList, int data); 
// 오른쪽으로 미는 연산이, 해당 data까지 몇번 소요되는지 계산
int count_func3(LLIST* pList, int data); 

//할당 해제 
void destroy(LLIST* pList);


int main()
{
    int n; // 전체 개수
    int ans = 0; // 수행 횟수
    int m; // 삭제하려는 숫자 갯수

    int find; // 찾으려는 수 

    cin >> n>>m; 

    // 빈 링크드리스트 생성 
    LLIST* I = (LLIST*)malloc(sizeof(LLIST));
    I->head = NULL;
    I->rear = NULL;
    I->size = 0;
    
    //n번 반복하며 값 추가
    for(int i=1;i<=n;i++)
    {
        insert(I,i);
    }
    //m번 반복하며 값 찾기 
    for(int i=0; i< m;i++)
    {
        cin >>find;

        // 펑2랑 펑3중에 더 빠른걸로 
        if(count_func2(I,find) <= count_func3(I,find))
        {
            while(I->head->data != find)
            {
                func2(I);
                ans++;
            }
            func1(I);
        }
        else
        {
            while(I->head->data != find)
            {
                func3(I);
                ans++;
            }
            func1(I);
        }
    }
    cout << ans;
    destroy(I);

    return 0;
}

void insert(LLIST* pList, int data)
{
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    newNode ->data = data;
    newNode -> next = newNode -> prev = NULL;

    if(!pList -> head)
    {
        pList->head = newNode;
        pList->head-> next = newNode;
        pList->head-> prev = newNode;
        pList->rear = pList->head;
    }
    else
    {
        newNode->prev = pList->rear;
        pList->rear->next = newNode;
        pList->rear = newNode;
        pList->head->prev = pList->rear;
        pList->rear->next = pList->head;
    }
    pList -> size++;

}

// 1번 값 버림
void func1(LLIST* pList)
{
    NODE* deleteNode = pList->head;
        pList->head = pList->head->next;
        pList->rear->next = pList->head;
        pList->head->prev = pList->rear;
        free(deleteNode);
}
// 왼쪽으로 1칸씩 밀기 
void func2(LLIST* pList)
{
    pList->rear = pList->head;
    pList->head = pList->head->next;
}
// 오른쪽으로 1칸씩 밀기 
void func3(LLIST* pList)
{
    pList->head = pList->rear;
    pList->rear = pList->rear->prev;
}

// 왼쪽으로 미는 연산이, 해당 data까지 몇번 소요되는지 계산
int count_func2(LLIST* pList, int data)
{
    NODE* curNode = pList->head;
    int count =0;
    while(data != curNode -> data)
    {
        count ++;
        curNode = curNode -> next;
    }
    return count;
}
// 오른쪽으로 미는 연산이, 해당 data까지 몇번 소요되는지 계산
int count_func3(LLIST* pList, int data)
{
    NODE* curNode = pList->rear;
    int count =1;
    while(data != curNode -> data)
    {
        count ++;
        curNode = curNode -> prev;
    }
    return count;
}

//할당 해제 
void destroy(LLIST* pList)
{
    NODE* deleteNode = pList->head;
    while(!pList->head)
    {
        pList->head = pList->head->next;
        free(deleteNode);

    }
    free(pList);
}