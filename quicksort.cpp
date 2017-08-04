#include<iostream>
using namespace std;
int a[100000];
void qsort(int b,int e)
{
     int l,r,t;
     if(b>=e) return;
     l=b;
     r=e;
     t=a[b];
     while(l<r)
     {
        while(l<r && a[r]>=t) r--;
        a[l]=a[r];
        while(l<r && a[l]<=t) l++;
        a[r]=a[l];
     }
     a[l]=t;
     qsort(b,l-1);
     qsort(l+1,e);
}
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    qsort(0,n-1);
    for(i=0;i<n-1;i++)
    {
       cout<<a[i]<<' ';
    }
    cout<<a[n-1];
    cout<<endl;
    system("pause");
    return 0;
}
