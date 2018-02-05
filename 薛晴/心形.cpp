#include <iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    cout<<"请输入你的心的最大宽度: ";
    cin>>n;
    int a=((n-3)/2-5)/4+1;
    for (i=1;i<=a;i++)
    {
        for(j=1;j<=15;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=2*(a-i)+1;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=(n-3)/2-4*(a-i);j++)
        {
            cout<<"◇";
        }
        for(j=1;j<=4*(a-i)+1;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=(n-3)/2-4*(a-i);j++)
        {
            cout<<"◇";
        }
        cout<<endl;
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=15;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"◇";
        }
        cout<<endl;
    }
    for (i=1;i<=(n-1)/4;i++)
    {
        for (j=1;j<=15;j++)
        {
            cout<<"  ";
        }

        if (i==1)
        {
            cout<<"  ";
            for (j=1; j<=n-2*i;j++)
            {
                cout<<"◇";
            }
        }
        else
        {
            for (j=1;j<=2*i-1;j++)
            {
                cout<<"  ";
            }

            for (j=1;j<=n-2-4*(i-1);j++)
            {
                cout<<"◇";
            }
        }
        cout<<endl;
    }
    for(j=1;j<=15;j++)
    {
        cout<<"  ";
    }
    for(j=1;j<=2*((n-1)/4);j++)
    {
        cout<<"  ";
    }
    cout<<"  ◇";
    cout<<endl;
    return 0;
}

