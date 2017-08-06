#include<iostream>
#include"stdio.h"
#include<cstring>
using namespace std;
char a[10];
char b[1000000];
int e[100000];
int f[100000];
int pos[100000];
int main()
{
	gets(a);
	gets(b);
	int i,j,len,t=0,m=0,js=0,ans=0;
	int c=strlen(a);
	int d=strlen(b);
	for(i=0;i<d;i++)
	{
		if(a[i]==' ')
		{
			e[t]=i;
			t++;
		}
	}
	f[0]=e[0];
	for(i=1;i<t;i++)
	{
		f[i]=e[i]-e[i-1]-1;
	}
	for(i=0;i<t;i++)
	{
		if(c==f[i])
		{
			if(b[e[i]-f[i]]==a[0])
			{
				for(j=e[i]-f[i];j<e[i];j++)
				{
					m++;
					if(b[j]==a[m]) js++; 
				}
				if(js==f[i]) 
				{
					pos[i]=e[i]-f[i]-1;	
					ans++;
				}
				m=0;
				js=0;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		if(pos[i]!=0)
		{
			len=pos[i];
			break;
		}
	}
	if(ans!=0)
		cout<<ans<<' '<<len<<endl;
	else
	    cout<<-1<<endl;
	return 0;
}
