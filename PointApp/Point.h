#pragma once
//Ŭ���̾�Ʈ �ڵ忡���� �ʿ��ϱ⶧���� ������� ����ü ���� 
//������� �Լ��� ���ǿ� ����ü ����..
typedef struct _Point_tag
{
	int x;
	int y;
}Point;
void SetPoint(Point* p, int x, int y);
void PrintPoint(Point* p);