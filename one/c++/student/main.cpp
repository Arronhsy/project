#include "stu.h"
int main()
{
cout<<"ѡ�������һ����Ŀ��"<<endl;
cout<<"1 ����"<<endl;
cout<<"2 ���"<<endl;
cout<<"3 ��ѯ"<<endl;
cout<<"4 �޸�"<<endl;
cout<<"5 ɾ��"<<endl;
cout<<"6 ��ʾ"<<endl;
cout<<"7 �ļ�����"<<endl;
cout<<"8 �ļ�����"<<endl;
cout<<"9 �˳�"<<endl;
cout<<"��ѡ��"<<endl;
int i;stu a;
	stu b[100];
while(10)
	{cin>>i;
		if(0<i<10)
		switch(i)
	{
		case 1:a.creat(b);break;
		case 2:a.add(b);break;
		case 3:a.search(b);break;
		case 4:a.xiugai(b);break;
		case 5:a.delate(b);break;
		case 6:a.show(b);break;
		case 7:a.daoru(b);break;
		case 8:a.daochu(b);break;
		case 9:cout<<"�˳�ϵͳ";exit(0);
}

	else
		cout<<"�������ִ�������������"<<endl;
}

return 0;
}