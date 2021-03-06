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
	~KoalaDoctor()
	void diagnose(SickKoala *patient);
	void timeCheck();
	std::string getName();
};

#endif /* KOALADOCTOR_H */
