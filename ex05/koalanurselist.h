#ifndef KOALANURSELIST_H
#define KOALANURSELIST_H

#include <iostream>
#include "koalanurse.h"

class KoalaNurseList
{
    private:
	KoalaNurse *node;
	KoalaNurseList *next;
    public:
	KoalaNurseList(KoalaNurse *ptr);
	bool isEnd();
	void append(KoalaNurseList *ptr);
	KoalaNurse *getFromID(int id);
	KoalaNurseList *remove(KoalaNurseList *ptr);
	KoalaNurseList *removeFromID(int id);
	void dump();
};

#endif /* KOALANURSELIST_H */
