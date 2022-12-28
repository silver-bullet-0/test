#include<stdio.h>
int main(){
	int a,b,c,kase=0;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		if(a==0&&b==0&&c==0)break;
		
		if(kase)printf("\n");
		printf("Case %d:%.*f\n",++kase,c,1.0*a/b);
	}
	return 0;
}
