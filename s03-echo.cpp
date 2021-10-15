#include <iostream>
#include <string>
    int main ()
    {
        int argc = 0;
        std::string x =" ";
        std::cout<<"Podaj ilość elementów tablicy: \n";
        std::cin>>argc;
        std::cout<<"Podaj elementy tablicy: \n";
        int tab[argc];

        for (int i=0;i<argc; i++)
        {
            std::cin>> tab[i]; 
        }

        std::cout<<"Podaj znaki bez spacji(-n;-r;-l) max 2,(możesz wpisać 0 aby nie podawać nic): ";
        //program zatrzymuje sie po tej linijce, dlaczego ?

        std::getline(std::cin,x);
        std::cout<<"\n";

        if(x =="-r-l")
        {
            for (int i=argc-1;i>-1; i--)
            {
                std::cout<<tab[i]<<" \n";
            }
        }
        else if(x=="-r-n")
        {
            for (int i=argc-1;i>-1; i--)
            {
                std::cout<<tab[i]<<" ";
            }
        }
        else if(x == "-n")
        {
            for (int i=0;i<argc; i++)
            {
                std::cout<<tab[i]<<" ";
            }
        }
        else if(x == "-r")
        {
            for (int i=argc-1;i>-1; i--)
            {
                std::cout<<tab[i]<<" ";
            }
            std::cout<<"\n";
        }
        else if(x =="-l")
        {
            for (int i=0;i<argc; i++)
            {
                std::cout<<tab[i]<<" \n";
            }
            std::cout<<"\n";
        }
        else if (x=="0")
        {
            for (int i=0;i<argc; i++)
            {
                std::cout<<tab[i]<<" ";
            }
            std::cout<<"\n";
        }
       
        return 0;
    }

