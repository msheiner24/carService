// carService.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "carService.h"

int main()
{
    std::cout << "Hello World!\n"; 
	oil newCarOil;
	newCarOil.quantity = 20;
	newCarOil.type = regular;
	airFilter newCarAirFilter = oldAirFilter;
	oilFilter newCarOilFilter = oldOilFilter;
	tyre newCarTyre;
	newCarTyre.make = michelin;
	newCarTyre.size = 26;
	newCarTyre.quantity = 4;
	newCarTyre.status = 0;
	Car newCar(newCarOil, newCarAirFilter, newCarOilFilter, newCarTyre);
	Car *pCar;
	pCar = &newCar;
	Customer customer(*pCar);
	Receptionist receptionist(*pCar, customer.serviceRecord);
	printf("customer giving car and service record to receptionist\n");
	getchar();
	customer.ComeBackLater();
	receptionist.MakeCoffee();
	Technician newTechnician;
	newTechnician.ServiceCar(*pCar);
	receptionist.GenerateInvoice();
	receptionist.StampServiceRecord();
	receptionist.ReturnCar();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
