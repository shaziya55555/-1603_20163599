#include"node.h"

int main()
{
	int n;
	node * listHead=NULL;
	node p;

	cout<<"Please enter the number of nodes:";  //����
	cin>>n;
	if(n>0)
		listHead=p.createList(n);

	p.outputList(listHead);  //����

	int insertNum;  //����
	cout<<"������Ҫ�����������";
	cin>>insertNum;
	listHead=p.insertData(insertNum,listHead);

	cout<<"�����ı�����";  //����
	p.outputList(listHead);

	int deleteNum;  //ɾ��
	cout<<"������Ҫɾ����������";  
	cin>>deleteNum;
	listHead=p.deleteData(deleteNum,listHead);

	cout<<"ɾ����ı�����";  //����
	p.outputList(listHead);
	
	int findNum;  //����
	cout<<"������Ҫ���ҵ�������";
	cin>>findNum;
	p.findData(findNum,listHead);

	return 0;
}