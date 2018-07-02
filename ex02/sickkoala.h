#ifndef SICKKOALA_H
#define SICKKOALA_H
#include <iostream>

class SickKoala
{
    private:
	std::string name;
    public:
	SickKoala(std::string str);
	~SickKoala();
	void poke();
	bool takeDrug(std::string str);
	void overDrive(std::string str);
};

#endif /* SICKKOALA_H */
