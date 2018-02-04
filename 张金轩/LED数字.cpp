#include<iostream>
using namespace std;
///循环接收一些数字并输出出来

void shumaguan(int num)
{
    int i;
    int nnm = num;
    for (i = 0;nnm != 0;i++)
        nnm/=10;
    ///i代表这个数字多少位
    ///将数字分为5行分别代表五行led管（依次为横竖横竖横），五行依次输出，每位之间用4个空格隔开
    int a[i];
    for (int q = (i-1);q>=0;q--)///把num数字分成各个位数正序存在一个数组里
    {
        a[q] = num%10;
        num /= 10;
    }
    ///next step is show these numbers了
    for (int d = 0;d<i;d++)//line one
    {
        if (a[d] == 1 || a[d] == 4)
            cout<<"        ";
        else
            cout<<" --     ";
    }
    cout<<endl;
    for (int d = 0;d<i;d++)//line two
    {
        if (a[d] == 4 || a[d] == 8 || a[d] == 9 || a[d] == 0)
            cout<<"|  |    ";
        if (a[d] == 5 || a[d] == 6)
            cout<<"|       ";
        if (a[d] == 1 || a[d] == 2 || a[d] == 3 || a[d] == 7)
            cout<<"   |    ";
    }
    cout<<endl;
    for (int d = 0;d<i;d++)//line three
    {
        if (a[d] == 1 || a[d] == 0 || a[d] == 7)
            cout<<"        ";
        else
            cout<<" --     ";
    }
    cout<<endl;
    for (int d = 0;d<i;d++)//line four
    {
        if (a[d] == 0 || a[d] == 8 || a[d] == 6)
            cout<<"|  |    ";
        if (a[d] == 2)
            cout<<"|       ";
        if (a[d] == 1 || a[d] == 4 || a[d] == 3 || a[d] == 5 || a[d] == 7 || a[d] == 9)
            cout<<"   |    ";
    }
    cout<<endl;
    for (int d = 0;d<i;d++)//line five
    {
        if (a[d] == 1 || a[d] == 4 || a[d] == 7)
            cout<<"        ";
        else
            cout<<" --     ";
    }
    cout<<endl<<endl<<endl;
}

int main()
{
    int getin[100];
    int n = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        ungetc(c,stdin);
        cin>>getin[n++];
    }


    for (int i = 0;i<n;i++)
        shumaguan(getin[i]);
}

/*输入82
 --      --
|  |       |       |
 --      --
|  |    |          |
 --      --
*/
