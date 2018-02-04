#include<iostream>
using namespace std;
///经过了对究竟什么才算心形的激烈思考后............
int main()
{
    for (int asd=0;asd<100;asd++)
    {
    cout<<"请输入宽度来生成不像心形的心形图案，数字最好大于5，像素过少会导致图形不美观："<<endl;
    int n;
    cin>>n;
    int up = n/2;
    int upp = (up-1)/2;
    int abl = upp;
    for (int i=0;i<upp;i++)
    {
        for (int j=0;j<abl;j++)
            cout<<"  ";
        for (int j=0;j<(up-2*abl);j++)
            cout<<"◇";
        for (int j=0;j<abl;j++)
            cout<<"  ";
        if (n%2 != 0)
            cout<<"  ";
        for (int j=0;j<abl;j++)
            cout<<"  ";
        for (int j=0;j<(up-2*abl);j++)
            cout<<"◇";
        for (int j=0;j<abl;j++)
            cout<<"  ";
        abl--;
        cout<<endl;
    }
    int s = 0;
    while (n>=0)
    {
        for (int j=0;j<s;j++)
            cout<<"  ";
        s++;
        for (int j=0;j<n;j++)
            cout<<"◇";
        n-=2;
        cout<<endl;
    }
}
}


