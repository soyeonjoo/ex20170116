#include<stdio.h>
#include "Point.h"
void SetPoint(Point* p, int x, int y) {
	p->x = x;
	p->y = y;
}
void PrintPoint(Point* p) {
	printf("(%d, %d) \n", p->x, p->y);
}