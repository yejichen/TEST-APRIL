#include <iostream>
#include <stdio.h>
using namespace std;
char map[101][101];
int n, m, sum;
int res=0,maxn=0;
void dfs(int i, int j)
{
    if(map[i][j]!='0' || i<0 || j<0 || i>=m || j>=n) 
		return;   
    else
    {
        map[i][j] = '!';
        res+=1;
        dfs(i-1, j);        
        dfs(i, j-1);
        dfs(i, j+1);
        dfs(i+1, j);
    }
}

int main()
{
    int i, j;
	cin>>m>>n;
    sum = 0;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin>>map[i][j];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(map[i][j] == '0')
            {
                dfs(i, j);
                if(res>maxn) maxn=res;
                sum++;
            }
            res=0;
        }
    }
    cout<<sum<<' '<<maxn<<endl;
	return 0;
}
