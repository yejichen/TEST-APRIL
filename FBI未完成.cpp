#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,ans=0,sum=0;
	cin>>n;
	int s=pow(2,n);
	char a[s],r;
	cin>>a;
	int p=s;
	while(p>=0)
	{
		if(a[p]=='0')
		   ans++;
		if(a[p]=='1')
		   sum++;
		p--; 
	}
	if(ans==0)
	{
		r='I';
	}
	else if(sum==0)
	{
		r='B';
	}
	else
	{
		r='F';
	}
	if(s>1)
	{
		char b[s/2];
		char c[s/2];
		
	}
	else
	{
		cout<<r<<endl;
	}
	system("pause");
	return 0;
}
