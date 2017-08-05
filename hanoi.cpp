#include <cstdio>
#include <cmath>
using namespace std;
int solve(int k,char a,char b,char c)
{
    if(k==0) return 0;
    solve(k-1,a,c,b);
    printf("%d from %c to %c\n",k,a,c);
    solve(k-1,b,a,c);
    return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int ans=pow(2,n);
	printf("%d\n",ans-1);

	solve(n-1,'A','C','B');

    printf("%d from A to C\n",n);

    solve(n-1,'B','A','C');

    return 0;

}
