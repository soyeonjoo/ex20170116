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
//void PrintPoint(struct Point p) {// p로 값복사 
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
//void PrintPoint(struct Point *p) {// 구조체는 크기때문에 값복사를 안한다 그래서 * 쓴다.
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	struct Point p1 = { 2.3 };
//	struct Point p2 = { 3, 4 };
//	PrintPoint(&p1);
//	PrintPoint(&p2);
//}

//
///*구조체 typedef*/
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
//	*p = pt;//메모리 복사로도 가능
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
///*구조체 typedef*/
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
//	*p = pt;//메모리 복사로도 가능
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
//typedef int INT;// 타입 정의
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
//	*p = pt;//메모리 복사로도 가능
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

/* 배열  printPointArray */
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
//	*p = pt;//메모리 복사로도 가능
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
///*구조체 */
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
//void SetPoint(Point *p, int x, int y) { //out 파라미터 
//	p->x = x;
//	p->y = y;
//}
//void PrintPoint(Point* p) {// in 파라미터
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	Point pt = { 0 };
//	SetPoint(&pt, 2, 3);
//	PrintPoint(&pt); //구조체는 항상 주소를 넘긴다!!
//}
//

///*구조체 */
//#include <stdio.h>
//typedef struct _Point_tag
//{
//	int x;
//	int y;
//}Point;
//Point SetPoint( int x, int y) { //return 보다는 out 파라미터 쓰자 ! 
//	Point p = { x, y };
//	return p;
//}
//void PrintPoint(Point* p) {
//	printf("(%d, %d) \n", p->x, p->y);
//}
//void main() {
//	Point pt = { 0 };
//	pt = SetPoint(2, 3);
//	PrintPoint(&pt); //구조체는 항상 주소를 넘긴다!!
//}

///*구조체 */
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
//	PrintPointArray(arr,5); //구조체는 항상 주소를 넘긴다!!
//}
// 
///*구조체 InitPointArray */
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


///*구조체 */
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

///*구조체 AddPoint */
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
///*구조체 AddPoint*/
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
//	printf("정수 입력:");
//	scanf_s("%d", &n);
//	printf("int : %d\n", n);
//}

///* Scanf*/
//#include <stdio.h>
//void main() {
//	int n = 0;
//	while (1) {
//		printf("정수 입력:");
//		scanf_s("%d", &n);
//		if (n > 0)
//			printf("int : %d\n", n);
//		else
//			break;
//	}
//}
//
///* 입력하는데로 저장하기*/
//#include <stdio.h>
//void main() {
//	int dArray[1000];
//	int dCount = 0; //원소의 갯수이자 원소가 담길위치
//	while (1) {
//		int n = 0;
//		printf("정수 입력:");
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
///* 입력하는대로 저장하기 - PrintIntegerArray함수로 만듬*/
//#include <stdio.h>
//void PrintIntegerArray(int *dArray, int dCount) {
//	int i;
//	for (i = 0; i < dCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //원소의 갯수이자 원소가 담길위치
//	while (1) {
//		int n = 0;
//		printf("정수 입력:");
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
///* 입력하는대로 저장하기 - PrintIntegerArray함수로 만듬*/
//#include <stdio.h>
//void PrintIntegerArray(int *dArray, int dCount) {
//	int i;
//	for (i = 0; i < dCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** 주소로 보내야지만 바뀔수 있다 !!!!
//	dArray[*pdCount] = n;
//	printf("int : %d\n", n);
//	++*pdCount;
//}
//int InputInteger() {
//	int data;
//	printf("정수 입력:");
//	scanf_s("%d", &data);
//	return data;
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //원소의 갯수이자 원소가 담길위치
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
///* 입력하는대로 저장하기 -InputInteger*/
//#include <stdio.h>
//void PrintIntegerArray(int *dArray, int dCount) {
//	int i;
//	for (i = 0; i < dCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** 주소로 보내야지만 바뀔수 있다 !!!!
//	dArray[*pdCount] = n;
//	printf("int : %d\n", n);
//	++*pdCount;
//}
//void InputInteger(int* pdata) {
//	int data;
//	printf("정수 입력:");
//	scanf_s("%d", &data);
//	*pdata = data;
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //원소의 갯수이자 원소가 담길위치
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
///* 입력하는대로 저장하기 -InputInteger*/
//#include <stdio.h>
//void PrintIntegerArray(int *dArray, int dCount) {
//	int i;
//	for (i = 0; i < dCount; ++i) {
//		printf("[%d]:%d \n", i, dArray[i]);
//	}
//}
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** 주소로 보내야지만 바뀔수 있다 !!!!
//	dArray[*pdCount] = n;
//	printf("int : %d\n", n);
//	++*pdCount;
//}
//void InputInteger(int* pdata) {
//	printf("정수 입력:");
//	scanf_s("%d", pdata);//& 붙이면 안됨 !!! &pdata는 pdata의 주소라서 !
//	
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //원소의 갯수이자 원소가 담길위치
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
///* 입력하는대로 저장하기 */
//#include <stdio.h>
//
//void InputInteger(int* pdata) {
//	printf("정수 입력:");
//	scanf_s("%d", pdata);
//
//}
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** pdCount는  주소로 보내야지만 바뀔수 있다 !!!!
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
//	int dCount = 0; //원소의 갯수이자 원소가 담길위치
//	while (1) {
//		int n;
//		InputInteger(&n);
//
//		if (n > 0)
//			AddIntegerArray(dArray, &dCount, n);// out파라미터때문에 &dCount 
//		else
//			break;
//	}
//	PrintIntegerArray(dArray, &dCount);//위에 일괄성을 맞추기위해 &dCount 로 쓴다
//
//}
//

//
///* 입력하는대로 저장하기 - AddIntegerArray */
//#include <stdio.h>
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** pdCount는  주소로 보내야지만 바뀔수 있다 !!!!
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
//	int dCount = 0; //원소의 갯수이자 원소가 담길위치
//
//	AddIntegerArray(dArray, &dCount, 100);// out파라미터때문에 
//	AddIntegerArray(dArray, &dCount, 200);// out파라미터때문에 
//	AddIntegerArray(dArray, &dCount, 300);// out파라미터때문에 
//
//	PrintIntegerArray(dArray, &dCount);//위에 일괄성을 맞추기위해 &dCount 로 쓴다
//
//}

//
///* 입력하는대로 저장하기 - RemoveIntegerArray */
//#include <stdio.h>
//void AddIntegerArray(int *dArray, int* pdCount, int n) { //**** pdCount는  주소로 보내야지만 바뀔수 있다 !!!!
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
//void RemoveIntegerArray(int* dArray, int*pdCount, int num) {//많이씀
//
//	int i;
//	for (i = num; i < *pdCount ; ++i) {
//		dArray[i] = dArray[i + 1];
//		
//	}--*pdCount;
//}
//void main() {
//	int dArray[1000];
//	int dCount = 0; //원소의 갯수이자 원소가 담길위치
//
//	AddIntegerArray(dArray, &dCount, 100);// out파라미터때문에 
//	AddIntegerArray(dArray, &dCount, 200);// out파라미터때문에 
//	AddIntegerArray(dArray, &dCount, 300);// out파라미터때문에 
//	AddIntegerArray(dArray, &dCount, 400);// out파라미터때문에 
//
//	PrintIntegerArray(dArray, &dCount);//위에 일괄성을 맞추기위해 &dCount 로 쓴다
//
//	/*제거할때 순서를 유지하는방법, 순서를 유지하지 않는방법이 있다.*/
//	RemoveIntegerArray(dArray, &dCount, 1);//index번호로 제거 (이게더 값으로 제거하는것보다 자주씀)
//
//	PrintIntegerArray(dArray, &dCount);//위에 일괄성을 맞추기위해 &dCount 로 쓴다
//
//}
//


//
///* 입력하는대로 저장하기 - 구조체로 typedef Array 정의해서  */
//#include <stdio.h>
//
//typedef struct _array_tag {
//	int dArray[1000];
//	int dCount; //원소의 갯수이자 원소가 담길위치
//
//}Array;
//void AddIntegerArray(Array* parr, int n) { //**** pdCount는  주소로 보내야지만 바뀔수 있다 !!!!
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
//void RemoveIntegerArray(Array* parr, int num) {//많이씀
//	// 값으로 제거하는 경우에는 찾는과정을 해서 index를 찾고 나서 아래 코드...
//	int i;
//	for (i = num; i < parr->dCount; ++i) {
//		parr->dArray[i] = parr->dArray[i + 1];
//	}
//	--parr->dCount;
//}
//void main() {
//
//	Array arr = { 0 }; //초기화 해줘야함 ! 구조체안에서는 할수없기떄문에  
//	
//	AddIntegerArray(&arr, 100);// out파라미터때문에 &주소로 넘기기!!1
//	AddIntegerArray(&arr, 200);  
//	AddIntegerArray(&arr, 300); 
//	AddIntegerArray(&arr, 400);
//
//	PrintIntegerArray(&arr);//위에 일괄성을 맞추기위해 &dCount 로 쓴다
//	
//	RemoveIntegerArray(&arr, 1);//index번호로 제거 (이게더 값으로 제거하는것보다 자주씀)
//
//	PrintIntegerArray(&arr);//위에 일괄성을 맞추기위해 &dCount 로 쓴다
//
//}
////
//
///* 입력하는대로 저장하기 - 초기화함수 마무리함수  */
//#include <stdio.h>
//
//typedef struct _array_tag {
//	int dArray[1000];
//	int dCount; //원소의 갯수이자 원소가 담길위치
//
//}Array;
//void InitIntegerArray(Array* parr) {
//	parr->dCount = 0;
//}
//void UninitIntegerArray(Array* parr) {
//
//}
//void AddIntegerArray(Array* parr, int n) { //**** pdCount는  주소로 보내야지만 바뀔수 있다 !!!!
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
//void RemoveIntegerArray(Array* parr, int num) {//많이씀
//											   // 값으로 제거하는 경우에는 찾는과정을 해서 index를 찾고 나서 아래 코드...
//	int i;
//	for (i = num; i < parr->dCount; ++i) {
//		parr->dArray[i] = parr->dArray[i + 1];
//	}
//	--parr->dCount;
//}
//void main() {
//
//	Array arr = { 0 }; //초기화 해줘야함 ! 구조체안에서는 할수없기떄문에  
//	InitIntegerArray(&arr);
//	AddIntegerArray(&arr, 100);// out파라미터때문에 &주소로 넘기기!!1
//	AddIntegerArray(&arr, 200);
//	AddIntegerArray(&arr, 300);
//	AddIntegerArray(&arr, 400);
//
//	PrintIntegerArray(&arr);//위에 일괄성을 맞추기위해 &dCount 로 쓴다
//
//	RemoveIntegerArray(&arr, 1);//index번호로 제거 (이게더 값으로 제거하는것보다 자주씀)
//
//	PrintIntegerArray(&arr);//위에 일괄성을 맞추기위해 &dCount 로 쓴다
//
//	UninitIntegerArray(&arr); // 마무리함수
//}

//
///* stack 변수*/
//#include<stdio.h>
//void main() {
//	int n = 10;
//	int * p = &n;
//	printf("%d", n);
//	printf("%d", *p);
//}
//
///* stack 변수*/
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


///* stack 변수*/
//#include<stdio.h>
//int g = 100; //전역 변수는 자제해야함 ㅎ
//void Print() {
//	printf("g:%d\n", g);
//}
//void main() {
//	printf("%d", g);
//	g = 20;
//	Print();
//}
//
///* stack 변수*/
//#include<stdio.h>
//int g = 100; //전역 변수는 자제해야함 ㅎ
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
///* stack 변수*/
//#include<stdio.h>
//int g = 100; //전역 변수는 자제해야함 ㅎ
//void Print() {
//	int a = 10;
//	static int s = 10;
//	
//	//초기화
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
///* stack 변수*/
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	int n = 10;
//	int* p = malloc(4);
//	*p = 10;
//	printf("%d %d \n", n, *p);
//	
//	free(p);//동적메모리 지워줘야함 
//}

//
///* stack 변수*/
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	int n = 10;
//	int* p =(int*) malloc(sizeof(int));// 보통 4로 쓰지않고 sizeof
//	//double* p = (double*)malloc(sizeof(double));
//									   
//	*p = 10;
//	//*p=5.55; printf("%g\n", *p);
//
//	printf("%d %d \n", n, *p);
//
//	free(p);//동적메모리 지워줘야함 
//}

//
///* stack 변수*/
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//
//	int arr2[5];
//	//정적배열은 사이즈는 상수여야한다 변수안됨
//	int *arr;
//	arr = (int*)malloc(sizeof(int) * 5); //동적배열
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



/* stack 변수*/
#include<stdio.h>
#include<stdlib.h>
void main() {

	int arr2[5];
	//정적배열은 사이즈는 상수여야한다 변수안됨
	int *arr;
	int size = 5;
	printf("배열의 갯수를 입력: ");
	scanf_s("%d",&size);


	arr = (int*)malloc(sizeof(int) * size); //동적배열
	for (int i = 0; i < size; ++i) {

		arr[i] = (i + 1) * 10;
	}
	for (int i = 0; i < size; ++i) {
		printf("%d\n", arr[i]);
	}

	free(arr);
}
