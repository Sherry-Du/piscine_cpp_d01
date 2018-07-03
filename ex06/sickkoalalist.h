#ifndef SICKKOALALIST_H
#define SICKKOALALIST_H

#include <iostream>
#include "sickkoala.h"

class SickKoalaList
{
    private:
	SickKoala *node;
	SickKoalaList *next;
    public:
	SickKoalaList(SickKoala *sk);
  	bool isEnd();
  	void append(SickKoalaList *skl);
  	SickKoala *getFromName(std::string name);
  	SickKoalaList *remove(SickKoalaList *skl);
  	SickKoalaList *removeFromName(std::string name);
  	void dump();
  	SickKoala *getContent();
	SickKoalaList *getNext();
};

#endif /* SICKKOALALIST_H */
