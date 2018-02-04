 #include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;
#define qwer system("CLS")
int randnum(int m)
{
    int srand(time(NULL));
    int et=m-0+1;
    int r=rand()%et+0;
    return r;
}
int randnum1234( )
{
    int srand(time(NULL));
    return (rand()%2+1);
}
///测验功能#########################################################
class testgo
{
public:

};
///单词功能#########################################################
class Words
{
public:
    string name;//单词拼写
    string chinese;//汉语意思
    string attribute;//词性
    int easy;//难易度
    int mywords;//是否为我单词表里的单词
    Words(string nam,string chi,string att,int eas,int myw)
    {
        name=nam;
        chinese=chi;
        attribute=att;
        easy=eas;
        mywords=myw;
    }
};
///词典功能#####################################################
class Dictionary
{
public:
    int numof_words;//预设五个单词数
};
///欢迎词###########################################################
class Welcome
{
public:
    void welcome_all( )
    {
        cout<<"<<DICTIONARY>>"<<endl<<endl;
        cout<<endl<<endl;
        cout<<"  hello !!!! 我是QQ小冰"<<endl<<endl;
        cout<<"  press 1 to Dictionary"<<endl<<endl;
        cout<<"  press 2 to my_单词本"<<endl<<endl;
        cout<<"  press 3 to do a 小测验"<<endl<<endl;
        cout<<"  press 4 to find a word quickly"<<endl<<endl;
        cout<<"  press 5 to add new words"<<endl;
    }
    void welcome_dictionary( )
    {
        cout<<"#################################"<<endl;
        cout<<"# welcome to use the dictionary #"<<endl;
        cout<<"#################################"<<endl;
    }
    void welcome_test( )
    {
        cout<<"#################################"<<endl;
        cout<<"#  welcome  to  use    测试功能 #"<<endl;
        cout<<"#################################"<<endl;
        cout<<"\n我为你准备了几种测验方法\n请享受测验的过程吧\n\n";
        cout<<"请输入对应测验前面的字母开始测试：\nq： 看中文写英文\nw： 看英文写中文\ne： 看汉语选英语\nr： 看英语选汉语";
    }
};

///###[以下为主函数]############[以下为主函数]########[以下为主函数]######[以下为主函数]########[以下为主函数]##############################################################
int main( )
{
    Dictionary dictionary;
    dictionary.numof_words=15;//字典里记下有五个单词
    Welcome welcome;
    Words *p[100];
    p[0]=new Words("video","视频","是名词哦！",0,1);
    p[1]=new Words("banana","香蕉","是名词哦！",0,1);
    p[2]=new Words("happily","幸福地","是副词哦！",0,0);
    p[3]=new Words("lucky","幸运的","是形容词哦！",0,0);
    p[4]=new Words("cook","烹饪","是动词哦！",0,0);
    p[5]=new Words("distinguish","区分","是动词哦！",1,0);
    p[6]=new Words("commitment","承诺","是名词哦！",1,0);
    p[7]=new Words("emotional","情绪的","是形容词哦！",0,0);
    p[8]=new Words("coverage","覆盖","是名词哦！",1,0);
    p[9]=new Words("television","电视","是名词哦！",0,0);
    p[10]=new Words("newspaper","报纸","是名词哦！",0,0);
    p[11]=new Words("appreciate","欣赏","是动词哦！",0,0);
    p[12]=new Words("situation","情况","是名词哦！",1,0);
    p[13]=new Words("content","满足","是，名词哦！",0,0);
    p[14]=new Words("insulation","绝缘","是动词哦！",1,0);
    for (int i=15;i<100;i++)
    {
        p[i]=new Words("qqqq","错误","错误",1,0);
    }
///##################定义对象定义对象定义对象初始化初始化初始化#########
    for (int asdasda=0;asdasda<50;asdasda++)///主程序循环50次、、、、
    {int sb=0;//while sb=1 则从头开始循环
        welcome.welcome_all( );
        char ch;
        ch=getch( );
        switch(ch)
        {
        case '1'://单词浏览功能，可以以多种类型看单词
            {
                qwer;
                welcome.welcome_dictionary();
                cout<<endl<<"press a to see all words"<<endl;
                cout<<"press b to see different attribute of words"<<endl;
                cout<<"press c to see different difficult of words"<<endl;
                char qwe=getch();
                switch(qwe)//各种类型的单词浏览方式
                {
                case 'a'://所有单词
                    {
                        qwer;
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" 难易度：";
                            if (p[i]->easy==1)
                                cout<<"难 ";
                            else
                                cout<<"简单 ";
                            cout<<"是否已加入我的单词表：";
                            if (p[i]->mywords==1)
                                cout<<"是"<<endl;
                            else
                                cout<<"否"<<endl;
                        }
                        cout<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;
                    }
                case 'b'://词性单词（好几种词性）
                    {
                        qwer;
                        cout<<"<词性分类>"<<endl<<endl<<"看名词输1\n看动词输入2\n看形容词输入3\n看副词输入4\n";
                        char ert=getch();
                        qwer;
                        switch (ert)
                        {//ert switch
                        case '1'://n
                            {
                                cout<<"名词如下：\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->attribute)=="是名词哦！")
                                    {
                                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" 难易度：";
                                            if (p[i]->easy==1)
                                                cout<<"难 ";
                                            else
                                                cout<<"简单 ";
                                            cout<<"是否已加入我的单词表：";
                                            if (p[i]->mywords==1)
                                                cout<<"是"<<endl;
                                            else
                                                cout<<"否"<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        case '2'://v
                            {
                                cout<<"动词如下：\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->attribute)=="是动词哦！")
                                    {
                                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" 难易度：";
                                            if (p[i]->easy==1)
                                                cout<<"难 ";
                                            else
                                                cout<<"简单 ";
                                            cout<<"是否已加入我的单词表：";
                                            if (p[i]->mywords==1)
                                                cout<<"是"<<endl;
                                            else
                                                cout<<"否"<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        case '3'://adj
                            {
                                cout<<"形容词如下：\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->attribute)=="是形容词哦！")
                                    {
                                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" 难易度：";
                                            if (p[i]->easy==1)
                                                cout<<"难 ";
                                            else
                                                cout<<"简单 ";
                                            cout<<"是否已加入我的单词表：";
                                            if (p[i]->mywords==1)
                                                cout<<"是"<<endl;
                                            else
                                                cout<<"否"<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        case '4'://adv
                            {
                                cout<<"副词如下：\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->attribute)=="是副词哦！")
                                    {
                                            cout<<p[i]->name<<endl<<p[i]->chinese<<" "<<p[i]->attribute<<" 难易度：";
                                            if (p[i]->easy==1)
                                                cout<<"难 ";
                                            else
                                                cout<<"简单 ";
                                            cout<<"是否已加入我的单词表：";
                                            if (p[i]->mywords==1)
                                                cout<<"是"<<endl;
                                            else
                                                cout<<"否"<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        default:
                            {
                                qwer;
                                cout<<"only 1--4 is allowed , retry please"<<endl<<"press any button to back to menu";
                                getch();
                                qwer;
                            }
                        }//ert switch 词性分类结束
                        break;
                    }
                case 'c'://难易度单词（难或易）
                    {
                        qwer;
                        cout<<"看难词输入1\n看简单词输入2\n";
                        char nyd=getch();
                        qwer;
                        switch(nyd)
                        {
                        case '1'://难
                            {
                                cout<<"难词如下：\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->easy)==1)
                                    {
                                            cout<<p[i]->name<<" "<<p[i]->chinese<<" "<<p[i]->attribute<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        case '2'://易
                            {
                                cout<<"简单词如下：\n\n";
                                for (int i=0;i<dictionary.numof_words;i++)
                                {
                                    if ((p[i]->easy)==0)
                                    {
                                            cout<<p[i]->name<<" "<<p[i]->chinese<<" "<<p[i]->attribute<<endl;
                                    }
                                }
                                cout<<"\npress any button to back to menu";
                                getch();
                                qwer;
                                break;
                            }
                        default:
                            {
                                qwer;
                                cout<<"only 1--2 is allowed , retry please"<<endl<<"press any button to back to menu";
                                getch();
                                qwer;
                            }

                        }
                        break;
                    }
                default://abc`s default
                    {
                        qwer;
                        cout<<"only abc is allowed , retry please"<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                    }
                }
                break;
            }
///###########################################################以下为个人的单词本功能#######################################
        case '2'://我的单词本功能
            {
                qwer;
                cout<<"《《单词本》》\n\n"<<"单词本功能可以查看目前个人单词本上的单词，以及增加或减少单词本上的单词(必须是在本词典内收录的)\n\n输入s查看单词本，输入i加词，输入o减词\n";
                char sio=getch();
                qwer;
                switch(sio)
                {
                case 's'://输出所有单词本里的单词吧
                    {
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            if (p[i]->mywords==1)
                            {
                                cout<<p[i]->name<<" "<<p[i]->chinese<<" "<<p[i]->attribute<<" 难易度：";
                                if (p[i]->easy==1)
                                    cout<<"难 \n";
                                else
                                    cout<<"简单 \n";
                            }
                        }
                        cout<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//s
                    }
                case 'i':
                    {
                        qwer;
                        cout<<"请输入添加的单词然后回车"<<endl;
                        char st[20];
                        scanf("%s",st);
                        string str(st);
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            if (p[i]->name==str)
                                p[i]->mywords=1;
                        }
                        cout<<endl<<"添加的单词OK\npress any button to back to menu";
                        getch();
                        qwer;
                        break;//i
                    }
                case 'o':
                    {
                        qwer;
                        cout<<"请输入删除的单词然后回车"<<endl;
                        char st[20];
                        scanf("%s",st);
                        string str(st);
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            if (p[i]->name==str)
                                p[i]->mywords=0;
                        }
                        cout<<endl<<"删除的单词OK\npress any button to back to menu";
                        getch();
                        qwer;
                        break;//o
                    }
                default:
                    {
                        qwer;
                        cout<<"only s,i,o is allowed"<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                    }
                }
                break;//case '2' `s break;
            }
///###########################################################以下为测试题功能#################################
        case '3'://测试题功能
            {
                qwer;
                //开始
                welcome.welcome_test( );
                char qwert=getch();
                qwer;
                switch(qwert)
                {
                case 'q'://看中文写英文
                    {
                        int fen=0;//初始分数
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            cout<<"测试中：看中文写英文"<<endl<<"说明：下方显示的是单词的中文，请写出英文然后回车"<<endl<<endl<<p[i]->chinese<<endl;
                            char dooo[20];
                            scanf("%s",dooo);
                            string ds(dooo);
                            if (p[i]->name==ds)
                            {
                                fen+=1;
                            }
                            qwer;
                        }
                        cout<<"共"<<dictionary.numof_words<<"道题，每题一分，"<<"得分为："<<fen;
                        cout<<endl<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//q
                    }
                case 'w'://看英文写中文
                    {
                        int fen=0;//初始分数
                        for (int i=0;i<dictionary.numof_words;i++)
                        {
                            cout<<"测试中：看英文写中文"<<endl<<"说明：下方显示的是单词的英文，请写出中文然后回车"<<endl<<endl<<p[i]->name<<endl;
                            char dooo[20];
                            scanf("%s",dooo);
                            string ds(dooo);
                            if (p[i]->chinese==ds)
                            {
                                fen+=1;
                            }
                            qwer;
                        }
                        cout<<"共"<<dictionary.numof_words<<"道题，每题一分，"<<"得分为："<<fen;
                        cout<<endl<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//w
                    }
                case 'e'://看英语选汉语
                    {
                        int fen=0;//初始分数
                        for (int i=1;i<=4;i++)//四道题
                        {
                            int zhengqveweizhi=randnum1234();//一到二的一个数字
                            int zhengqvedanci=randnum(dictionary.numof_words-1);//正确单词是p[zhengqvedanci]
                            int cuowudanci=randnum(dictionary.numof_words-1);
                            while (cuowudanci==zhengqvedanci)
                            {
                                cuowudanci=randnum(dictionary.numof_words-1);
                            }
                            cout<<"选择题：看英语选汉语，[[[输入选项前的数字即可]]]"<<endl<<p[zhengqvedanci]->name<<endl;
                            cout<<"1、";
                            if (zhengqveweizhi==1)
                                cout<<p[zhengqvedanci]->chinese<<' ';
                            else
                                cout<<p[cuowudanci]->chinese<<' ';
                            cout<<"2、";
                            if (zhengqveweizhi==2)
                                cout<<p[zhengqvedanci]->chinese<<' ';
                            else
                                cout<<p[cuowudanci]->chinese<<' ';
                            char chara=getch();
                            if ((zhengqveweizhi==1&&chara=='1')||(zhengqveweizhi==2&&chara=='2'))
                                fen++;
                            qwer;
                        }
                        cout<<"一共四道题，总分四分，你的得分为："<<fen<<"分\n\n";
                        cout<<endl<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//e
                    }
                case 'r'://看汉语选英语
                    {
                        int fen=0;//初始分数
                        for (int i=1;i<=4;i++)//四道题
                        {
                            int zhengqveweizhi=randnum1234();//一到二的一个数字
                            int zhengqvedanci=randnum(dictionary.numof_words-1);//正确单词是p[zhengqvedanci]
                            int cuowudanci=randnum(dictionary.numof_words-1);
                            while (cuowudanci==zhengqvedanci)
                            {
                                cuowudanci=randnum(dictionary.numof_words-1);
                            }
                            cout<<"选择题：看汉语选英语，[[[输入选项前的数字即可]]]"<<endl<<p[zhengqvedanci]->chinese<<endl;
                            cout<<"1、";
                            if (zhengqveweizhi==1)
                                cout<<p[zhengqvedanci]->name<<' ';
                            else
                                cout<<p[cuowudanci]->name<<' ';
                            cout<<"2、";
                            if (zhengqveweizhi==2)
                                cout<<p[zhengqvedanci]->name<<' ';
                            else
                                cout<<p[cuowudanci]->name<<' ';
                            char chara=getch();
                            if ((zhengqveweizhi==1&&chara=='1')||(zhengqveweizhi==2&&chara=='2'))
                                fen++;
                            qwer;
                        }
                        cout<<"一共四道题，总分四分，你的得分为："<<fen<<"分\n\n";
                        cout<<endl<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                        break;//r
                    }
                default:
                    {
                        qwer;
                        cout<<"only qwer is allowed , retry please"<<endl<<"press any button to back to menu";
                        getch();
                        qwer;
                    }
                }
                //结束
                break;
            }
///###########################################################以下为快速搜索功能#################################
        case '4'://输入单词直接出释义
            {
                qwer;
                cout<<"请输入搜索的单词然后回车"<<endl;
                char st[20];
                scanf("%s",st);
                string str(st);
                for (int i=0;i<dictionary.numof_words;i++)
                {
                    if (p[i]->name==str)
                        {
                            cout<<p[i]->name<<" "<<p[i]->chinese<<" "<<p[i]->attribute<<" 难易度：";
                            if (p[i]->easy==1)
                                cout<<"难 ";
                            else
                                cout<<"简单 ";
                            cout<<"是否已加入我的单词表：";
                            if (p[i]->mywords==1)
                                cout<<"是"<<endl;
                            else
                                cout<<"否"<<endl;
                        }
                }
                cout<<endl<<"press any button to back to menu";
                getch();
                qwer;
                break;
            }
///###########################################################以下为添加单词功能#################################
        case '5'://添加单词
            {
                qwer;
                cout<<"欢迎来到添加单词功能，你需要输入很多东西，如果你不按照正确的方法输入，单词就会有问题，so，are，you，ready？\n\n(按任意键继续)";
                getch();
                qwer;
                cout<<"说明："<<endl<<"请依次输入  单词（eg:name） 汉意(eg:名字) 词性（eg:是名词哦！） 难易度（难词输入1，简单词输入0）\n以上四个内容每输入一个打一次回车"<<endl<<endl;
                char s1[30];
                char s2[30];
                char s3[30];
                int s4;
                gets(s1);
                gets(s2);
                gets(s3);
                cin>>s4;
                p[dictionary.numof_words]->name=s1;
                p[dictionary.numof_words]->chinese=s2;
                p[dictionary.numof_words]->attribute=s3;
                p[dictionary.numof_words]->easy=s4;
                dictionary.numof_words++;
                cout<<"\n添加单词成功\npress any button to back to menu";
                getch();
                qwer;
                break;
            }
///#################每个switch语句最后都跟着个这玩意###############以下为你点错了之后的后果处理#################################
        default:
            {
                qwer;
                cout<<"only 1--5 is allowed , retry please"<<endl<<"press any button to back to menu";
                getch();
                qwer;
            }
        }//switch over
    }//for over
}//main over
