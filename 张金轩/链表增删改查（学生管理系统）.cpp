#include<iostream>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#define qwer system("CLS")
using namespace std;

class student
{
public:
    string name;
    int number;
    student* pnext;
    student(string a,int b)
    {
        name = a;
        number = b;
    }
};

student* CreateList()
{
    student* P;
    P = new student("链表",12345);
    P->pnext = NULL;
    return P;
}

void addnode(student* List)
{
    cout<<"请输入你添加的学生信息（姓名+年龄）\n";
    student* P;
    string a;
    int b;
    cin>>a>>b;
    P = new student(a,b);
    P->pnext = NULL;///下一个为空
    while (List->pnext != NULL)
    {
        List = List->pnext;
    }
    ///whlie循环完，list指向尾节点
    List->pnext = P;
    qwer;
}

void addnode2(student* List,string a,int b)
{
    student* P;
    P = new student(a,b);
    P->pnext = NULL;///下一个为空
    while (List->pnext != NULL)
    {
        List = List->pnext;
    }
    ///whlie循环完，list指向尾节点addnode2(List,"张小轩",20);
    List->pnext = P;
}

void showall(student* List)
{
    if (List->pnext == NULL)
    {
        cout<<"表格无内容";
        getch();
        qwer;
    }
    else
    {
        List = List->pnext;
        int renshu = 0;
        while (1)
        {
            renshu++;
            cout<<List->name<<' '<<List->number<<"岁"<<endl;
            if (List->pnext == NULL)
                break;
            List = List->pnext;
        }
        cout<<"一共"<<renshu<<"人，输出完成"<<endl;
        getch();
        qwer;
    }
}//showall

void findnode(student* List)
{
    cout<<"请输入你要查找的人名"<<endl;
    string man;
    cin>>man;
    while (List->name != man)
    {
        List = List->pnext;
    }
    cout<<List->name<<' '<<List->number<<"岁"<<endl;
    getch();
    qwer;
}

void deletenode(student* List)
{
    cout<<"请输入你要删除的人名"<<endl;
    string man;
    cin>>man;
    while (List->pnext->name != man)
    {
        List = List->pnext;
    }
    List->pnext = List->pnext->pnext;
    cout<<"删除完成";
    getch();
    qwer;
}

void changenode(student* List)
{
    cout<<"请输入你要修改的人名"<<endl;
    string man;
    cin>>man;
    while (List->name != man)
    {
        List = List->pnext;
    }
    cout<<List->name<<' '<<List->number<<"岁"<<endl;
    cout<<"请输入修改后的名字和年龄：\n";
    string nnn;
    int uuu;
    cin>>nnn>>uuu;
    List->name = nnn;
    List->number = uuu;
    cout<<"修改完成";
    getch();
    qwer;
}

int main()
{
    student* List;
    List = CreateList();///List指针指向了链表头结点
    addnode2(List,"张小轩",20);
    addnode2(List,"王大饱",19);
    addnode2(List,"赵小乐",21);
    addnode2(List,"李小翠",18);
    addnode2(List,"陈小春",30);
    for (int i=0;i<100;i++)
    {
        cout<<"按a显示全部学生信息\n";
        cout<<"按b添加一个学生信息\n";
        cout<<"按c查找学生信息\n";
        cout<<"按d删除学生信息\n";
        cout<<"按e修改学生信息\n\n";
        char asd = getch();
        switch(asd)
        {
        case 'a':
            {
                showall(List);
                break;
            }
        case 'b':
            {
                addnode(List);
                break;
            }
        case 'c':
            {
                findnode(List);
                break;
            }
        case 'd':
            {
                deletenode(List);
                break;
            }
        case 'e':
            {
                changenode(List);
                break;
            }
        }///主程序switch
    }///主程序for
}
