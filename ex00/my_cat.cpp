#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void my_cat(string file)
{
  
    ifstream infile; 
    infile.open(file.data());
    int a = infile.is_open();
    if(a == 0)
    {
        cout<<"my_cat: "<<file<<": No such file or directory"<<endl;
        return ;
    }
    string s;
    while(getline(infile,s))
    {
        cout<<s<<endl;
    }
    infile.close();
}

int main(int argc, char *argv[])
{
    string str;
    if(argc <= 1)
    {
        cout<<"my_cat: Usage : ./my_cat file [...]"<<endl;
    }
    for (int i = 1; i < argc; i++)
    {
	str=argv[i];
        my_cat(str);
    }
    return 0;
}
