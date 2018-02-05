#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"请输入正六边形的边长"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=n-i+1;j<=n-i+2*i-1+n-1;j++)
        {
            if(j==n-i+1||j==n-i+2*i-1+n-1||i==1)
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
      }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j= n-i+1;j<=n-i+2*i-1+n-1;j++)
        {
            if(j== n-i+1||j==n-i+2*i-1+n-1||i==1)
            {
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
