#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <conio.h>
using namespace std;

int x,y;
int n=1;
int snacklong=2;
int myscore=0;
char tu[20][48]={"■■■■■■■■■■■■■■■■■■■■■■■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■                                          ■\n",
                 "■■■■■■■■■■■■■■■■■■■■■■■\n"};

int snack[20][3]={0};
//方向
enum direction{to_east=2,to_south=1,to_west=-2,to_north=-1};
//改变方向
int directsnack=to_west;


void menu()
{

    cout<<"\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t欢迎使用贪吃蛇\n\n";
    cout<<"\t\t\t\t\tw a s d 控制蛇的方向\n\n";
    cout<<"\t\t\t\t\t按a开始游戏\n\n";
}

//背景
void background()
{
    for(int i=0;i<20;i++)
    {
        cout<<tu[i];
    }
}
//画蛇
void drawsnack()
{
    int i;
    for(i=0;snack[i][0]!=0;i++)
    {
        strncpy(&tu[snack[i][0]][snack[i][1]],"■",2);
    }
}
//销去蛇残留
void killsnake()
{
    int i;
    for(i=0;snack[i][0]!=0;i++)
    {
        strncpy(&tu[snack[i][0]][snack[i][1]],"  ",2);
    }
}

//设置蛇的随机位置
void snakeborn()
{
    int X=0;
    int Y=0;
    srand((unsigned)time(NULL));
    X=rand()%17+3;
    Y=rand()%18+1;

    snack[0][0]=Y;
    snack[0][1]=X*2;
    snack[0][2]=to_west;


    snack[1][0]=Y;
    snack[1][1]=X*2+2;
    snack[1][2]=to_west;

    snack[2][0]=Y;
    snack[2][1]=X*2+4;
    snack[2][2]=to_west;

    drawsnack();//画蛇
}
//蛇动
void snackmove()
{
    int i;
    killsnake();//消去蛇的残留
    snack[0][2]=directsnack;
    for(i=49;i>=1;i--)
    {
        if(0==snack[i][0])
        {
            continue;
        }
            snack[i][0]=snack[i-1][0];
            snack[i][1]=snack[i-1][1];
            snack[i][2]=snack[i-1][2];

    }
    if(snack[0][2]==to_east||snack[0][2]==to_west)//处理蛇头
    {
        snack[0][1]+=snack[0][2];
    }
    else
    {
        snack[0][0]+=snack[0][2];
    }
    drawsnack();
}

//蛇的方向
void direction()
{
    if(GetAsyncKeyState('W'))
    {
        directsnack=to_north;
    }
    else if(GetAsyncKeyState('S'))
    {
        directsnack=to_south;
    }
    else if(GetAsyncKeyState('A'))
    {
        directsnack=to_west;
    }
    else if(GetAsyncKeyState('D'))
    {
        directsnack=to_east;
    }
}

//蛇死亡判断
bool snackdie()
{
    if(snack[0][2]==to_east||snack[0][2]==to_west)//蛇头下一格是方块死亡
    {
        if(0==strncmp(&tu[snack[0][0]][snack[0][1]+snack[0][2]],"■",2))
        {
            return false;
        }
    }
    else
    {
        if(0==strncmp(&tu[snack[0][0]+snack[0][2]][snack[0][1]],"■",2))
        {
            return false;
        }
    }
    return true;
}

//食物
void food()
{
    int i;
    if(n==0)
    {
        return;
    }
    srand((unsigned)time(NULL));
    while(1)
    {
        x=(rand()%21+1)*2;
        y=rand()%18+1;
        for(i=0;snack[i][0]!=0;i++)
        {
            if(x==snack[i][1]&&y==snack[i][0])
            {
                n=0;
            }
        }
        if(n==1)
        {
            break;
        }
    }
    n=0;
    strncpy(&tu[y][x],"☆",2);
}

//蛇变长
void snackgrowup()
{
    if(x==snack[0][1]&&y==snack[0][0])
    {
        if(to_west==snack[snacklong][2])//向西，向东加一
        {
            snack[snacklong+1][0]=snack[snacklong][0];
            snack[snacklong+1][1]=snack[snacklong][1]+2;
            snack[snacklong+1][2]=snack[snacklong][2];
        }
        else if(to_east==snack[snacklong][2])//向东，向西加一
        {
            snack[snacklong+1][0]=snack[snacklong][0];
            snack[snacklong+1][1]=snack[snacklong][1]-2;
            snack[snacklong+1][2]=snack[snacklong][2];
        }
        else if(to_north==snack[snacklong][2])//向南，向北加一
        {
            snack[snacklong+1][0]=snack[snacklong][0]-1;
            snack[snacklong+1][1]=snack[snacklong][1];
            snack[snacklong+1][2]=snack[snacklong][2];
        }
        else if(to_south==snack[snacklong][2])//向北，向南加一
        {
            snack[snacklong+1][0]=snack[snacklong][0]+1;
            snack[snacklong+1][1]=snack[snacklong][1];
            snack[snacklong+1][2]=snack[snacklong][2];
        }
        snacklong++;
        n=1;
        myscore++;
    }
}

//分数
void score()
{
    cout<<"\n\n\n";
    cout<<"w a s d 控制蛇的方向\n\n";
    cout<<"得分:"<<myscore<<endl;
}


int main()
{
    menu();
    char a ;
    cin>>a;
    if(a=='a')
    {
        system("cls");
        snakeborn();
        background();
        while(1)
        {
            system("cls");
            food();
            snackgrowup();
            direction();
            if(snackdie()==false)
            {
                break;
            }
            snackmove();
            background();
            score();
            Sleep(1000);
        }
        system("pause");
    }
    return 0;
}
