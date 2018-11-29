#include "carService.h"
#include <stdio.h>

oil Stores::GetOil(oilType type, int Quantity){
	oil NewOil;
	NewOil.type = type;
	NewOil.quantity = Quantity;
	return NewOil;
}

airFilter Stores::NewAirFilter() {
	printf("STORE RETURNING NEW AIR FILTER\n");
	airFilter x = newAirFilter;
	return x;
}

oilFilter Stores::NewOilFilter() {
	printf("STORE RETURNING NEW OIL FILTER\n");

	oilFilter x = newOilFilter;
	return x;
}

tyre Stores::getNewTyres(tyreMake make, int size, int quantity) {
	tyre newTyres;
	printf("STORE RETURNING NEW TYRES\n");
	printf("New tyre size = %d\n", size);
	enum tyreMake { michelin, goodyear, pirelli };

	printf("New tyre quantity = %d\n", quantity);
	if (make == michelin) {
		printf("New tyre make: Michelin\n");
	}
	else if (make == goodyear) {
		printf("New tyre make: Goodyear\n");
	}
	else {
		printf("New tyre make: Pirelli\n");
	}
	printf("\n");
	newTyres.make = make;
	newTyres.size = size;
	newTyres.quantity = quantity;
	return newTyres;
}