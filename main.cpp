#include <iostream>

using namespace std;

int main()
{
    int a,b,size;
    cin>>size;
    for (a=size/2;a<=size;a=a+2)
    {
        for (b=1;b<size-a;b++)
            cout<<" ";
        for (b=1;b<=a;b++)
            cout<<"*";
        for (b=1;b<=size-a;b++)
            cout<<" ";
        for (b=1;b<=a-1;b++)
            cout<<"*";
        cout<<endl;
    }
    for (a=size;a>=0;a--)
    {
        for(b=a;b<size;b++)
            cout<<" ";
        for(b=1;b<=(a*2)-1;b++)
            cout<<"*";
        cout<<endl;
    }
    cout<<"trang";
}
