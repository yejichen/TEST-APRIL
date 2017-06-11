#include<iostream>
#include<cstring>
using namespace std;
bool daxiao(char *a,char *b)
{
     int la,lb;
     la=strlen(a);
     lb=strlen(b);
     if(lb>la || lb==la && strcmp(a,b)<0)
        return true;
     else
        return false;
}     
int main()
{
    char a[1005],b[1005],t[1005];
    int a1[1005]={},b1[1005]={};
    int i,l;
    cin>>a; 
    cin>>b; 
    if(daxiao(a,b))
    {
       strcpy(t,a);
       strcpy(a,b);
       strcpy(b,t);
       cout<<"-";
    }
    int l1=strlen(a);
    int l2=strlen(b);
    for(i=0;i<l1;i++)
    {
       a1[i]=a[l1-i-1]-'0';
    }
    for(i=0;i<l2;i++)
    {
       b1[i]=b[l2-i-1]-'0';
    }
    l=l1;
    int s[1005]={};
    int w=0;
    for(i=0;i<l;i++)
    {
       s[i]=a1[i]-b1[i];
    }
    for(i=0;i<l;i++)
    {
       if(s[i]<0)
       {
         s[i+1]--;
         s[i]+=10;
       }
       if(s[i]!=0)
         w=i;
    }
    for(i=w;i>=0;i--)
    {
       cout<<s[i];
    }
    cout<<endl;
    system("pause");
    return 0;
}
    
       
