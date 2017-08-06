#include<iostream>
using namespace std;
int map[50][50]={1};
int m,n;
void color(int y,int x)
{
	if(map[x][y]!=0 || x<0 || y<0 || x>=n || y>=m)
		return;
	map[x][y]=2;
	color(y+1,x);
	color(y-1,x);
	color(y,x-1);
	color(y,x+1);
}
int main()
{
	int i,j,y0,y1,x0,x1;
	cin>>m>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>map[i][j];
		}
	}
	cin>>y0>>x0;
	cin>>y1>>x1;
	color(x0,y0);
	if(map[x0][y0]==2&&map[x1][y1]==2)
	{
		cout<<"OK!"<<endl;
	}
	else
	{
		cout<<"NO!"<<endl;
	}
	return 0;
}
