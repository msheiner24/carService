#include "carService.h"
#include <stdio.h>

void JobSheet::addItem(int partNum, int quantity, int cost) {
	int price = quantity * cost;
	printf("Adding %dx of partnum: %d to jobsheet at price: %d\n", quantity, partNum, price);
}

void JobSheet::addLabourItem(int partNum,int cost) {
	printf("Adding labour type number: %d to jobsheet at price: %d", partNum, cost);
}