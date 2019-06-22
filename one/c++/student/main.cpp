#include "stu.h"
int main()
{
cout<<"选择下面的一个项目："<<endl;
cout<<"1 创建"<<endl;
cout<<"2 添加"<<endl;
cout<<"3 查询"<<endl;
cout<<"4 修改"<<endl;
cout<<"5 删除"<<endl;
cout<<"6 显示"<<endl;
cout<<"7 文件导入"<<endl;
cout<<"8 文件导出"<<endl;
cout<<"9 退出"<<endl;
cout<<"请选择："<<endl;
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
		case 9:cout<<"退出系统";exit(0);
}

	else
		cout<<"输入数字错误，请重新输入"<<endl;
}

return 0;
}