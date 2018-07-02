#ifndef KOALADOCTOR_H
#define KOALADOCTOR_H

#include <iostream>
#include "sickkoala.h"

class KoalaDoctor
{
    private:
	std::string name;
	bool isWork;
    public:
	KoalaDoctor(std::string str);
	void diagnose(SickKoala *patient);
	void timeCheck();
};

#endif /* KOALADOCTOR_H */
