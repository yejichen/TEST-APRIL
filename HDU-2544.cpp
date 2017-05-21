#include<iostream>
#include<string.h>
int N=0x1f1f1f1f;
int d[155];
int w[151][151];
int vis[151];
int n,m;
using namespace std;
void dij()
{
     int i,j,k,v,tmp;
     memset(vis,0,sizeof(vis));
     for(i=1;i<=n;i++)
     {
        d[i]=w[1][i];
     }
     d[1]=0;
     vis[1]=1;
     for(i=1;i<=n;i++)
     {
        tmp=N;
        for(j=1;j<=n;j++)
        {
           if(tmp>d[j]&&!vis[j])
           {
              tmp=d[j];
              v=j;
           }
        }
        vis[v]=1;
        for(k=1;k<=n;k++)
        {
           if(!vis[k])
           {
              if(d[k]>d[v]+w[v][k]) 
                 d[k]=d[v]+w[v][k];
           }
        }
     }
}                                                                                   
int main()
{
    int i,j,a,b,dis;
    while(cin>>n>>m)
    {
       if(n==0&&m==0)
          break;
       for(i=1;i<=n;i++)
       {
          for(j=1;j<=n;j++)
          {
             w[i][j]=N;
          }
       }
       for(i=0;i<m;i++)
       {
          cin>>a>>b>>dis;
          if(w[a][b]>dis) 
             w[a][b]=w[b][a]=dis;
       }
       dij();
       cout<<d[n]<<endl;
    }
    return 0;
}
