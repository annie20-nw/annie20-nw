#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");

	//Orange
	setcolor(4);
	rectangle(100,100,500,200);
	setfillstyle(1,4);
	floodfill(101,101,4);

	//White
	setcolor(15);
	rectangle(100,200,500,300);
	setfillstyle(1,15);
	floodfill(101,201,15);

	//Green
	setcolor(2);
	rectangle(100,300,500,400);
	setfillstyle(1,2);
	floodfill(101,301,2);

	//Circle
	setcolor(1);
	circle(300,250,49);
	setfillstyle(9,1);
	floodfill(300,250,1);


	getch();
	closegraph();
}
