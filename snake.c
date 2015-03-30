#include <stdio.h>
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define FOOD -1
#define WALL -2
#define SIZEX 80
#define SIZEY 43

void zeros(int map[SIZEX,SIZEY])
{
	int i,j;
	for (i=0; i<SIZEY; i++)
	{
		for (j=0; j<SIZEX; j++)
			map[i][j] = 0;
	}
}

int died(int* map, int* direction, int* current_x, int* current_y)
{
;
}
void wait()
{;
}

void update_map(int* map)
{;}

void move(int* map, int* current_x, int* current_y, int* direction, int* length)
{;}

void draw_map(int* map)
{;}


void main()
{
int map[SIZEX][SIZEY];
int* length = 3;
int* current_x =20;
int* current_y =20;
int* direction= RIGHT;
zeros(map);
while(!died(map,direction,current_x,current_y))
{
	wait();
	update_map(map);//pos.ertekeket csokkent
	move(map,current_x,current_y,direction,length);
	draw_map(map);
}
}
