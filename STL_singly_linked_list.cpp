#include <iostream>
using namespace std;

template<class T>
class Node { 
public:
	T data; // T타입의 데이터를 저장하는 멤버 변수 data 
	Node<T>* next = nullptr; // 다음 노드를 가리키는 포인터 next 정의 , 마지막 노드의 포인터는 nullptr 
	

};
template<class T>
class singleLinkedList { //리스트의 구성
public:
	singleLinkedList();
	~singleLinkedList();
	void push(T element); //element를 리스트의 마지막 원소로 넣는 함수
	void show(); //리스트의 모든 원소값을 출력하는 함수

private:
	Node<T>* head; //리스트의 첫 번째 원소
	Node<T>* tail; //리스트의 마지막 원소
};
template<class T>
singleLinkedList<T>::singleLinkedList() : head(nullptr),tail(nullptr){} 

template<class T>
singleLinkedList<T>::~singleLinkedList() {
	Node<T>* now_number = head;
	while (now_number != nullptr) { // 마지막 노드의 다음이 nullptr이니 그것이 아니라면...
		Node<T>* next = now_number->next;//다음 노드를 가리키는 포인터를 now_number->next로 설정
		delete now_number; // 원래꺼는 메모리에서 해제해줘야 한다...
		now_number = next; // 포인터를 그 다음 노드로 이동시킴 
	}
}
template<class T>
void singleLinkedList<T>::push(T element) {
	Node<T>* newnode = new Node<T>;// 새로운 노드 생성, value값은 element로 초기화
	newnode->data = element; // 새로운 노드에 데이터를 설정, element는 새로운 노드에 저장할 데이터
	newnode->next = nullptr; // 새로운 노드의 다음 next포인터를 nullptr 로 초기화, 마지막 노드에 추가하는 것을 의미
	if (tail == nullptr) { // 리스트가 아예 비어있는 경우
		head = tail = newnode; //head와 tail을 새로운 노드로 설정

	}
	else { // 리스트가 비어있지 않는 경우
		tail->next = newnode; //tail의 다음 노드를 새로운 노드로 설정한다.
		tail = newnode; // tail을 새로운 노드로 이동시킴 
	}


}
template<class T>
void singleLinkedList<T>::show() {
	Node<T>* now_number = head;
	while (now_number != nullptr) {
		cout << now_number-> data;
		if (now_number->next != nullptr) {
			cout << "->";
		}
		now_number = now_number->next;
	}

}

int main() {
	singleLinkedList<int>* idx = new singleLinkedList<int>;
	idx->push(1);
	idx->push(2);
	idx->push(3);
	idx->push(4);
	idx->push(5);
	idx->show();
	
}
