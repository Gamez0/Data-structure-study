#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int e){
			this->data = e;
			this->next = NULL;
		}
};

class SLinkedList{
	public:
		Node* head;
		Node* tail;
		
		SLinkedList(){
			head = NULL;
			tail = NULL;
		}
		void addFront(int X){
			Node* node = new Node(X);
			if(!head){ // 리스트가 비어 있을 때 
//				Node* node;
//				node->next=NULL;
//				node->data = X;
				this->head = node;
				this->tail = node;
			}
			else{
				node->next = head;
				this->head = node;
			}
		}
		int removeFront(){
			if(head==NULL){
				return 0;
			}
			else{
				int a = head->data;
				head = head->next;
				return a;
			}
		}
		int front(){
			if(head==NULL){
				return 0;
			}
			else{
				return head->data;
			}
		}
		int empty(){
			if(head==NULL){
//				cout<<"Empty."<<endl;
				return 0;
			}
			else{
//				cout<<"Not empty."<<endl;
				return 1;
			}
		}
		void showList(){
//			cout<<"ShowList called."<<endl;
			if(!head){
				cout<<"List is empty!"<<endl;
			}
			else{
				Node* temp = head;
				while(temp!=NULL){
//					cout<<"Something?"<<endl;
					
					cout<<temp->data<<" ";
					temp = temp->next;
				}
				cout<<endl;
			}
		}
		void addBack(int X){
			Node* node = new Node(X);
			if(!empty()){
				this->head = node;
				this->tail = node;
			}
			else{
				this->tail->next = node;
				this->tail = node;
			}
		}
};

int main(){
	SLinkedList a = SLinkedList();
	
	a.addFront(5);
	a.addFront(4);
	a.addFront(3);
	a.addFront(2);
	a.addFront(1);
	a.showList();
	a.removeFront();
	a.showList();
	cout<<a.front()<<endl;
	a.empty();
	a.addBack(6);
	a.addFront(1);
	a.showList();
}
