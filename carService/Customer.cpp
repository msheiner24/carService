#include <stdio.h>
#include "carService.h"

//Customer::Customer() {
//	Car car;
//
//}

Customer::Customer(Car &car) {
	customerCar = &car;
	serviceRecord = 1;
}

void Customer::ComeBackLater() {
	printf("Customer leaving and will come back later\n");
	getchar();
}

void Customer::payBill() {
	printf("Customer paying bill\n");
	getchar();
}