#include <fstream>
#include <string>
#include <iostream>

void my_cat(std::string file)
{
  
    std::ifstream infile; 
    infile.open(file.data());
    int a = infile.is_open();
    if(a == 0)
    {
        std::cout<<"my_cat: "<<file<<": No such file or directory"<<std::endl;
        return ;
    }
    std::string s;
    while(getline(infile,s))
    {
        std::cout<<s<<std::endl;
    }
    infile.close();
}

int main(int argc, char *argv[])
{
    std::string str;
    if(argc <= 1)
    {
        std::cout<<"my_cat: Usage : ./my_cat file [...]"<<std::endl;
    }
    for (int i = 1; i < argc; i++)
    {
	str=argv[i];
        my_cat(str);
    }
    return 0;
}
