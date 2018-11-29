#include "carService.h"
#include <stdio.h>

Car::Car(oil Oil, airFilter AirFilter, oilFilter OilFilter, tyre Tyres) {
	carOil = Oil;
	carAirFilter = AirFilter;
	carOilFilter = OilFilter;
	carTyres = Tyres;
}

oil Car::SwapOil(oil newOil) {
	oil oldOil = carOil;
	printf("swapping car oil\n");
	carOil = newOil;
	return oldOil;
}

oilFilter Car::SwapOilFilter(oilFilter newOilFilter) {
	oilFilter oldOilFilter = carOilFilter;
	printf("swapping car oil filter\n");
	carOilFilter = newOilFilter;
	return oldOilFilter;
}

airFilter Car::SwapAirFilter(airFilter newAirFilter) {
	airFilter oldAirFilter = carAirFilter;
	printf("swapping car air filter\n");
	carAirFilter = newAirFilter;
	return oldAirFilter;
}

bool Car::CheckTyresForWear() {
	printf("Checking tyre pressure\n");
	return carTyres.status;
}

void Car::RotateTyres() {
	printf("ROTATING TYRES\n");
}

tyre Car::SwapTyres(tyre newTyre) {
	tyre oldTyre = carTyres;
	printf("swapping car tyres\n");
	carTyres = newTyre;
	return oldTyre;
}