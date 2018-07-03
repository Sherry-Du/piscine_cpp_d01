#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string str)
{
    this->name = str;
    std::cout<<"Dr."<<this->name<<": Je suis le Dr."<<this->name<<"! Comment Kreoggez-vous ?"<<std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::cout<<"Dr."<<this->name<<": Alors qu’est-ce qui vous goerk Mr."
		<<patient->getName()<<" ?"<<std::endl;
    patient->poke();

    std::string drugList[5] = {"mars","Buronzand","Viagra","Extasy","Feuille d’eucalyptus"};
    std::ofstream offile((patient->getName() + ".report").c_str());
    if(offile)
	offile<<drugList[random() % 5];
}

void KoalaDoctor::timeCheck()
{
    if(!this->isWork)
    {
    	std::cout<<"Dr."<<this->name<<": Je commence le travail !"<<std::endl; 
	this->isWork = true;
    }
    else
    {
	std::cout<<"Dr."<<this->name<<": Je rentre dans ma foret d’eucalyptus !"<<std::endl;
	this->isWork = false;
    }
}



