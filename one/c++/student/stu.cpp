#include "stu.h"


stu::stu(void)
{
}


stu::~stu(void)
{
}
void stu::creat(stu s[100])
{
	cout<<"创建学生基本信息："<<endl;
	for(int i=0;i<100;i++)
	{
		cin>>s[i].num ;
		if(s[i].num==0)break;
			else
				{cin>> s[i].num>> s[i].name >> s[i].sex>> s[i].age >> s[i].bj>> s[i].xy>> s[i].zy;
		          s[i].flag=1;  
		         }	
	}
}
void stu::add(stu s[100])
{
	cout<<"添加学生信息："<<endl;

	for(int i=0;i<100;i++)
	{
		cin>>s[i].num ;
		if(s[i].num==0)break;
		else
		{
			
			cin >>s[i].num>> s[i].name >> s[i].sex>> s[i].age >> s[i].bj>> s[i].xy>> s[i].zy;s[i].flag=1;break;
			
		}
	}
}
void stu::search(stu s[100])
{
	cout<<"输入想要查询的学生的学号查询（1）、班级和专业（2）的数字："<<endl;
	string a,d;
	int b,c;
	cin>>b;
	if(b==1)
	{cin>>c;
	for(int i=0;i<100;i++)
	{
		
		if (s[i].flag == 1 && s[i].num == c)
		{
			cout << s[i].num << " " <<s[i].name<<" "<<s[i].sex<<" "<<  s[i].age << " " << s[i].bj<< " "<<   s[i].xy << " " << s[i].zy << endl;
		}
		 else if (s[i].flag==0)
			cout << "没有该学生！" << endl; break;
	}
	}
if(b==2)
	{cin>>a>>d;
	for(int i=0;i<100;i++)
	{
		
		if (s[i].flag == 1 && s[i].bj ==a&&s[i].zy==d)
		{
			cout << s[i].num << " " <<s[i].name<<" "<<s[i].sex<<" "<<  s[i].age << " " << s[i].bj<< " "<<   s[i].xy << " " << s[i].zy << endl;
		}
		 else if (s[i].flag==0)
			cout << "没有该学生！" << endl; break;
	}
	}
	
}
void stu::xiugai(stu s[100])
{
	cout<<"输入要修改的学生的学号："<<endl;
	int a;
	cin >> a;
	for (int i = 0; i < 100; i++)
	{
		if (s[i].flag == 1 && s[i].num== a)
		{
			cin >>s[i].num>> s[i].name >> s[i].sex>> s[i].age >> s[i].bj>> s[i].xy>> s[i].zy;s[i].flag=1;break;
		}
		if(s[i].flag == 0)cout << "没有该学生！" << endl; break;
	}
}
void stu::delate(stu s[100])
{
	cout<<"输入要删除的学生的姓名或学号,分别用1，2代表"<<endl;
	string a;int b,i;cin>>i;
	if(i==1)
{cin>>a;
	for (int i = 0; i < 100; i++)
		{
		if (s[i].flag == 1 && s[i].name == a)
		{
			s[i].flag=0;break;
		}
	}}
	if(i==2)
{cin>>b;
	for (int i = 0; i < 100; i++)
		{
		if (s[i].flag == 1 && s[i].num== b)
		{
			s[i].flag=0;break;
		}
	}
	}
}
void stu::show(stu s[100])
{
	cout<<"学生基本信息是："<<endl;
	for(int i = 0; i < 100; i++)
	{
	if(s[i].flag==1)
		{
		cout << s[i].num << " " <<s[i].name<<" "<<s[i].sex<<" "<<  s[i].age << " " << s[i].bj<< " "<<   s[i].xy << " " << s[i].zy << endl;break;
		}
	}
}
void stu::daoru(stu s[100])
{
	ifstream infile("f1.txt");
	if (!infile)
	{
		cerr << "open error!" << endl;
		exit(1);
	}
	for (int i = 0; i < 1; i++)
	{
		infile >> s[i].num>> s[i].name >> s[i].sex>> s[i].age >> s[i].bj>> s[i].xy>> s[i].zy;s[i].flag=1;
	    cout << s[i].num << " " <<s[i].name<<" "<<s[i].sex<<" "<<  s[i].age << " " << s[i].bj<< " "<<   s[i].xy << " " << s[i].zy << endl;
	}
	infile.close();
}
void stu::daochu(stu s[100])
{
	ofstream outfile("f2.txt");
	if (!outfile)
	{
		cerr << "oopen error!" << endl;
		exit(1);
	}
	cout << "显示出学生的相关信息：" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (s[i].flag == 1)
		{
			outfile << s[i].num << " " <<s[i].name<<" "<<s[i].sex<<" "<<  s[i].age << " " << s[i].bj<< " "<<   s[i].xy << " " << s[i].zy << endl;
		}
	}
	outfile.close();
}