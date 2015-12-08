#include "stdafx.h"
#include <iostream>
using namespace std;


///Hauptklasse///
class Instrument {

public:
	virtual void bewegeLuft() = 0;

};

///Unterklassen///
///1///
class Idiophone : public Instrument {

};

class Schlagidiophone : public Idiophone {

};

class Glockenspiel : public Schlagidiophone {

public:
	void bewegeLuft() override {
		cout << "Pling.." << endl;
	}
};

///2///
class Membranophone : public Instrument {

};

class Reibtrommeln : public Membranophone {

};

class Felltrommel : public Reibtrommeln {

public:
	void bewegeLuft() override {
		cout << "Rib, Rib.." << endl;
	}
};

///3///
class Chordophone : public Instrument {

};

class Zusammengesetzte_Chordophone : public Chordophone {

};

class Harfe : public Zusammengesetzte_Chordophone {

public:
	void bewegeLuft() override {
		cout << "Dwing.." << endl;
	}
};

///4///
class Aerophone : public Instrument {

};

class Freie_Aerophone : public Aerophone {

};

class Rohrbombe : public Freie_Aerophone {

public:
	void bewegeLuft() override {
		cout << "Rumps, Bomm, Peng, Krach.." << endl;
	}
};

///5///
class Elektrophone : public Instrument {

};

class Keyboard : public Elektrophone {

public:
	void bewegeLuft() override {
		cout << "Klimper, Klimp.." << endl;
	}
};



int main()
{
	Glockenspiel *glöckchen = new Glockenspiel();
	glöckchen->bewegeLuft();

	Felltrommel *trommel = new Felltrommel();
	trommel->bewegeLuft();

	Harfe *harfe = new Harfe();
	harfe->bewegeLuft();

	Rohrbombe *bömbchen = new Rohrbombe();
	bömbchen->bewegeLuft();

	Keyboard *piano = new Keyboard();
	piano->bewegeLuft();

    return 0;
}

