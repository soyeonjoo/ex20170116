//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//void main() {
//	struct Point p1 = { 2.3 };
//	struct Point p2 = { 3, 4 };
//	printf("(%d, %d) \n", p1.x, p1.y);
//	printf("(%d, %d) \n", p2.x, p2.y);
//}
//
//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(struct Point p) {// p�� ������ 
//	printf("(%d, %d) \n", p.x, p.y);
//}
//void main() {
//	struct Point p1 = { 2.3 };
//	struct Point p2 = { 3, 4 };
//	PrintPoint(p1);
//	PrintPoint(p2);
//}

//
//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(struct Point *p) {// ����ü�� ũ�⶧���� �����縦 ���Ѵ� �׷��� * ����.
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	struct Point p1 = { 2.3 };
//	struct Point p2 = { 3, 4 };
//	PrintPoint(&p1);
//	PrintPoint(&p2);
//}

//
///*����ü typedef*/
//#include <stdio.h>
//
//struct _Point_tag
//{
//	int x;
//	int y;
//};
//typedef struct _Point_tag Point;
//void InintPoint(Point *p) {
//	//p->x = 0;
//	//p->y = 0;
//
//	Point pt = { 0 ,0 }; 
//	*p = pt;//�޸� ����ε� ����
//}
//
//void PrintPoint(Point *p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	Point p1 = { 2.3 };
//	InintPoint(&p1); 
//	PrintPoint(&p1);
//}
//
///*����ü typedef*/
//#include <stdio.h>
//
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//void InintPoint(Point *p) {
//	//p->x = 0;
//	//p->y = 0;
//
//	Point pt = { 0 ,0 };
//	*p = pt;//�޸� ����ε� ����
//}
//
//void PrintPoint(Point *p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	Point p1 = { 2.3 };
//	InintPoint(&p1);
//	PrintPoint(&p1);
//}


//
//#include <stdio.h>
//void main() {
//	int n = 10;
//	unsigned int un = 10;
//	printf("%d, %d \n", n, un);
//}
//
//#include <stdio.h>
//typedef int INT;// Ÿ�� ����
//typedef unsigned int UINTl;
//void main() {
//
//	INT n = 10;
//	UINTl un = 10;
//	printf("%d, %d \n", n, un);
//}


//#include <stdio.h>
//
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//void InintPoint(Point *p) {
//	//p->x = 0;
//	//p->y = 0;
//
//	Point pt = { 0 ,0 };
//	*p = pt;//�޸� ����ε� ����
//}
//
//void PrintPoint(Point *p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	Point arr[5] = {0};
//	for (int i = 0; i < 5; ++i) {
//		PrintPoint(&arr[i]);
//	}
//}

/* �迭  printPointArray */
//#include <stdio.h>
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//void InintPoint(Point *p) {
//	//p->x = 0;
//	//p->y = 0;
//
//	Point pt = { 0 ,0 };
//	*p = pt;//�޸� ����ε� ����
//}
//void PrintPoint(Point *p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//
//void PrintPointArray(Point *p, int size) {
//	for (int i = 0; i < size; ++i) {
//		//printf("(%d, %d) \n", (p + i)->x, (p + i)->y);
//		PrintPoint(&p[i]);
//	}
///*����ü */
//#include <stdio.h>
//typedef struct _Point_tag
//}
//
//void main() {
//	Point arr[5] = { 0 };
//	PrintPointArray(arr,5);
//	
//}


//{
//	int x;
//	int y;
//}Point;
//void SetPoint(Point *p, int x, int y) { //out �Ķ���� 
//	p->x = x;
//	p->y = y;
//}
//void PrintPoint(Point* p) {// in �Ķ����
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	Point pt = { 0 };
//	SetPoint(&pt, 2, 3);
//	PrintPoint(&pt); //����ü�� �׻� �ּҸ� �ѱ��!!
//}
//

///*����ü */
//#include <stdio.h>
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//Point SetPoint( int x, int y) { //return ���ٴ� out �Ķ���� ���� ! 
//	Point p = { x, y };
//	return p;
//}
//void PrintPoint(Point* p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	Point pt = { 0 };
//	pt = SetPoint(2, 3);
//	PrintPoint(&pt); //����ü�� �׻� �ּҸ� �ѱ��!!
//}

///*����ü */
//#include <stdio.h>
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//
//void SetPoint(Point* p, int x, int y) {
//	p->x = x;
//	p->y = y;
//}
//void PrintPoint(Point* p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void PrintPointArray(Point *p, int size) {
//	for (int i = 0; i < size; ++i) {
//		//printf("(%d, %d) \n", (p + i)->x, (p + i)->y);
//		PrintPoint(&p[i]);
//	}
//}
//void SetPointArray(Point* pa, int size) {
//	int i;
//	for (i = 0; i < 5; ++i) {
//		SetPoint(&pa[i], i + 1, i + 1);
//	}
//}
//
//void main() {
//	Point arr[5] = { 0 };
//	SetPointArray(arr,5);
//	
//	PrintPointArray(arr,5); //����ü�� �׻� �ּҸ� �ѱ��!!
//}
// 
///*����ü InitPointArray */
//#include <stdio.h>
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//
//void SetPoint(Point* p, int x, int y) {
//	p->x = x;
//	p->y = y;
//}
//void PrintPoint(Point* p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void PrintPointArray(Point *p, int size) {
//	for (int i = 0; i < size; ++i) {
//		//printf("(%d, %d) \n", (p + i)->x, (p + i)->y);
//		PrintPoint(&p[i]);
//	}
//}
//void SetPointArray(Point* pa, int size) {
//	int i;
//	for (i = 0; i < size; ++i) {
//		SetPoint(&pa[i], i + 1, i + 1);
//	}
//}
//void InitPointArray(Point* p, int size) {
//	int i;
//	for (i = 0; i < size; ++i) {
//		SetPoint(&p[i], 0, 0);
//	}
//}
//
//void main() {
//	Point arr[5] = { 0 };
//	SetPointArray(arr, 5);
//	PrintPointArray(arr, 5);
//	InitPointArray(arr,5);
//	PrintPointArray(arr, 5); 
//}


///*����ü */
//#include <stdio.h>
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//void PrintPoint(Point* p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	Point p1 = { 2,3 };
//	Point p2 = p1;
//	PrintPoint(&p1);
//	PrintPoint(&p2);
//}

///*����ü AddPoint */
//#include <stdio.h>
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//void PrintPoint(Point* p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//Point AddPoint(Point *lhs, Point *rhs) { //left hand size, right hand size
//	Point p3 = { (lhs->x) + (rhs->x) ,(lhs->y) + (rhs->y) };
//	//p3.x = (lhs->x) + (rhs->x);
//	//p3.y = (lhs->y) + (rhs->y);
//	
//	return p3;
//}
//void main() {
//	Point p1 = { 2,3 };
//	Point p2 = { 3,4 };
//	Point p3;
//	p3 = AddPoint(&p1, &p2);
//	PrintPoint(&p1);
//	PrintPoint(&p2);
//	PrintPoint(&p3);
//
//}

//
///*����ü AddPoint*/
//#include <stdio.h>
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//void PrintPoint(Point* p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void AddPoint(Point *lhs, Point *rhs,Point* p3) { //left hand size, right hand size
//	Point pt = { (lhs->x) + (rhs->x) ,(lhs->y) + (rhs->y) };
//	*p3 =pt;
//	
//}
//void main() {
//	Point p1 = { 2,3 };
//	Point p2 = { 3,4 };
//	Point p3;
//	AddPoint(&p1, &p2,&p3);
//	PrintPoint(&p1);
//	PrintPoint(&p2);
//	PrintPoint(&p3);
//
//}


///* Scanf*/
//#include <stdio.h>
//void main() {
//	int n = 0;
//	printf("���� �Է�:");
//	scanf_s("%d", &n);
//	printf("int : %d\n", n);
//}

///* Scanf*/
//#include <stdio.h>
//void main() {
//	int n = 0;
//	while (1) {
//		printf("���� �Է�:");
//		scanf_s("%d", &n);
//		if (n > 0)
//			printf("int : %d\n", n);
//		else
//			break;
//	}
//}
//
///* �Է��ϴµ��� �����ϱ�*/
//#include <stdio.h>
//void main() {
//	int dArray[1000];
//	int dCount = 0; //������ �������� ���Ұ� �����ġ
//	while (1) {
//		int n = 0;
//		printf("���� �Է�:");
//		scanf_s("%d", &n);
//		if (n > 0) {
//		dArray[dCount] = n;
//		printf("int : %d\n", n);
//		++dCount;
//		}
//		else
//			break;
//	}
//	{
//		int i;
//		for (i = 0; i < dCount; ++i) {
//			printf("[%d]:%d \n",i, dArray[i]);
//				
//		}
//	}
//}

//
///* �Է��ϴ´�� �����ϱ� - PrintIntegerArray�Լ��� ����*/
//#include <stdio.h>
//void PrintIntegerArray(int *dArray, int dCount) {
//	int i;
//	for (i = 0; i < dCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //������ �������� ���Ұ� �����ġ
//	while (1) {
//		int n = 0;
//		printf("���� �Է�:");
//		scanf_s("%d", &n);
//		if (n > 0) {
//			dArray[dCount] = n;
//			printf("int : %d\n", n);
//			++dCount;
//		}
//		else
//			break;
//	}
//	PrintIntegerArray(dArray, dCount);
//	
//}

//
///* �Է��ϴ´�� �����ϱ� - PrintIntegerArray�Լ��� ����*/
//#include <stdio.h>
//void PrintIntegerArray(int *dArray, int dCount) {
//	int i;
//	for (i = 0; i < dCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** �ּҷ� ���������� �ٲ�� �ִ� !!!!
//	dArray[*pdCount] = n;
//	printf("int : %d\n", n);
//	++*pdCount;
//}
//int InputInteger() {
//	int data;
//	printf("���� �Է�:");
//	scanf_s("%d", &data);
//	return data;
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //������ �������� ���Ұ� �����ġ
//	while (1) {
//		int n = InputInteger();
//
//		if (n > 0)
//			AddIntegerArray(dArray, &dCount, n);
//		else
//			break;
//	}
//	PrintIntegerArray(dArray, dCount);
//
//}
//
//
///* �Է��ϴ´�� �����ϱ� -InputInteger*/
//#include <stdio.h>
//void PrintIntegerArray(int *dArray, int dCount) {
//	int i;
//	for (i = 0; i < dCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** �ּҷ� ���������� �ٲ�� �ִ� !!!!
//	dArray[*pdCount] = n;
//	printf("int : %d\n", n);
//	++*pdCount;
//}
//void InputInteger(int* pdata) {
//	int data;
//	printf("���� �Է�:");
//	scanf_s("%d", &data);
//	*pdata = data;
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //������ �������� ���Ұ� �����ġ
//	while (1) {
//		int n;
//		InputInteger(&n);
//
//		if (n > 0)
//			AddIntegerArray(dArray, &dCount, n);
//		else
//			break;
//	}
//	PrintIntegerArray(dArray, dCount);
//
//}


//
///* �Է��ϴ´�� �����ϱ� -InputInteger*/
//#include <stdio.h>
//void PrintIntegerArray(int *dArray, int dCount) {
//	int i;
//	for (i = 0; i < dCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** �ּҷ� ���������� �ٲ�� �ִ� !!!!
//	dArray[*pdCount] = n;
//	printf("int : %d\n", n);
//	++*pdCount;
//}
//void InputInteger(int* pdata) {
//	printf("���� �Է�:");
//	scanf_s("%d", pdata);//& ���̸� �ȵ� !!! &pdata�� pdata�� �ּҶ� !
//	
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //������ �������� ���Ұ� �����ġ
//	while (1) {
//		int n;
//		InputInteger(&n);
//
//		if (n > 0)
//			AddIntegerArray(dArray, &dCount, n);
//		else
//			break;
//	}
//	PrintIntegerArray(dArray, dCount);
//
//}
//

//
///* �Է��ϴ´�� �����ϱ� */
//#include <stdio.h>
//
//void InputInteger(int* pdata) {
//	printf("���� �Է�:");
//	scanf_s("%d", pdata);
//
//}
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** pdCount��  �ּҷ� ���������� �ٲ�� �ִ� !!!!
//	dArray[*pdCount] = n;
//	printf("int : %d\n", n);
//	++*pdCount;
//}
//void PrintIntegerArray(int *dArray, int* pdCount) {
//	int i;
//	for (i = 0; i <*pdCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //������ �������� ���Ұ� �����ġ
//	while (1) {
//		int n;
//		InputInteger(&n);
//
//		if (n > 0)
//			AddIntegerArray(dArray, &dCount, n);// out�Ķ���Ͷ����� &dCount 
//		else
//			break;
//	}
//	PrintIntegerArray(dArray, &dCount);//���� �ϰ����� ���߱����� &dCount �� ����
//
//}
//

//
///* �Է��ϴ´�� �����ϱ� - AddIntegerArray */
//#include <stdio.h>
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** pdCount��  �ּҷ� ���������� �ٲ�� �ִ� !!!!
//	dArray[*pdCount] = n;
//	printf("int : %d\n", n);
//	++*pdCount;
//}
//void PrintIntegerArray(int *dArray, int* pdCount) {
//	int i;
//	for (i = 0; i < *pdCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //������ �������� ���Ұ� �����ġ
//
//	AddIntegerArray(dArray, &dCount, 100);// out�Ķ���Ͷ����� 
//	AddIntegerArray(dArray, &dCount, 200);// out�Ķ���Ͷ����� 
//	AddIntegerArray(dArray, &dCount, 300);// out�Ķ���Ͷ����� 
//
//	PrintIntegerArray(dArray, &dCount);//���� �ϰ����� ���߱����� &dCount �� ����
//
//}

//
///* �Է��ϴ´�� �����ϱ� - RemoveIntegerArray */
//#include <stdio.h>
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** pdCount��  �ּҷ� ���������� �ٲ�� �ִ� !!!!
//	dArray[*pdCount] = n;
//	printf("int : %d\n", n);
//	++*pdCount;
//}
//void PrintIntegerArray(int *dArray, int* pdCount) {
//	int i;
//	for (i = 0; i < *pdCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void RemoveIntegerArray(int* dArray, int*pdCount, int num) {//���̾�
//
//	int i;
//	for (i = num; i < *pdCount ; ++i) {
//		dArray[i] = dArray[i + 1];
//		
//	}--*pdCount;
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //������ �������� ���Ұ� �����ġ
//
//	AddIntegerArray(dArray, &dCount, 100);// out�Ķ���Ͷ����� 
//	AddIntegerArray(dArray, &dCount, 200);// out�Ķ���Ͷ����� 
//	AddIntegerArray(dArray, &dCount, 300);// out�Ķ���Ͷ����� 
//	AddIntegerArray(dArray, &dCount, 400);// out�Ķ���Ͷ����� 
//
//	PrintIntegerArray(dArray, &dCount);//���� �ϰ����� ���߱����� &dCount �� ����
//
//	/*�����Ҷ� ������ �����ϴ¹��, ������ �������� �ʴ¹���� �ִ�.*/
//	RemoveIntegerArray(dArray, &dCount, 1);//index��ȣ�� ���� (�̰Դ� ������ �����ϴ°ͺ��� ���־�)
//
//	PrintIntegerArray(dArray, &dCount);//���� �ϰ����� ���߱����� &dCount �� ����
//
//}
//


//
///* �Է��ϴ´�� �����ϱ� - ����ü�� typedef Array �����ؼ�  */
//#include <stdio.h>
//
//typedef struct _array_tag {
//	int dArray[1000];
//	int dCount; //������ �������� ���Ұ� �����ġ
//
//}Array;
//void AddIntegerArray(Array* parr, int n) { //**** pdCount��  �ּҷ� ���������� �ٲ�� �ִ� !!!!
//	parr->dArray[parr->dCount] = n;
//	printf("int : %d\n", n);
//	++parr->dCount;
//}
//void PrintIntegerArray(Array* parr) {
//	int i;
//	for (i = 0; i < parr->dCount; ++i) {
//		printf("[%d]:%d \n", i, parr->dArray[i]);
//	}
//}
//void RemoveIntegerArray(Array* parr, int num) {//���̾�
//	// ������ �����ϴ� ��쿡�� ã�°����� �ؼ� index�� ã�� ���� �Ʒ� �ڵ�...
//	int i;
//	for (i = num; i < parr->dCount; ++i) {
//		parr->dArray[i] = parr->dArray[i + 1];
//	}
//	--parr->dCount;
//}
//void main() {
//
//	Array arr = { 0 }; //�ʱ�ȭ ������� ! ����ü�ȿ����� �Ҽ����⋚����  
//	
//	AddIntegerArray(&arr, 100);// out�Ķ���Ͷ����� &�ּҷ� �ѱ��!!1
//	AddIntegerArray(&arr, 200);  
//	AddIntegerArray(&arr, 300); 
//	AddIntegerArray(&arr, 400);
//
//	PrintIntegerArray(&arr);//���� �ϰ����� ���߱����� &dCount �� ����
//	
//	RemoveIntegerArray(&arr, 1);//index��ȣ�� ���� (�̰Դ� ������ �����ϴ°ͺ��� ���־�)
//
//	PrintIntegerArray(&arr);//���� �ϰ����� ���߱����� &dCount �� ����
//
//}
////
//
///* �Է��ϴ´�� �����ϱ� - �ʱ�ȭ�Լ� �������Լ�  */
//#include <stdio.h>
//
//typedef struct _array_tag {
//	int dArray[1000];
//	int dCount; //������ �������� ���Ұ� �����ġ
//
//}Array;
//void InitIntegerArray(Array* parr) {
//	parr->dCount = 0;
//}
//void UninitIntegerArray(Array* parr) {
//
//}
//void AddIntegerArray(Array* parr, int n) { //**** pdCount��  �ּҷ� ���������� �ٲ�� �ִ� !!!!
//	parr->dArray[parr->dCount] = n;
//	printf("int : %d\n", n);
//	++parr->dCount;
//}
//void PrintIntegerArray(Array* parr) {
//	int i;
//	for (i = 0; i < parr->dCount; ++i) {
//		printf("[%d]:%d \n", i, parr->dArray[i]);
//	}
//}
//void RemoveIntegerArray(Array* parr, int num) {//���̾�
//											   // ������ �����ϴ� ��쿡�� ã�°����� �ؼ� index�� ã�� ���� �Ʒ� �ڵ�...
//	int i;
//	for (i = num; i < parr->dCount; ++i) {
//		parr->dArray[i] = parr->dArray[i + 1];
//	}
//	--parr->dCount;
//}
//void main() {
//
//	Array arr = { 0 }; //�ʱ�ȭ ������� ! ����ü�ȿ����� �Ҽ����⋚����  
//	InitIntegerArray(&arr);
//	AddIntegerArray(&arr, 100);// out�Ķ���Ͷ����� &�ּҷ� �ѱ��!!1
//	AddIntegerArray(&arr, 200);
//	AddIntegerArray(&arr, 300);
//	AddIntegerArray(&arr, 400);
//
//	PrintIntegerArray(&arr);//���� �ϰ����� ���߱����� &dCount �� ����
//
//	RemoveIntegerArray(&arr, 1);//index��ȣ�� ���� (�̰Դ� ������ �����ϴ°ͺ��� ���־�)
//
//	PrintIntegerArray(&arr);//���� �ϰ����� ���߱����� &dCount �� ����
//
//	UninitIntegerArray(&arr); // �������Լ�
//}

//
///* stack ����*/
//#include<stdio.h>
//void main() {
//	int n = 10;
//	int * p = &n;
//	printf("%d", n);
//	printf("%d", *p);
//}
//
///* stack ����*/
//#include<stdio.h>
//void func() {
//	int a = 10;
//	printf("local:%d\n", a);
//}
//void main() {
//	int n = 10;
//	int * p = &n;
//	printf("%d", n);
//	printf("%d", *p);
//	func();
//	func();
//	func();
//}


///* stack ����*/
//#include<stdio.h>
//int g = 100; //���� ������ �����ؾ��� ��
//void Print() {
//	printf("g:%d\n", g);
//}
//void main() {
//	printf("%d", g);
//	g = 20;
//	Print();
//}
//
///* stack ����*/
//#include<stdio.h>
//int g = 100; //���� ������ �����ؾ��� ��
//void Print() {
//	int a = 10;
//	static int s = 10;
//	printf("%d %d\n", a++, s++);
//}
//void main() {
//	Print();
//	Print();
//	Print();
//}

//
///* stack ����*/
//#include<stdio.h>
//int g = 100; //���� ������ �����ؾ��� ��
//void Print() {
//	int a = 10;
//	static int s = 10;
//	
//	//�ʱ�ȭ
//	a = 10;
//	s = 10; 
//	printf("%d %d\n", a++, s++);
//}
//void main() {
//	Print();
//	Print();
//	Print();
//}

//
///* stack ����*/
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	int n = 10;
//	int* p = malloc(4);
//	*p = 10;
//	printf("%d %d \n", n, *p);
//	
//	free(p);//�����޸� ��������� 
//}

//
///* stack ����*/
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	int n = 10;
//	int* p =(int*) malloc(sizeof(int));// ���� 4�� �����ʰ� sizeof
//	//double* p = (double*)malloc(sizeof(double));
//									   
//	*p = 10;
//	//*p=5.55; printf("%g\n", *p);
//
//	printf("%d %d \n", n, *p);
//
//	free(p);//�����޸� ��������� 
//}

//
///* stack ����*/
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//
//	int arr2[5];
//	//�����迭�� ������� ��������Ѵ� �����ȵ�
//	int *arr;
//	arr = (int*)malloc(sizeof(int) * 5); //�����迭
//	for (int i = 0; i < 5; ++i) {
//
//		arr[i] =(i+1)* 10;
//	}
//	for (int i = 0; i < 5; ++i) {
//		printf("%d\n", arr[i]);
//	}
//
//	free(arr);
//}



/* stack ����*/
#include<stdio.h>
#include<stdlib.h>
void main() {

	int arr2[5];
	//�����迭�� ������� ��������Ѵ� �����ȵ�
	int *arr;
	int size = 5;
	printf("�迭�� ������ �Է�: ");
	scanf_s("%d",&size);


	arr = (int*)malloc(sizeof(int) * size); //�����迭
	for (int i = 0; i < size; ++i) {

		arr[i] = (i + 1) * 10;
	}
	for (int i = 0; i < size; ++i) {
		printf("%d\n", arr[i]);
	}

	free(arr);
}
