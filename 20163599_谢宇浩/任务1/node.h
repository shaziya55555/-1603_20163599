#pragma once
#include<iostream>
using namespace std;

class node
{
private:
	int data;
	node * next;
public:
	node(void);
	~node(void);
	node * createList(int n);
	node * insertData(int n,node * head);
	node * deleteData(int n,node * head);
	void outputList(node * head);
	node * findData(int n,node * head);
};

