#include <iostream>
#include <string>
#include <fstream>
#include "koalanurse.h"

KoalaNurse::KoalaNurse(int init)
{
    this->ID = init;
    this->isWork = false;
}

KoalaNurse::~KoalaNurse()
{
    std::cout<<"Nurse "<<ID<<": Enfin un peu de repos !"<<std::endl;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala *patient)
{
    patient->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string file)
{
    std::string drug, patientName;

    std::ifstream infile(file.c_str()); 
    if(!infile)
	return "";
    getline(infile,drug);
    infile.close();
    patientName = file.substr(0, file.rfind(".report"));
    std::cout<<"Nurse "<<ID<<": Kreog ! Il faut donner un "<<drug
	<<" a Mr."<<patientName<<" !"<<std::endl;
    return drug;
}

void KoalaNurse::timeCheck()
{
    if(!isWork)
    {
    	std::cout<<"Nurse "<<ID<<": Je commence le travail !"<<std::endl; 
	isWork = true;
    }
    else
    {
	std::cout<<"Nurse "<<ID<<": Je rentre dans ma foret d’eucalyptus !"<<std::endl;
	isWork = false;
    }
}



