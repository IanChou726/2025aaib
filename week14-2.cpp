#include <stdio.h>
int main()
{
	int a[100];
	int N, t =1;
	while(scanf("%d",&N)== 1)///PT1
	{
		int bad = 0;///not bad
		for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
			///Part3:bigger
			if(i>0) if(a[i-1] >= a[i]) bad = 1;
		}
		int table[20000] = {};///Part4:table
		for(int i = 0; i<N;i++)///Part5:For
		{
			for(int j = i;j<N;j++)
			{
				int now = a[i]+a[j];
				///Part6:check
				if(table[now]>0) bad = 1;
				table[now]++;
			}
		}
		///Part 2 Output
		if(bad == 0) printf("Case #%d: It is a B2-Sequence.\n\n", t);
		else printf("Case #%d: It is not a B2-Sequence.\n\n", t);
		t++;

	}

}
