#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n[32],i,num,j;
		int result=0;
		scanf("%d",&num);
		for(i=0;i<32;i++)
		{
			n[i]=num%2;
			num=num/2;
			if(num==1)
			{
				n[i+1]=1;
				for(j=i+2;j<32;j++)
				{
					n[j]=0;
				}
				break;
			}
		}
		for(i=0;i<32;i++)
		{
			if(n[i]==0)
				n[i]=1;
			else
				n[i]=0;
			result=result+(n[i]*pow(2,i));
		}
		printf("%d\n",result);
	}
	return 0;
	
}
