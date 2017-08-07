#include<iostream>
using namespace std;
int main()
{
    int a[8],b[8],e,f,i;
    for(i=0;i<8;i++)
       cin>>a[i];
    for(i=0;i<8;i++)
       cin>>b[i];
    int c=a[0]*1000+a[1]*100+a[2]*10+a[3];
    int d=b[0]*1000+b[1]*100+b[2]*10+b[3];
    int ans=0;
    for(i=c;i<=d;i++)
    {
        f=(i/10%10)*10+i/10;
        e=(i/1000)*10+i/100%10;
        if(e<=12)
        {
           if(e==1||e==3||e==5||e==7||e==8||e==10||e==12)
           {
              if(f<=31) ans++;
           }
           else if(e==2)
           {
              if((i%4==0&&i%100!=0)||(i%400==0))
                 if(f<=29) ans++;
              else
                 if(f<=28) ans++;
           }
        }
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}
/*i/10
i/10%10
i/100%10
i/1000*/
