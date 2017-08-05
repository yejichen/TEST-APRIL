#include<iostream>
using namespace std;
int n;
int a[100000];
void fixpile(int x)
{
	int f;
	int l,r;
	l=2*x;
	r=2*x+1;
	f=x;
	if(x>n)
		return;
	else
	{
	  if(l<=n)
	  	fixpile(l);
	  if(r<=n)
	  	fixpile(r);
	}
	
	if(l<=n && a[x]>a[l])
		swap(a[x],a[l]);
	if(r<=n && a[x]>a[r])
		swap(a[x],a[r]); 
	return;
}
void fixpileup(int x)
{
	int f;
	f=x/2;
	if(f>0 && a[f]>a[x])
	{
		swap(a[f],a[x]);
		fixpileup(f);
	}
}
int main()  //down版本的 
{
	int i;
	cin>>n;
	int s=n;
	for(i=1;i<=s;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=s;i++)
	{
		fixpile(1);
		swap(a[1],a[n]);
		n--;
	} 
	for(i=1;i<=s;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
} 
/*int main() //up版本的 
{
	int n;
	int i,t;
	int m;
	cin>>m; 
	n=1;
	cin>>a[1];
	for(i=2;i<=m;i++)
	{
		cin>>t;
		n++;
		a[n]=t;	
		fixpileup(n);
	}
	int s=m;
	for(i=1;i<=s;i++)
	{ 
		cout<<a[i]<<endl;
	} 
	return 0;
}*/
