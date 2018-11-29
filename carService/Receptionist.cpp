#include <stdio.h>
#include "carService.h"

Receptionist::Receptionist(Car &car, int customerservicerecord) {
	customerCar = &car;
	servicerecord = customerservicerecord;
}

void Receptionist::GenerateInvoice() {
	printf("Receptionist Generating Invoice and returning invoice to customer\n");
	getchar();
}

void Receptionist::MakeCoffee() {
	printf("Receptionist making coffee\n");
	getchar();
}

void Receptionist::StampServiceRecord() {
	printf("Receptionist stamping service record");
	getchar();
}

void Receptionist::ReturnCar() {
	printf("Receptionist returning car");
	getchar();
}