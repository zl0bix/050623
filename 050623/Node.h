#pragma once
#include<iostream>
#include<vector>
#include<iterator>
#include<string>
class Node {
	int _data;
	Node* _next;
public:
	Node(int data);
	void SetNext(Node* next);
	Node* GetNext();

	int GetData();

};
