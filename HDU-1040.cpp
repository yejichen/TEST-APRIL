#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
       int m;
       cin>>m;
       int a[m];
       int i;
       for(i=0;i<m;i++)
       {
          cin>>a[i];
       }
       sort(a,a+m);
       for(i=0;i<m-1;i++)
       {
          cout<<a[i]<<' ';
       }
       cout<<a[m-1]<<endl;
    }
    return 0;
}
