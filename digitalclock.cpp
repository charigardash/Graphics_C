#include<graphics.h>
#include<conio.h>
#include<time.h>
int main()
{
	int i=DETECT,j;
	char ch[50];
	time_t t;
	struct tm *p;
	initgraph(&i,&j,"");
	setcolor(RED);
	settextstyle(10,0,4);
	setfillstyle(SOLID_FILL,WHITE);
	while(1)
	{
	time(&t);
	p=localtime(&t);
		rectangle(200,300,800,400);
		floodfill(250,350,RED);
		outtextxy(250,350,asctime(p));
		delay(1000);
		cleardevice();
	}
	getch();
	closegraph();
	return 0;
}
