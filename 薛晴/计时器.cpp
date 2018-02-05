#include<iostream>
#include<windows.h>
#include<iomanip>
#include<conio.h>
#include<time.h>
#include<cstdlib>
using namespace std;
//定位光标
void gotoxy(int x,int y)
{
    COORD pos={x,y};
    HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, pos);
}
//隐藏光标
void  hidden()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    GetConsoleCursorInfo(hOut,&cci);
    cci.bVisible=0;
    SetConsoleCursorInfo(hOut,&cci);
}
class Time
{
public:
    Time()
    {
       hour=0,minute=0,second=0;
    }
    void xianshi();
    void daojishi();
    void show();
    void jinwei();
    void fuwei()
   {
        hour=0,minute=0,second=0;
   }
    void caozuo1();
    void caozuo2();
    void set(int h,int m,int s)
    {
         hour=h;
         minute=m;
         second=s;
    }
private:
    int hour;
    int minute;
    int second;
 } ;


 //进位函数
 void Time::jinwei()
{
    second++;
    if(60==second)
    {
       second=0;
       minute=minute+1;
    }
    else
        if(60==minute)
        {
           minute=0;
           hour=hour+1;
        }
    Sleep(1000);
}


//倒计时函数
void Time::daojishi()
{
    if(second>60)
    {
        int a,b,c;
        //h,m,s
        a=second/3600;
        second=second-a*3600;
        b=second/60;
        second=second-b*60;
        hour=hour+a;
        minute=minute+b;
    }
        second--;
        if(second==-1)
        {
            second=59;
            minute--;
            if(minute==-1)
            {
                minute=59;
                hour--;
                if(hour==-1)
                {
                    cout<<"时间到了"<<endl;
                }
            }
        }
    Sleep(1000);
}

//显示函数
void Time::xianshi()
{
    gotoxy(11,11);
    cout<<"\n"<<right<<setfill('0')<<setw(2)<<hour<<':'<<right<<setfill('0')<<setw(2)<<minute<<':'<<right<<setw(2)<<second<<setfill('0')<<"\n";
    cout<<"\n";
    cout<<"\n"<<"按a开始,按p暂停,按空格继续,按s停止"<<endl;
}
//显示函数

void Time::caozuo1()
{
    char ch;
    hidden();
    ch=getch();
    if(ch=='a'||ch=='A')
    {
        while(1)
        {
            if(kbhit())//检查当前是否有键盘输入
            {
                hidden();
                ch=getch();
                if(ch=='p'||'P')
                {
                    caozuo1();
                }
            }
            if(ch=='s'||ch=='S')
            {
                break;
            }
            jinwei();
            xianshi();
        }
    }
    if(ch==' ')
    {
        jinwei();
        xianshi();
        caozuo1();
    }
}

void Time::caozuo2()
{
    char ch;
    hidden();
    ch=getch();
    if(ch=='a'||ch=='A')
    {
        while(1)
        {
            if(kbhit())
            {
                hidden();
                ch=getch();
                if(ch=='p'||'P')
                {
                    caozuo2();
                }
            }
            if(ch=='s'||ch=='S')
            {
                break;
            }
            daojishi();
            xianshi();
        }
    }
    if(ch==' ')
    {
        daojishi();
        xianshi();
        caozuo2();
    }
}

int main()
{
    int m;
    cout<<"输入1正计时"<<endl;
    cout<<"输入2倒计时"<<endl;
    cin>>m;
    if(m==1)
    {
        Time a;
        gotoxy(20,40);
        a.xianshi();
        a.caozuo1();
    }
    if(m==2)
    {

        Time b;
        gotoxy(5,5);
        int h,m,s;
        cout<<"input hour:";
        cin>>h;
        cout<<"input minute:";
        cin>>m;
        cout<<"input second:";
        cin>>s;
        cout<<"进入下一个界面,按a后请按回车"<<endl;
        while(1)
        {
            b.set(h,m,s);
            b.xianshi();
            Sleep(1000);
            system("cls");
            b.caozuo2();
        }
    }
     return 0;
}
