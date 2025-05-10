#include<iostream>
#include<iomanip>
#include"li05_11_person.h"
using namespace std;

const int SUM=5;

class Group
{
protected:
	PostgraduateOnJob st[SUM];
	int sum;
public:
	Group();
	void Input();
	void SortByID();
	void Output();
};
Group::Group()
{
	sum=SUM;
}
void Group::Input()
{
	int i;
	for(i=0;i<sum;i++)
	{
		st[i].Input();
	}
}
void Group::SortByID()
{
	int index,i,k;
	PostgraduateOnJob temp;
	for(k=0;k<sum-1;k++)
	{
		index=k;
		for(i=k+1;i<sum;i++)
		if(st[i].GetID()<st[index].GetID())
			index=i;
		if(index!=k)
		{
			temp=st[index];
			st[index]=st[k];
			st[k]=temp;
		}
	}
}
	void Group::Output()
	{
		int i;
		cout<<endl<<"学生信息表"<<endl;
		cout<<"编号  姓名  性别  专业  研究课题  职称"<<endl;
		for(i=0;i<sum;i++)
		{
			cout<<st[i].GetID()<<setw(8)<<st[i].GetName()<<setw(7)<<st[i].GetSex()<<setw(8)<<st[i].GetSpeciality()<<setw(11)<<setw(7)<<st[i].GetAcademicTitle()<<endl;
		}
	}
	int main()
	{
		Group gl;
		gl.Input();
		gl.SortByID();
		gl.Output();
		system("pause"); //这里加了一个暂停
		return 0;
	}