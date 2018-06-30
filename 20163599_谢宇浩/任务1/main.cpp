#include"node.h"

int main()
{
	int n;
	node * listHead=NULL;
	node p;

	cout<<"Please enter the number of nodes:";  //创建
	cin>>n;
	if(n>0)
		listHead=p.createList(n);

	p.outputList(listHead);  //遍历

	int insertNum;  //插入
	cout<<"请输入要插入的整数：";
	cin>>insertNum;
	listHead=p.insertData(insertNum,listHead);

	cout<<"插入后的遍历：";  //遍历
	p.outputList(listHead);

	int deleteNum;  //删除
	cout<<"请输入要删除的整数：";  
	cin>>deleteNum;
	listHead=p.deleteData(deleteNum,listHead);

	cout<<"删除后的遍历：";  //遍历
	p.outputList(listHead);
	
	int findNum;  //查找
	cout<<"请输入要查找的整数：";
	cin>>findNum;
	p.findData(findNum,listHead);

	return 0;
}