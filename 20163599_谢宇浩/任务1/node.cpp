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
	head=new node;  //Ϊ�½ڵ㶯̬�����ڴ�
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
		temp=new node;  //Ϊ�½ڵ㶯̬�����ڴ�
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
	node *curNode=head;  //ָ������ĺ�ڵ�
	node *preNode=NULL;  //ָ�������ǰ�ڵ�
	node *newNode=NULL;  //ָ���½��ڵ�

	while((curNode!=NULL) && (curNode->data<n))  //�ҵ�λ��
	{
		preNode=curNode;  //��ڵ��Ϊǰ�ڵ�
		curNode=curNode->next;
	}

	newNode=new node;  //�½��ڵ�
	if(newNode==NULL)
	{
		cout<<"No memory available!";
		return head;
	}
	newNode->data=n;

	if(preNode==NULL)  //���뵽����ͷ
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
	node *curNode=head;  //ָ��ǰ�ڵ�
	node *preNode=NULL;  //ָ��ǰ�ڵ��ǰ���ڵ�
	while(curNode && curNode->data != n)
	{
		preNode=curNode;  //��ǰ�ڵ��Ϊǰ���ڵ�
		curNode=curNode->next;
	}

	if(curNode==NULL)
	{
		cout<<"Can't find"<<n<<"in the list"<<endl;
		return head;
	}

	if(preNode==NULL)  //ɾ�����׽ڵ�
		head=head->next;
	else
		preNode->next=curNode->next;

	delete curNode;
	return head;  //��������ָ��
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