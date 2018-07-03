#ifndef SICKKOALA_H
#define SICKKOALA_H
#include <iostream>

class SickKoala
{
    private:
	std::string name;
	std::string drug;
    public:
	SickKoala(std::string str);
	~SickKoala();
	void poke();
	bool takeDrug(std::string str);
	void overDrive(std::string str);
	std::string getName();
};

#endif /* SICKKOALA_H */
