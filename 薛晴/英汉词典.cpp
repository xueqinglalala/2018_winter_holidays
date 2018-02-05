
#include<stdio.h>
#include<iostream>
#include<string.h>
#include <cstdlib>
#define LEN sizeof (struct cte)
using namespace std;



struct cte  //字典
{
    char  chinese[100];
    char  English[100];
    char  cixing[100];
    char  nandu[100];
    char  leibie[100];
    char  qitayi[100];
    struct cte *next;
};




struct mycte  //单词本
{
    char  chinese[100];
    char  English[100];
    char  cixing[100];
    char  nandu[100];
    char  leibie[100];
    char  qitayi[100];
    struct mycte *next;
};
struct cte *insert(struct cte *head)  //字典单词添加
{
    struct cte *p1,*p2,*p3;
    unsigned int a , b;
    p1=p2=head;
    if (head == 0)
    {
        p1 = (struct cte *)malloc(LEN);
        cout<<"1.中译英"<<endl;
        cout<<"2.英译中"<<endl;
        cin>>a;
    if (a==1)
    {
        cout<<"请输入中文:"<<endl;
        cin>>p1->chinese;
        cout<<"请输入英文"<<endl;
        cin>>p1->English;
        cout<<"请输入词性(名词、动词、形容词、副词、介词)"<<endl;
        cin>>p1->cixing;
        cout<<"请输入难度(易、中、难)"<<endl;
        cin>>p1->nandu;
        cout<<"请输入类别(物品 状态)"<<endl;
        cin>>p1->leibie;
        cout<<"请输入其他含义"<<endl;
        cin>>p1->qitayi;
        cout<<"请仔细检查"<<endl;
        cout<<"中文"<<p1->chinese<<endl;
        cout<<"英文"<<p1->English<<endl;
        cout<<"词性"<<p1->cixing<<endl;
        cout<<"难度"<<p1->nandu<<endl;
        cout<<"类别"<<p1->leibie<<endl;
        cout<<"其他含义"<<p1->qitayi<<endl;
    }
    else if (a==2)
    {
        cout<<"请输入英文"<<endl;
        cin>>p1->English;
        cout<<"请输入中文:"<<endl;
        cin>>p1->chinese;
        cout<<"请输入词性(名词、动词、形容词、副词、介词)"<<endl;
        cin>>p1->cixing;
        cout<<"请输入难度(易、中、难)"<<endl;
        cin>>p1->nandu;
        cout<<"请输入类别(物品 状态)"<<endl;
        cin>>p1->leibie;
        cout<<"请输入其他含义"<<endl;
        cin>>p1->qitayi;
        cout<<"请仔细检查"<<endl;
        cout<<"中文"<<p1->chinese<<endl;
        cout<<"英文"<<p1->English<<endl;
        cout<<"词性"<<p1->cixing<<endl;
        cout<<"难度"<<p1->nandu<<endl;
        cout<<"类别"<<p1->leibie<<endl;
        cout<<"其他含义"<<p1->qitayi<<endl;
    }
    else
    {
        cout<<"输入有误"<<endl;
    }
    head = p1;
    head->next=0;
    }
    else
    {
        p1=(struct cte *)malloc(LEN);
        p3=head->next;
        head->next=p1;
        p1->next=p3;
        cout<<"1.中译英"<<endl;
        cout<<"2.英译中"<<endl;
        cin>>b;
        if (b==1)
        {
            cout<<"请输入中文:"<<endl;
            cin>>p1->chinese;
            cout<<"请输入英文"<<endl;
            cin>>p1->English;
            cout<<"请输入词性(名词、动词、形容词、副词、介词)"<<endl;
            cin>>p1->cixing;
            cout<<"请输入难度(易、中、难)"<<endl;
            cin>>p1->nandu;
            cout<<"请输入类别(物品 状态)"<<endl;
            cin>>p1->leibie;
            cout<<"请输入其他含义"<<endl;
            cin>>p1->qitayi;
            cout<<"请仔细检查"<<endl;
            cout<<"中文"<<p1->chinese<<endl;
            cout<<"英文"<<p1->English<<endl;
            cout<<"词性"<<p1->cixing<<endl;
            cout<<"难度"<<p1->nandu<<endl;
            cout<<"类别"<<p1->leibie<<endl;
            cout<<"其他含义"<<p1->qitayi<<endl;
        }
        else if (b==2)
        {
            cout<<"请输入英文";
            cin>>p1->English;
            cout<<"请输入中文:"<<endl;
            cin>>p1->chinese;
            cout<<"请输入词性(名词、动词、形容词、副词、介词)"<<endl;
            cin>>p1->cixing;
            cout<<"请输入难度(易、中、难)"<<endl;
            cin>>p1->nandu;
            cout<<"请输入类别(物品 状态)"<<endl;
            cin>>p1->leibie;
            cout<<"请输入其他含义"<<endl;
            cin>>p1->qitayi;
            cout<<"请仔细检查"<<endl;
            cout<<"中文"<<p1->chinese<<endl;
            cout<<"英文"<<p1->English<<endl;
            cout<<"词性"<<p1->cixing<<endl;
            cout<<"难度"<<p1->nandu<<endl;
            cout<<"类别"<<p1->leibie<<endl;
            cout<<"其他含义"<<p1->qitayi<<endl;

        }
        else
        {
            cout<<"输入有误"<<endl;
        }
    }
    return head;
}



void cscan(struct cte *head)   //汉译英
{
    struct cte *p;
    char a[100];
    cout<<"请输入:"<<endl;
    cin>>a;
    p = head;
    if(head==0)
        cout<<"本词典当前为空"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->chinese)==0)
        {
            printf("English:%s",p->English);
            p=0;
        }
        else if (strcmp(a,p->chinese) != 0)
            p=p->next;
        if(p==0)
            cout<<"暂无此词条"<<endl;
    }
    system("pause");
}




//单词本
struct mycte *insert(struct mycte *head)  /*单词添加*/
{
    struct mycte *p1,*p2,*p3;
    unsigned int a , b;
    p1=p2=head;
    if (head == 0)
    {
        p1 = (struct mycte *)malloc(LEN);
        cout<<"1.中译英"<<endl;
        cout<<"2.英译中"<<endl;
        cin>>a;
    if (a==1)
    {
        cout<<"请输入中文:"<<endl;
        cin>>p1->chinese;
        cout<<"请输入英文"<<endl;
        cin>>p1->English;
        cout<<"请输入词性(名词、动词、形容词、副词、介词)"<<endl;
        cin>>p1->cixing;
        cout<<"请输入难度(易、中、难)"<<endl;
        cin>>p1->nandu;
        cout<<"请输入类别(物品 状态)"<<endl;
        cin>>p1->leibie;
        cout<<"请输入其他含义"<<endl;
        cin>>p1->qitayi;
        cout<<"请仔细检查"<<endl;
        cout<<"中文"<<p1->chinese<<endl;
        cout<<"英文"<<p1->English<<endl;
        cout<<"词性"<<p1->cixing<<endl;
        cout<<"难度"<<p1->nandu<<endl;
        cout<<"类别"<<p1->leibie<<endl;
        cout<<"其他含义"<<p1->qitayi<<endl;
    }
    else if (a==2)
    {
        cout<<"请输入英文"<<endl;
        cin>>p1->English;
        cout<<"请输入中文:"<<endl;
        cin>>p1->chinese;
        cout<<"请输入词性(名词、动词、形容词、副词、介词)"<<endl;
        cin>>p1->cixing;
        cout<<"请输入难度(易、中、难)"<<endl;
        cin>>p1->nandu;
        cout<<"请输入类别(物品 状态)"<<endl;
        cin>>p1->leibie;
        cout<<"请输入其他含义"<<endl;
        cin>>p1->qitayi;
        cout<<"请仔细检查"<<endl;
        cout<<"中文"<<p1->chinese<<endl;
        cout<<"英文"<<p1->English<<endl;
        cout<<"词性"<<p1->cixing<<endl;
        cout<<"难度"<<p1->nandu<<endl;
        cout<<"类别"<<p1->leibie<<endl;
        cout<<"其他含义"<<p1->qitayi<<endl;
    }
    else
    {
        cout<<"输入有误"<<endl;
    }
    head = p1;
    head->next=0;
    }
    else
    {
        p1=(struct mycte *)malloc(LEN);
        p3=head->next;
        head->next=p1;
        p1->next=p3;
        cout<<"1.中译英"<<endl;
        cout<<"2.英译中"<<endl;
        cin>>b;
        if (b==1)
        {
            cout<<"请输入中文:"<<endl;
            cin>>p1->chinese;
            cout<<"请输入英文"<<endl;
            cin>>p1->English;
            cout<<"请输入词性(名词、动词、形容词、副词、介词)"<<endl;
            cin>>p1->cixing;
            cout<<"请输入难度(易、中、难)"<<endl;
            cin>>p1->nandu;
            cout<<"请输入类别(物品 状态)"<<endl;
            cin>>p1->leibie;
            cout<<"请输入其他含义"<<endl;
            cin>>p1->qitayi;
            cout<<"请仔细检查"<<endl;
            cout<<"中文"<<p1->chinese<<endl;
            cout<<"英文"<<p1->English<<endl;
            cout<<"词性"<<p1->cixing<<endl;
            cout<<"难度"<<p1->nandu<<endl;
            cout<<"类别"<<p1->leibie<<endl;
            cout<<"其他含义"<<p1->qitayi<<endl;
        }
        else if (b==2)
        {
            cout<<"请输入英文";
            cin>>p1->English;
            cout<<"请输入中文:"<<endl;
            cin>>p1->chinese;
            cout<<"请输入词性(名词、动词、形容词、副词、介词)"<<endl;
            cin>>p1->cixing;
            cout<<"请输入难度(易、中、难)"<<endl;
            cin>>p1->nandu;
            cout<<"请输入类别(物品 状态)"<<endl;
            cin>>p1->leibie;
            cout<<"请输入其他含义"<<endl;
            cin>>p1->qitayi;
            cout<<"请仔细检查"<<endl;
            cout<<"中文"<<p1->chinese<<endl;
            cout<<"英文"<<p1->English<<endl;
            cout<<"词性"<<p1->cixing<<endl;
            cout<<"难度"<<p1->nandu<<endl;
            cout<<"类别"<<p1->leibie<<endl;
            cout<<"其他含义"<<p1->qitayi<<endl;

        }
        else
        {
            cout<<"输入有误"<<endl;
        }
    }
    return head;
}




void cscan(struct mycte *head)  //汉译英
{
    struct mycte *p;
    char a[100];
    cout<<"请输入:"<<endl;
    cin>>a;
    p = head;
    if(head==0)
        cout<<"本词典当前为空"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->chinese)==0)
        {
            printf("English:%s",p->English);
            p=0;
        }
        else if (strcmp(a,p->chinese) != 0)
            p=p->next;
        if(p==0)
            cout<<"暂无此词条"<<endl;
    }
    system("pause");
}





void escan(struct cte *head)   /*英译汉*/
{
    struct cte *p;
    char a[100];
    cout<<"please input a word:";
    cin>>a;
    p=head;
    if(head==0)
        cout<<"本词典当前为空"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->English) == 0)
        {
            cout<<"中文:"<<p->chinese;
            p = p->next;
        }
        else if (strcmp(a,p->English)!=0)
            p = p->next;
        if(p==0)
            cout<<"暂无此词条"<<endl;
    }
    system("pause");
}


void qty(struct cte *head)   //单词的所有含义
{
    struct cte *p;
    char a[100];
    cout<<"请输入英文";
    cin>>a;
    p=head;
    if(head==0)
        cout<<"本词典当前为空"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->English) == 0)
        {
            cout<<"中文:"<<p->qitayi<<"     "<<p->chinese<<endl;
            p = p->next;
        }
        else if (strcmp(a,p->English)!=0)
            p = p->next;
        if(p==0)
            cout<<"暂无此词条"<<endl;
    }
    system("pause");
}




void chazhao(struct cte *head)   //按类别查找
{
    struct cte *p;
    char a[100];
    cout<<"请输入类别(物品、状态)";
    cin>>a;
    p=head;
    if(head==0)
        cout<<"本词典当前为空"<<endl;
    while(p!=0)
    {
        if (strcmp(a,p->leibie) == 0)
        {
            cout<<"查找结果："<<p->English<<endl;
            p = p->next;
        }
        else if (strcmp(a,p->leibie)!=0)
            p = p->next;
        if(p==0)
            cout<<"暂无此词条"<<endl;
    }
    system("pause");
}



void kaoshi(struct cte *head)  //汉译英考试
{
    struct cte *p;
    char a[100];
    char b[100];
    int f=0;
    int n,i;
    cout<<"请输入要考试词汇的个数"<<endl;
    cin>>n;
    p = head;
    if(head==0)
        cout<<"本词库暂无此词"<<endl;
     for(i=0;i<n;i++)
    {
        int m=0;
        cout<<"请输入汉语:"<<endl;
        cin>>a;
        cout<<"请输入英文";
        cin>>b;
                if (strcmp(b,p->English)==0)
            {
                f++;
                m=1;
            }
            //else
                //if (strcmp(b,p->English) != 0)
           // {
                //f=f-1;
                p=p->next;
            //}
         cout<<"本题得分"<<m<<endl;
    }

        if(p==0)
                cout<<"无本词汇记录"<<endl;
        cout<<"总得分";
        cout<<f<<endl;

    system("pause");
}





void print (struct cte *head)  /*词典查看*/
{
    struct cte *p;
    p = head;
    if(p==0)
        cout<<"该词典没有任何记录";
    while  (p !=0)
    {
        cout<<"    中文 "<<p->chinese;
        cout<<"    英文 "<<p->English;
        cout<<"    词性 "<<p->cixing;
        cout<<"    难度 "<<p->nandu<<endl;
        p = p->next;
    }
    system("pause");
}




void print (struct mycte *head)  /*单词本查看*/
{
    struct mycte *p;
    p = head;
    if(p==0)
        cout<<"该词典没有任何记录";
    while  (p !=0)
    {
        cout<<"    中文 "<<p->chinese;
        cout<<"    英文 "<<p->English;
        cout<<"    词性 "<<p->cixing;
        cout<<"    难度 "<<p->nandu<<endl;
        p = p->next;
    }
    system("pause");
}




int  main()
{
    void cscan(struct cte *head);
    void escan(struct cte *head);
    void chazhao(struct cte *head);
    void kaoshi(struct cte *head);
    void qty(struct cte *head);
    struct cte *insert(struct cte *head);
    struct cte *startw(void);
    struct mycte *insert(struct mycte *head);
    struct mycte *start(void);
    struct cte *B=0;
    struct mycte *C=0;
    int a,b=0,c;

    while(1)
        {
            cout << "************************" << endl;
            cout << "欢迎使用生活词汇英语字典" << endl;
            cout<<"请选择"<<endl;
            cout<<"     1.汉译英"<<endl;
            cout<<"     2.英译汉"<<endl;
            cout<<"     3.添加新词"<<endl;
            cout<<"     4.查看词典"<<endl;
            cout<<"     5.添加单词本"<<endl;
            cout<<"     6.查看单词本"<<endl;
            cout<<"     7.查找单词"<<endl;
            cout<<"     8.考试"<<endl;
            cout<<"     9.查找单词的所有含义"<<endl;
            cout<<"     10.清除屏幕"<<endl;
            cout << "************************" << endl;

            cin>>a;
            if(a==1)
            {
                cscan(B);
                system("cls");
            }
            else if(a==2)
            {
                escan(B);
                system("cls");
            }
            else if(a==3)
            {
                B = insert(B);
                system("cls");
            }
            else if(a==4)
            {
                print(B);
                system("cls");
            }
            else if(a==5)
            {
                C = insert(C);
                system("mycls");
            }
            else if(a==6)
            {
                print(C);
                system("mycls");
            }
            else if(a==7)
            {
                chazhao(B);
                system("cls");
            }
            else if(a==8)
            {
                kaoshi(B);
                system("cls");
            }
             else if(a==9)
            {
                qty(B);
                system("cls");
            }
            else if(a==10)
                system("cls");
            else
                cout<<"输入有误：";
        }
}

