#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

float f2c(float f)
{
    float c;
    c = 5.0/9.0 * (f - 32);
    return c;
}

float c2f(float c)
{
    float f;
    f = c * (9.0/5.0) + 32;
    return f;
}

void my_convert_temp()
{
    std::string type;
    float f, c, input;
    std::cin>>input>>type;
    if(type == "Celsius")
    {
        f = c2f(input);
        std::cout<<std::setfill(' ')<<std::setw(16)
	    <<std::setiosflags(std::ios::fixed)
	    <<std::setprecision(3)
	    <<f<<" Fahrenheit"<<std::endl;
    }
    else if(type == "Fahrenheit")
    {
        c = f2c(input);
        std::cout<<std::setfill(' ')<<std::setw(16)
	    <<std::setiosflags(std::ios::fixed)
	    <<std::setprecision(3)
	    <<c<<" Celsius"<<std::endl;
    }
    else
    {
	std::cout<<"my_convert_temp: input invalid"<<std::endl;
    }
}

int main(int argc, char *argv[])
{
    my_convert_temp();
    return 1;
}
