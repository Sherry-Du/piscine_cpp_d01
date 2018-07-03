#ifndef KOALADOCTORLIST_H
#define KOALADOCTORLIST_H

#include <iostream>
#include "koaladoctor.h"

class KoalaDoctorList
{
    private:
	KoalaDoctor *node;
	KoalaDoctorList *next;
    public:
	KoalaDoctorList(KoalaDoctor *ptr);
	~KoalaDoctorList();
	bool isEnd();
	void append(KoalaDoctorList *ptr);
	KoalaDoctor *getFromName(std::string name);
	KoalaDoctorList *remove(KoalaDoctorList *ptr);
	KoalaDoctorList *removeFromName(std::string name);
	void dump();
};
#endif /* KOALADOCTORLIST_H */
