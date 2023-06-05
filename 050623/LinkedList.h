#pragma once
#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include"Node.h"

class LinkedList {
	Node* _head;
	Node* _tail;
	int _numberOfElements;
public:
	LinkedList();

	void Push_back(int data);

	void ShowList();

	Node* SearchByIndex(int index);

	void PushByIndex(int data,int index);

};
