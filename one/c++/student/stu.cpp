#include "stu.h"


stu::stu(void)
{
}


stu::~stu(void)
{
}
void stu::creat(stu s[100])
{
	cout<<"����ѧ��������Ϣ��"<<endl;
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
	cout<<"���ѧ����Ϣ��"<<endl;

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
	cout<<"������Ҫ��ѯ��ѧ����ѧ�Ų�ѯ��1�����༶��רҵ��2�������֣�"<<endl;
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
			cout << "û�и�ѧ����" << endl; break;
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
			cout << "û�и�ѧ����" << endl; break;
	}
	}
	
}
void stu::xiugai(stu s[100])
{
	cout<<"����Ҫ�޸ĵ�ѧ����ѧ�ţ�"<<endl;
	int a;
	cin >> a;
	for (int i = 0; i < 100; i++)
	{
		if (s[i].flag == 1 && s[i].num== a)
		{
			cin >>s[i].num>> s[i].name >> s[i].sex>> s[i].age >> s[i].bj>> s[i].xy>> s[i].zy;s[i].flag=1;break;
		}
		if(s[i].flag == 0)cout << "û�и�ѧ����" << endl; break;
	}
}
void stu::delate(stu s[100])
{
	cout<<"����Ҫɾ����ѧ����������ѧ��,�ֱ���1��2����"<<endl;
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
	cout<<"ѧ��������Ϣ�ǣ�"<<endl;
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
	cout << "��ʾ��ѧ���������Ϣ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (s[i].flag == 1)
		{
			outfile << s[i].num << " " <<s[i].name<<" "<<s[i].sex<<" "<<  s[i].age << " " << s[i].bj<< " "<<   s[i].xy << " " << s[i].zy << endl;
		}
	}
	outfile.close();
}