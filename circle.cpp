#include<graphics.h>
#include<conio.h>
int main()
{
	int i=DETECT,j;
	initgraph(&i,&j,"");
	setcolor(RED);
	circle(200,300,100);
	getch();
	closegraph();
	return 0;
}
