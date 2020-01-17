#include<graphics.h>
#include<conio.h>
int main()
{
	int i=DETECT,j;
	initgraph(&i,&j,"");
	setcolor(YELLOW);
	circle(200,300,100);
	arc(150,270,60,120,20);
	arc(250,270,60,120,20);
	putpixel(150,270,WHITE);
	putpixel(150,271,WHITE);
	putpixel(250,270,WHITE);
	putpixel(250,271,WHITE);
	line(196,285,196,325);
	arc(200,325,180,360,4);
	arc(208,325,180,360,4);
	arc(200,300,240,300,50);
	arc(200,300,240,300,51);
	getch();
	closegraph();
	return 0;
}
