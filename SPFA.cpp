#include<iostream>
#include<cstring>
#include<queue>
#include<algorithm>
#include<vector> 
using namespace std;
vector< vector<int> > adj;
void SPFA(int start, vector<int>& dis, vector<int>& par)
{
     dis=vector<int>(adj.size(),-1);
     par=vector<int>(adj.size(),-1);
     queue<int> Q;
     dis[start]=0;
     par[start]=start;
     Q.push(start);
     while(!Q.empty())
     {
        int pre=Q.front();
        Q.pop();
        for(int i=0;i<adj[pre].size();++i)
        {
            int here=adj[pre][i];
            if(dis[here]==-1)
            {
               Q.push(here);
               dis[here]=dis[pre]+1;
               par[here]=pre;
            }
        }
     }
}
vector<int> Spath(int v,const vector<int> par)
{
     vector<int> path(1,v);
     while(par[v]!=v)
     {
         v=par[v];
         path.push_back(v);
     }
     reverse(path.begin(),path.end());
     return path;
} 
int main()
{
	
}
