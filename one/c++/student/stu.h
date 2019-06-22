#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<fstream>
class stu
{
private:
	int num,age,flag;
	string sex,name,xy,zy,bj;
public:
	stu(void);
	~stu(void);
	void creat(stu s[100]);
	void add(stu s[100]);
	void search(stu s[100]);
	void xiugai(stu s[100]);
	void delate(stu s[100]);
	void show(stu s[100]);
	void daoru(stu s[100]);
	void daochu(stu s[100]);
};

