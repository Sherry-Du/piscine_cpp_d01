#include <iostream>
#include <string>
#include <fstream>
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string str)
{
    this->name = str;
    std::cout<<"Dr."<<name<<": Je suis le Dr."<<name<<"! Comment Kreoggez-vous ?"<<std::endl;
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::cout<<"Dr."<<thisname<<": Alors qu’est-ce qui vous goerk Mr."
		<<patient->name<<" ?"<<std::endl;
    
}

void KoalaDoctor::timeCheck()
{
    if(!isWork)
    {
    	std::cout<<"Dr."<<this->name<<": Je commence le travail !"<<std::endl; 
	isWork = true;
    }
    else
    {
	std::cout<<"Dr."<<this->name<<": Je rentre dans ma foret d’eucalyptus !"<<std::endl;
	isWork = false;
    }
}

/*
int main(int argc, char *argv[])
{
	SickKoala sickKoala("duxue");
    	KoalaNurse koalaNurse(12);
    	SickKoala *patient;
	patient = &sickKoala;
	//koalaNurse.giveDrug("drug1",patient);
	//koalaNurse.readReport("duxue.report");
	koalaNurse.timeCheck();
	koalaNurse.timeCheck();
	koalaNurse.timeCheck();
    	return 1;
}
*/


