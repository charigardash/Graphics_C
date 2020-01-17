#include<graphics.h>
#include<conio.h>
#include<math.h>
#define PI 3.14/180
int main()
{
	int i=DETECT,j;
	initgraph(&i,&j,"");
	setcolor(CYAN);
	line(0,200,4*getmaxx()+100,200);
	line(0,0,0,4*getmaxy()+100);
	for(int k=0;k<=4*360;k++)
	{
		putpixel(k,200-100*tan(k*PI),RED);
	}
	getch();
	closegraph();
	return 0;
}
