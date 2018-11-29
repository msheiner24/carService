#include "carService.h"
#include <stdio.h>



void Technician::ServiceCar(Car &car) {
	JobSheet newJobSheet; //2
	Stores store;
	Recycling recycling;
	Garbage garbage;
	pcar = &car;

	newOil = store.GetOil(regular, 20); //4
	printf("Technician received %dL of new oil from store\n", newOil.quantity); //add if state here to print enum type
	getchar();
	newJobSheet.addItem(12, newOil.quantity, 4); //5  
	getchar();
	newAirFilter = store.NewAirFilter(); //6     add if state here to print enum type
	getchar();
	newJobSheet.addItem(7, 1, 4); //7
	getchar();
	newOilFilter = store.NewOilFilter(); //8
	getchar();
	newJobSheet.addItem(9, 1, 4); //9
	getchar();
	oldOil = pcar->SwapOil(newOil); //10
	getchar();
	recycling.RecycleOil(); //11
	getchar();
	newJobSheet.addLabourItem(12, 20);//12
	getchar();
	oldOilFilter = pcar->SwapOilFilter(newOilFilter); //13
	getchar();
	garbage.DisposeOilFilter(); //14
	getchar();
	newJobSheet.addLabourItem(14, 10);//15
	getchar();
	oldAirFilter = pcar->SwapAirFilter(newAirFilter); //16
	getchar(); 
	garbage.DisposeAirFilter(); //17
	getchar();
	newJobSheet.addLabourItem(18, 10); //18
	getchar();
	tyreStatus = pcar->CheckTyresForWear(); //19
	if (tyreStatus == 0) {
		getchar();
		newTyre = store.getNewTyres(michelin, 27, 4); //20
		getchar();
		newJobSheet.addItem(21, 4, 10); //21
		getchar();
		oldTyre = pcar->SwapTyres(newTyre); //22
		getchar();
		recycling.RecycleTyres(); //23
		getchar();
		newJobSheet.addLabourItem(23, 13); //24
	}
	else {
		getchar();
		pcar->RotateTyres();
		getchar();
		newJobSheet.addLabourItem(26, 22);
	}
}