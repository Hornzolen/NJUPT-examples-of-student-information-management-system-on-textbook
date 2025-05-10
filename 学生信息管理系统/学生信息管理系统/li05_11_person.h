#ifndef _PERSON
#define _PERSON
#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
	string ID;
	string name;
	string sex;
public:
	Person( string="000",string="",string="ÄÐ");
	void Input();
	string GetID();
	string GetName();
	string GetSex();
};
class Student:virtual public Person
{
protected:
	string speciality;
public:
	Student(string,string,string,string="");
	void Input();
	string GetSpeciality();
};
class Graduate:virtual public Student
{
protected:
	string researchTopic;
public:
	Graduate(string="000",string="",string="ÄÐ",string="",string="");
	void Input();
	string GetResearchTopic();
};
class Teacher:virtual public Person
{
protected:
	string academicTitle;
public:
	Teacher(string,string,string,string="");
	void Input();
	string GetAcademicTitle();
};
class PostgraduateOnJob:public Graduate,public Teacher
{
public:
	PostgraduateOnJob(string="000",string="",string="ÄÐ",string="",string="",string="");
	void Input();
};
#endif