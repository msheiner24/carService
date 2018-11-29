#pragma once
enum oilType {regular, super, premium};
enum tyreMake {michelin, goodyear, pirelli};
enum airFilter {newAirFilter, oldAirFilter};
enum oilFilter { newOilFilter, oldOilFilter };
enum part {_oilFilter, _airFilter, _tyres, _oil};
enum labour {_disposal, _recycle, _rotatetyres, _partswap};

struct oil {
	oilType type;
	int quantity;
};

struct tyre {
	tyreMake make;
	int quantity;
	int size;
	bool status;
};

class Car {
	oil carOil;
	airFilter carAirFilter;
	oilFilter carOilFilter;
	tyre carTyres;
public:
	Car(oil carOil,
		airFilter carAirFilter,
		oilFilter carOilFilter,
		tyre carTyres
	);
	oil SwapOil(oil newOil);
	oilFilter SwapOilFilter(oilFilter newOilFilter);
	airFilter SwapAirFilter(airFilter newAirFilter);
	bool CheckTyresForWear();
	void RotateTyres();
	tyre SwapTyres(tyre NewTyre);
};

class Technician {
	oil newOil;
	oil oldOil;
	airFilter newAirFilter;
	airFilter oldAirFilter;
	oilFilter newOilFilter;
	oilFilter oldOilFilter;
	tyre newTyre;
	tyre oldTyre;
	Car *pcar;
	bool tyreStatus;

public:
	//Technician(Car &car);
	void ServiceCar(Car &car);
};

class Stores {
public:
	oil GetOil(oilType type, int Quantity);
	airFilter NewAirFilter();
	oilFilter NewOilFilter();
	tyre getNewTyres(tyreMake, int size, int quantity);
};



class Garbage {
public:
	void DisposeOilFilter();
	void DisposeAirFilter();
};

class Recycling {
public:
	void RecycleOil();
	void RecycleTyres();
};

class JobSheet {
public:
	void addItem(int PartNumber, int Quantity, int Cost);
	void addLabourItem(int LabourType, int Cost);
};

class Customer {
	Car *customerCar;
	JobSheet CustomerJobSheet;
	int invoice;
	

public:
	int serviceRecord;
	Customer(Car &car);
	void ComeBackLater();
	void payBill();
};

class Receptionist {
	Car *customerCar;
	int invoice;
	int servicerecord;
public:
	Receptionist(Car &car, int servicerecord);
	void MakeCoffee();
	void GenerateInvoice();
	void StampServiceRecord();
	void ReturnCar();
};