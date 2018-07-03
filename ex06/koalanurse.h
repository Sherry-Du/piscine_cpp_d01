#ifndef KOALANURSE_H
#define KOALANURSE_H

#include <iostream>
#include "sickkoala.h"

class KoalaNurse
{
    private:
	int ID;
	bool isWork;
    public:
	KoalaNurse(int init);
	~KoalaNurse();
	void giveDrug(std::string drug, SickKoala *patient);
	std::string readReport(std::string file);
	void timeCheck();
	int getID();
};

#endif /* KOALANURSE_H */
