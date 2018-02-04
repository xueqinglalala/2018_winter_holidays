#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#define qwer system("CLS");
/// time ?!!!??sleep?????!!!!!! Sleep(毫秒数);
using namespace std;
class TIME
{
public:
    int shijian;
};
class CLOCK
{
public:
    int hour;
    int minute;
    int second;
    void whattime(int a)//计算时间不输出
    {
        hour = (a/3600);
        minute = (a-hour*3600)/60;
        second = (a-hour*3600-minute*60);
    }
    void showtime( )//输出时间
    {
        printf("%02d,%02d,%02d",hour,minute,second);
    }
};
int main( )
{
    TIME time;
    time.shijian=0;
    CLOCK clock;
///准备完毕///使用whattime计算再使用showtime显示，即可按照总计时器秒数显示时间
    for (int fghj=0;fghj<40;fghj++)//主程序循环40次
    {
        cout<<"欢迎使用不受欢迎的计时器"<<endl<<endl;
        cout<<"输入“1”进入正计时功能，“2”进入倒计时功能"<<endl;
        char sdf=getch();
        qwer;
        switch(sdf)
        {
        case '1':///正计时
            {
                time.shijian=0;
                cout<<"按'h'暂停，按'c'继续，按's'停止计时"<<endl<<"按任意键开始计时";
                getch();

                char ch='1';
                qwer;
                for (int i=0;i<100;i++)
                {
                    if (ch=='s')
                        break;
                    while (1)//一旦输入的字符为 's' / 'h' 则停止循环！
                    {
                        if (ch=='h')
                            break;
                        if (ch=='s')
                            break;
                        clock.whattime(time.shijian);
                        cout<<"按'h'暂停，按'c'继续，按's'停止计时"<<endl;
                        clock.showtime();
                        Sleep(1000);
                        time.shijian++;
                        qwer;
                        if (kbhit())
                        {
                            ch=getch();//暂停和继续：h & s ，继续点c
                        }
                    }
                    if (ch=='s')
                    {
                        break;
                    }
                    cout<<"按'c'继续"<<endl;
                    time.shijian--;
                    clock.showtime();
                    char dfg=getch();
                    if (dfg=='c')
                    {
                        ch='a';
                    }
                    qwer;
                }
                cout<<"正计时的时间为："<<time.shijian-1<<"秒"<<endl<<"按任意键继续";
                getch();
                qwer;
                break;//正计时
            }
        case '2':///倒计时
            {
                int a,b,c;
                cout<<"请输入倒计时的时间：格式为 时 分 秒\n";
                cin>>a>>b>>c;
                time.shijian=a*3600+b*60+c;
                cout<<"按'h'暂停，按'c'继续，按's'停止计时"<<endl<<"按任意键开始计时";
                getch();
                qwer;
                char ch='1';
                qwer;
                while (1)
                {
                    if (ch=='s')
                        break;
                    while (1)//一旦输入的字符为 's' / 'h' 则停止循环！
                    {
                        if (ch=='h')
                            break;
                        if (ch=='s')
                            break;
                        clock.whattime(time.shijian);
                        cout<<"按'h'暂停，按'c'继续，按's'停止计时"<<endl;
                        clock.showtime();
                        Sleep(1000);
                        time.shijian--;
                        qwer;
                        if (kbhit())
                        {
                            ch=getch();//暂停和继续：h & s ，继续点c
                        }
                    }
                    if (ch=='s')
                    {
                        break;
                    }
                    cout<<"按'c'继续"<<endl;
                    time.shijian--;
                    clock.showtime();
                    char dfg=getch();
                    if (dfg=='c')
                    {
                        ch='a';
                    }
                    time.shijian+=2;
                    qwer;
                }
                cout<<"倒计时的时间为：";
                clock.whattime(++time.shijian);
                clock.showtime();
                cout<<endl<<"按任意键继续";
                getch();
                qwer;
                break;
            }
        default:
            {
                cout<<"只可以输入“1”或“2”哦！！！"<<endl<<"press any button to continue~~~";
                getch();
                qwer;
            }
        }
    }//chengxv over
}//mian over















