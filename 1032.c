#include<stdio.h>
int main()
{
	int n,i;
	int num,s,score[10000]={0};
	int max=1,maxscore=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&num,&s);
		score[num]=score[num]+s;
		if(num>max)
			max=num;
	}
	for(i=1;i<=max;i++)
	{
		if(score[i]>score[maxscore])
			maxscore=i;
	}
	printf("%d %d\n",maxscore,score[maxscore]);
	return 0;
}