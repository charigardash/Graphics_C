#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int i=DETECT,j,x,y;
	time_t t;
	srand(t);
	initgraph(&i,&j,"");
	x=4*getmaxx()+100;
	y=4*getmaxy()+100;
	for(int k=0;k<x*y-5140800;k++)
	{
		putpixel(rand()%x+1,rand()%y+1,WHITE);
	}
	getch();
	closegraph();
	return 0;
}
