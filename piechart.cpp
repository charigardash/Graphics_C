#include<graphics.h>
#include<conio.h>
int per(int ,int );
void piechart(int *a)
{
	int i=DETECT,j,x=0;
	initgraph(&i,&j,"");
	setcolor(WHITE);
	setbkcolor(GREEN);
	outtextxy(5,5,"TMC");
	setbkcolor(RED);
	outtextxy(5,45,"BJP");
	setbkcolor(YELLOW);
	outtextxy(5,85,"CPIM");
	setbkcolor(CYAN);
	outtextxy(5,125,"OTHERS");
	setfillstyle(SOLID_FILL,GREEN);
	pieslice(200,300,0,*(a+0),100);
	x+=*(a+0);
	setfillstyle(SOLID_FILL,RED);
	pieslice(200,300,x,x+*(a+1),100);
	x+=*(a+1);
	setfillstyle(SOLID_FILL,YELLOW);
	pieslice(200,300,x,x+*(a+2),100);
	x+=*(a+2);
	setfillstyle(SOLID_FILL,CYAN);
	pieslice(200,300,x,x+*(a+3),100);
	getch();
	closegraph();
}
int main()
{
	int x,b[4],a[4];
	puts("Total number of enroller");
	scanf("%d",&x);
	puts("How many set can TMC get?");
	scanf("%d",&b[0]);
	puts("How many for BGP");
	scanf("%d",&b[1]);
	puts("How much for CPIM");
	scanf("%d",&b[2]);
	puts("for others!!");
	scanf("%d",&b[3]);
	for(int t=0;t<4;t++)
	{
	    a[t]=per(b[t],x);	
	}
	piechart(a);
	return 0;
}
int per(int i,int x)
{
	int j;
	j=(i*360)/x;
	return j;
}
