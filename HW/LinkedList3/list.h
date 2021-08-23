#ifndef LIST_H
#define LIST_H

class Node 
{
private:
		int data;	// Node에 저장될 data
		Node *next;	// 다음 Node에 대한 pointer
		Node *prev; // 이전 Node에 대한 pointer

public:

	Node(int data) { this->data = data; this->next = NULL; } //데이터 들어가는 생성자
	Node(){ this->data = 0; this->next = this; }	// 더미노드

	int getData() { return data; }
	Node * getNext(){ return next; }
	Node * getPrev(){ return prev; }
	void insertNext(Node *n) { 
        if(n!=NULL){
            next = n; 
        }  
    }
	void insertPrev(Node *p){
		prev =p;
	}
};

class LinkedList
{
private:
	Node *head;	// List의 가장 첫 Node를 가리키는 pointer
	Node *tail;	// List의 마지막을 가리키는 pointer

public:
	int nodeLength;	// Node 길이 저장 변수

	LinkedList();	
	~LinkedList();	
	void Append(int data);   // List의 마지막에 새로운 data에 대한 Node 추가
	void Prepend(int data);  // List의 처음에 새로운 data에 대한 Node 추가
	int Length();            // List에 있는 Node의 수를 return
	void Print();            // List에 있는 모든 Node를 head부터 순서대로 출력
	void PrintReverse();        // List에 있는 모든 Node를 tail부터 역순으로 출력
};

#endif