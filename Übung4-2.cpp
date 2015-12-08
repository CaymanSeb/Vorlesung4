#include "stdafx.h"
#include <iostream>
using namespace std;


class Instrument {
	
public:
	virtual void bewegeLuft() = 0;

	int highestValue = 0;

	bool operator<(Instrument b) {

		bool returnValue = (highestValue < b.highestValue);

		return returnValue;
	}

};


class Gitarre : public Instrument {
public:
	void bewegeLuft() override {
		cout << "Plöng !!" << endl;

	int highestValue = 988;
	}
};

class Trompete : public Instrument {
public:
	void bewegeLuft() override {
		cout << "Trööt !!" << endl;

	int highestValue = 369;
	}
};

class Kontrabass : public Instrument {
public:
	void bewegeLuft() override {
		cout << "Plomm !!" << endl;

	int highestValue = 31;
	}
};


class Pauke : public Instrument {
public:
	void bewegeLuft() override {
		cout << "Boing !!" << endl;

	int highestValue = 146;
	}
};

int main() {

	
	Instrument* ensemble[4];

	ensemble[0] = new Gitarre();
	ensemble[1] = new Trompete();
	ensemble[2] = new Kontrabass();
	ensemble[3] = new Pauke();

	cout << "Das Ensemble spielt zum Tanz!" << endl;
	for (int i = 0; i < 4; i++) {
		ensemble[i]->bewegeLuft();
	}

	return 0;
}
