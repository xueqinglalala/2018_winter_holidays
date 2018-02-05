
#include <iostream>
using namespace std;
int main()
{
    char a[100];
    while(~scanf("%d",&a))
    {
        int i;
        for(i=0;i<100;i++)
        {
            if(a[i]==1)
            {
                cout<<endl;
                cout<<"    |"<<endl;
                cout<<endl;
                cout<<"    |"<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }
            if(a[i]==2)
            {
                cout<<"   -- "<<endl;
                cout<<"     "<<"|"<<endl;
                cout<<"   -- "<<endl;
                cout<<"  |"<<endl;
                cout<<"   -- "<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }
            if(a[i]==3)
            {
                cout<<"   -- "<<endl;
                cout<<"     "<<"|"<<endl;
                cout<<"   -- "<<endl;
                cout<<"     "<<"|"<<endl;
                cout<<"   -- "<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }
            if(a[i]==4)
            {
                cout<<"   |"<<" "<<" |"<<endl;
                cout<<"    -- "<<endl;
                cout<<"    "<<"  |"<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }
            if(a[i]==5)
            {
                cout<<"   -- "<<endl;
                cout<<"  |"<<endl;
                cout<<"   -- "<<endl;
                cout<<"     "<<"|"<<endl;
                cout<<"   -- "<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }

            if(a[i]==6)
            {
                cout<<"   -- "<<endl;
                cout<<"  |"<<endl;
                cout<<"   -- "<<endl;
                cout<<"  |"<<" "<<" |"<<endl;
                cout<<"   -- "<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }
            if(a[i]==7)
            {
                cout<<"   -- "<<endl;
                cout<<"     "<<"|"<<endl;
                cout<<endl;
                cout<<"     "<<"|"<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }
            if(a[i]==8)
            {
                cout<<"   -- "<<endl;
                cout<<"  |"<<" "<<" |"<<endl;
                cout<<"   -- "<<endl;
                cout<<"  |"<<" "<<" |"<<endl;
                cout<<"   -- "<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }
            if(a[i]==9)
            {
                cout<<"   -- "<<endl;
                cout<<"  |"<<" "<<" |"<<endl;
                cout<<"   -- "<<endl;
                cout<<"     "<<"|"<<endl;
                cout<<"   -- "<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }
            if(a[i]==0)
            {
                cout<<"   -- "<<endl;
                cout<<"  |"<<" "<<" |"<<endl;
                cout<<endl;
                cout<<"  |"<<" "<<" |"<<endl;
                cout<<"   -- "<<endl;
                cout<<endl;
                cout<<endl;
                i++;
                break;
            }
        }
    }
}
