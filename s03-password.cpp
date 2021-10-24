#include <iostream>
#include <string>



int main(int argc, char* argv[]) 
{
    std::string pass =argv[1];
    std::string x="";
   do 
    {
       std::cout<<"Password: ";
       std::getline(std::cin,x);
         
    }
    while(pass!= x);
    std::cout<<"ok!\n";

    return 0; 
}
