#pragma once
//클라이언트 코드에서도 필요하기때문에 헤더에서 구조체 정의 
//헤더에는 함수의 정의와 구조체 쓴다..
typedef struct _Point_tag
{
	int x;
	int y;
}Point;
void SetPoint(Point* p, int x, int y);
void PrintPoint(Point* p);