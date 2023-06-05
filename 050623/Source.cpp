#include"Node.h"
#include"LinkedList.h"

class Digit {
	int _data;
public:
	Digit(int data): _data(data){}
	int operator+(Digit &digit) {
		return _data + digit._data;		
	}
	int operator-(Digit& digit) {
		if (_data < digit._data)
			return digit._data - _data;
		return _data - digit._data;
	}

};

//class Node {
//	int _data;
//	Node* _next;
//public:
//	Node(int data);
//	void SetNext(Node* next);
//	Node* GetNext();
//
//
//};


int main() {
	/*Digit digit1(5);
	Digit digit2(10);
	std::cout << digit1 + digit2 << std::endl;
	std::cout << digit1 - digit2 << std::endl;*/
	
	LinkedList list;
	list.Push_back(22);
	list.Push_back(33);
	list.Push_back(44);
	list.Push_back(55);
	list.Push_back(66);
	list.Push_back(1);
	list.Push_back(100);
	list.Push_back(77);
	list.ShowList();
	std::cout << list.SearchByIndex(3)->GetData() << std::endl;
	list.PushByIndex(0, 3);
	std::cout << "\n\n";
	list.ShowList();
	



	std::cin.get();
}