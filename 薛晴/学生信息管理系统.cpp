#include<iostream>
#include <cstring>
using namespace std;
class student
{
public:
    char name[20];
    int num;
    int age;
    char sex;
    int zhuanye;
    student *next;
    student *stu;
    student();
    ~ student ();
    student (char n[20],int nu, int ag, char se,int z);
    void tianjia();
    void shanchu();
    void xiugai();
    void xianshi();
    int zongshu();
    void xianshi1()
    {
          cout<<"名字: "<<name<<" "<<"学号: "<<num<<" "<<"性别: "<<sex<<"年龄: "<<age<<"专业: "<<zhuanye<<endl;
    }
    friend void caozuo(int);
};
student::student()
{
    strcpy(name, "nomame");
    num=0;
    sex='m';
    age=0;
    zhuanye=0;
}
student::student (char n[20],int nu, int ag, char se,int z)
{
    strcpy(name, n);
    num=nu;
    sex=se;
    age=ag;
    zhuanye=z;

}
student::~student(){};
student *s[50];
int i=0;
int j=0;
void student::tianjia()
{
    cout<<"请输入姓名："<<endl;
    cin>>name;
    cout<<"请输入学号："<<endl;
    cin>>num;
    cout<<"请输入年龄："<<endl;
    cin>>age;
    cout<<"请输入性别(m/w)："<<endl;
    cin>>sex;
    cout<<"请输入专业："<<endl;
    cout<<"输入1 计算机科学与技术 输入2 软件工程"<<endl;
    cin>>zhuanye;
	j++;
    s[i]=new student(name,num,age,sex,zhuanye);
    i++;
}
int  student::zongshu()
{
    cout<<"学生总数:"<<i<<endl;
    cout<<endl;

}
void student::shanchu()
{
    cout<<"请输入您要删除的学生姓名："<<endl;
    cin>>name;
    for(int h=0;h<i;h++)
    {
        if(strcmp(name,s[h]->name)==0)
        {
            i--;
            s[h]=s[h+1];
            h++;
            cout<<"删除成功"<<endl;
        }
    }
}

void student::xiugai()
{
    cout<<"请输入您要修改的学生的姓名："<<endl;
    cin>>name;
    for(int h=0;h<i;h++)
    {
        if(strcmp(name,s[h]->name)==0)
       {
           int nu;
           int ag;
           char se;
           int z;
           cout<<"请输入学号: "<<endl;
           cin>>nu;
           cout<<"请输入年龄："<<endl;
           cin>>ag;
           cout<<"请输入性别(m/w): "<<endl;
           cin>>se;
           cout<<"请输入专业："<<endl;
           cout<<"输入1 计算机科学与技术 输入2 软件工程"<<endl;
           cin>>z;
           s[h]->num=nu;
           s[h]->age=ag;
           s[h]->sex=se;
           s[h]->zhuanye=z;
           cout<<"数据修改成功！";
           break;
        }
        if (i==j)
        {
            cout<<"该学生不存在"<<endl;
            break;
        }
    }
}
void student::xianshi()
{
  cout<<"学生信息表  "<<endl;
  if(i==0)
  cout<<"暂无数据"<<endl;
  for(int k=0;k<i;k++)
  {
	  s[k]->xianshi1();
  }
}

void caozuo(int p)
{
   student t;
   switch(p)
   {
        case 1:t.tianjia();
        break;
        case 2:t.shanchu();
        break;
        case 3:t.xiugai();
        break;
        case 4:t.xianshi();
        break;
        case 5:t.zongshu();
        break;
        case 6:exit(0);
        break;
    }
}

int main()
{
	int w;
	do
	{
	    cout<<"1.添加学生"<<endl;
		cout<<"2.删除学生"<<endl;
		cout<<"3.修改学生信息"<<endl;
		cout<<"4.显示所有学生"<<endl;
		cout<<"5.学生总数"<<endl;
		cout<<"5.退出"<<endl;
		int a;
		cin>>a;
		caozuo(a);
		cout<<"1.返回界面"<<endl;
		cout<<"2.退出"<<endl;
		cin>>w;
	}while(w==1);
	return 0;
}
