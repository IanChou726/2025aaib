///week14-1.cpp
///Part1 Input
#include <stdio.h>
int main()
{
	int a[100];
	int N, t =1;
	while(scanf("%d",&N)== 1)//PT1
	{
		for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}



		//Part 2 Output
		printf("Case #%d: It is a B2-Sequence.\n\n", t);
		t++;

	}

}
