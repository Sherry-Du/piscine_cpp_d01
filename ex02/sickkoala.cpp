#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "sickkoala.h" 

SickKoala::SickKoala(std::string str)
{
    name = str;
}

SickKoala::~SickKoala()
{
    std::cout<<"Mr."<<name<<": Kreooogg !! Je suis gueriiii !"<<std::endl;
}

void SickKoala::poke()
{
    std::cout<<"Mr."<<name<<": Gooeeeeerrk !! :’("<<std::endl;
}
	
bool SickKoala::takeDrug(std::string str)
{
    if(str == "Buronzand")
    {
	std::cout<<"Mr."<<name<<": Et la fatigue a fait son temps !"<<std::endl;
	return true;
    }
    else 
    {
	std::string result = "";
	for (int i = 0; i < str.length(); i++) 
	{
	    str[i] = tolower(str[i]);
	    result += str[i];
	}
	if(result == "mars")
	{
            std::cout<<"Mr."<<name<<": Mars, et ca kreog !"<<std::endl;
	    return true;
	}
	else
	{
	    std::cout<<"Mr."<<name<<": Goerkreog !"<<std::endl;
	    return false;
	}
    }
}

void SickKoala::overDrive(std::string str)
{
    std::string repl = "1337";
    std::vector<std::string> res;
    std::string result;
    std::stringstream input(str);
    while(input>>result)
	res.push_back(result);
    std::cout<<"Mr."<<name<<": ";
    for(int i = 0; i < res.size(); i++){
	if(res[i]=="Kreog" && res[i+1]=="!")
	    std::cout<<repl<<" ";
	else if(i == (res.size() - 1))
	    std::cout<<res[i]<<std::endl;
	else
	    std::cout<<res[i]<<" ";
    }
}

