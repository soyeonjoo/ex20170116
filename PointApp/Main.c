#pragma once
#include "PointArray.h"
void main() {
	Point arr[5] = { 0 };
	SetPointArray(arr, 5);
	PrintPointArray(arr, 5);
	InitPointArray(arr, 5);
	PrintPointArray(arr, 5);
}