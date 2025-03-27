#include <stdio.h>

typedef struct
{
	int dd;
	int mm;
	int yy;
}date;
int main()
{
	date dt={4,12,2004};
	date *pt;

	printf("%d, %d\n",sizeof(dt),sizeof(pt));

	pt=&dt;
	printf("%d / %d / %d\n",dt.dd, dt.mm,dt.yy);
	printf("%d / %d / %d\n",pt->dd, pt->mm,pt->yy);

	return 0;
}
