#include"li05_11_person.h"
Person::Person(string id,string na,string se)
{
	ID=id;
	name=na;
	sex=se;
}
void Person::Input()
{
	cout<<"��������Ϣ\n";
	cout<<"�� ��:";
	cin>>ID;
	cout<<"�� ��:";
	cin>>name;
	cout<<"�Ա�(��/Ů):";
	cin>>sex;
}
string Person::GetID()
{
	return ID;
}
string Person::GetName()
{
	return name;
}
string Person::GetSex()
{
	return sex;
}
Student::Student(string id,string na,string se,string spec):
Person(id,na,se)
{
	speciality=spec;
}
void Student::Input()
{
	Person::Input();
	cout<<"ר ҵ:";
	cin>>speciality;
}
string Student::GetSpeciality()
{
	return speciality;
}
Graduate::Graduate(string id,string na,string se,string spec,string rese):
Person(id,na,se),Student(id,na,se,spec)
{
	researchTopic=rese;
}
void Graduate::Input()
{
	Student::Input();
	cout<<"�о�����:";
	cin>>researchTopic;
}
string Graduate::GetResearchTopic()
{
	return researchTopic;
}
Teacher::Teacher(string id,string na,string se,string title):
Person(id,na,se)
{
	academicTitle=title;
}
void Teacher::Input()
{
	Person::Input();
	cout<<"ְ ��:";
	cin>>academicTitle;
}
string Teacher::GetAcademicTitle()
{
	return academicTitle;
}
PostgraduateOnJob::PostgraduateOnJob(string id,string na,string se,string spec,string sese,string title):Person(id,na,se),
	Student(id,na,se,spec),Graduate(id,na,se,spec,rese),
	Teacher(id,na,se,title)
{
	;
}
void PostgraduateOnJob::Input()
{
	Graduate::Input();
	cout<<"ְ ��:";
	cin>>academicTitle;
}