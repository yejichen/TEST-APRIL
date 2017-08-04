#include<iostream>
using namespace std;
int main()
{
	char a[13];
	int s=0,q=0,i;
	cin>>a;
	for(i=0;i<12;i++)
	{
		if(a[i]!='-')
		{
			q=q+1;
			s=s+q*(a[i]-'0');
		}
	}
	s=s%11;
	if(a[12]-'0'==s)
	{
		cout<<"Right"<<endl;
	}
	else
	{
		a[12]=char(s+'0');
		cout<<a<<endl;
	}
	return 0;
}
