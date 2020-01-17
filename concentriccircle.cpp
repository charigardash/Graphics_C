#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
	int i=DETECT,j,k;
	initgraph(&i,&j,"");
	setcolor(GREEN);
	for(k=50;k<200;k+=20)
	{
	 circle(getmaxx()/2,getmaxy()/2,k);
	 delay(100);
    }
	getch();
	closegraph();
	return 0;
}
