#include "node.h"


node::node(void)
{
}


node::~node(void)
{
}

node * node::createList(int n)
{
	node *temp,*tail=NULL,*head=NULL;
	int num;
	cin>>num;
	head=new node;  //为新节点动态分配内存
	if(head == NULL)
	{
		cout<<"No memory available!";
		return NULL;
	}
	else
	{
		head->data=num;
		head->next=NULL;
		tail=head;
	}

	for(int i=0;i<n-1;i++)
	{
		cin>>num;
		temp=new node;  //为新节点动态分配内存
		if(temp==NULL)
		{
			cout<<"No memory available!";
			return head;
		}
		else
		{
			temp->data=num;
			temp->next=NULL;
			tail->next=temp;
			tail=temp;
		}
	}
	return head;
}

node * node::insertData(int n,node * head)
{
	node *curNode=head;  //指向插入点的后节点
	node *preNode=NULL;  //指向插入点的前节点
	node *newNode=NULL;  //指向新建节点

	while((curNode!=NULL) && (curNode->data<n))  //找到位置
	{
		preNode=curNode;  //后节点变为前节点
		curNode=curNode->next;
	}

	newNode=new node;  //新建节点
	if(newNode==NULL)
	{
		cout<<"No memory available!";
		return head;
	}
	newNode->data=n;

	if(preNode==NULL)  //插入到链表头
	{
		newNode->next=curNode;
		return newNode;
	}
	else
	{
		preNode->next=newNode;
		newNode->next=curNode;
		return head;
	}
}

node * node::deleteData(int n,node * head)
{
	node *curNode=head;  //指向当前节点
	node *preNode=NULL;  //指向当前节点的前驱节点
	while(curNode && curNode->data != n)
	{
		preNode=curNode;  //当前节点变为前驱节点
		curNode=curNode->next;
	}

	if(curNode==NULL)
	{
		cout<<"Can't find"<<n<<"in the list"<<endl;
		return head;
	}

	if(preNode==NULL)  //删除链首节点
		head=head->next;
	else
		preNode->next=curNode->next;

	delete curNode;
	return head;  //返回链首指针
}

void node::outputList(node * head)
{
	cout<<"List:";
	node *curNode=head;

	while(curNode)
	{
		cout<<curNode->data;
		if(curNode->next)
			cout<<"->";
		curNode=curNode->next;
	}
	cout<<endl;
	return;
}

node * node::findData(int n,node * head)
{
	node *curNode=head;
	while(curNode)
	{
		if(curNode->data==n)
		{
			cout<<"Find"<<n<<" in the list."<<endl;
			return curNode;
		}
		curNode=curNode->next;
	}
	cout<<"Can't find"<<n<<" in the list."<<endl;
	return NULL;
}