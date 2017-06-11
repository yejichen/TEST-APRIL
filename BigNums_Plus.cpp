#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[1005],b[1005];
    int a1[1005]={},b1[1005]={},i,l;
    cin>>a; int l1=strlen(a);
    cin>>b; int l2=strlen(b);
    for(i=0;i<l1;i++)
    {
       a1[i]=a[l1-i-1]-'0';
    }
    for(i=0;i<l2;i++)
    {
       b1[i]=b[l2-i-1]-'0';  
    }
    l=l1;
    if(l1<l2) l=l2;
    int sum[1005]={};
    int w=0;
    for(i=0;i<l;i++)
    {
       sum[i]=a1[i]+b1[i];
    }
    for(i=0;i<=l;i++)
    {
       sum[i+1]+=(sum[i]/10);
       sum[i]%=10;
       if(sum[i]!=0)
         w=i;
    }
    for(i=w;i>=0;i--)
       cout<<sum[i];
    cout<<endl;
    system("pause");
    return 0;
}
