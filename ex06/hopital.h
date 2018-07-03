#ifndef HOPITAL_H
#define HOPITAL_H

#include "sickkoalalist.h"
#include "koalanurselist.h"
#include "koaladoctorlist.h"

class Hospital
{
    private:
	SickKoalaList *listSick;
	KoalaDoctorList *listDoctor;
	KoalaNurseList *listNurse;
    public:
	Hospital();
	~Hospital();
	void addDoctor(KoalaDoctorList *doc);
	void addNurse(KoalaNurseList *inf);
	void addSick(SickKoalaList *patient);
	void run();
  
};

#endif /* ! HOPITAL_H */
