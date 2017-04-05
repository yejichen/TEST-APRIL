#include<iostream>
#include<cstring>
using namespace std;
typedef struct node
{
    int m[11][11];
}Matrix;
Matrix init, unit; 
int n,K;
void Init()    
{  
    cin>>n>>K;  
    for( int i=0; i<n; ++ i )  
        for( int j=0; j<n; ++ j )  
        {  
            cin>>init.m[i][j];  
            unit.m[i][j]=(i==j);  
        }  
} 
Matrix Mul( Matrix a, Matrix b )  
{  
    Matrix c;  
    for( int i=0; i<n; ++ i )  
    {  
        for( int j=0; j<n; ++ j )  
        {  
            c.m[i][j]=0;   
            for( int k=0; k<n; ++ k )  
            {  
                c.m[i][j] += a.m[i][k]*b.m[k][j];  
            }  
            c.m[i][j] %= 9973;  
        }   
    }  
    return c;  
}
Matrix Pow( Matrix a, Matrix b, int k )  
{  
    while(k>1)  
    {  
        if(k&1)    
        {  
            k--;  
            b=Mul(a,b);  
        }  
        else     
        {  
           k>>=1;  
           a=Mul(a,a);  
        }  
    }  
    a=Mul(a,b);  
    return a;  
}
int main()
{
    int T;  
    cin>>T; 
    while( T -- )  
    {  
        Matrix x;  
        Init();  
        x=Pow(init,unit,K);  
        int sum=0,i=0;  
        n--;  
        while(n>=0)  
        {  
           sum+=x.m[n][n];  
           sum%=9973;  
           n--;      
        }  
        cout<<sum%9973<<endl;  
    }  
}
