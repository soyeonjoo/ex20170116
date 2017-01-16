#include<stdio.h> 
#include"PointArray.h"

void PrintPointArray(Point *p, int size) {
	for (int i = 0; i < size; ++i) {
		//printf("(%d, %d) \n", (p + i)->x, (p + i)->y);
		PrintPoint(&p[i]);
	}
}
void SetPointArray(Point* pa, int size) {
	int i;
	for (i = 0; i < size; ++i) {
		SetPoint(&pa[i], i + 1, i + 1);
	}
}
void InitPointArray(Point* p, int size) {
	int i;
	for (i = 0; i < size; ++i) {
		SetPoint(&p[i], 0, 0);
	}
}