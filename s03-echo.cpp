#include <iostream>
#include <string>
#include <string.h>
    
    bool ifN, ifR, ifL;


    int main (int argc, char* argv[])
    {
        char n[] = "-n";
        char r[] = "-r";
        char l[] = "-l";
    
        for (int i = 0; i < 4; i++)
        {
            if(strcmp(argv[i],n) == 0)
            {
                ifN = 1;
            }
            if(strcmp(argv[i],r) == 0)
            {
                ifR = 1;
            }
            if(strcmp(argv[i],l) == 0)
            {
                ifL = 1;
            }
        }
        

        if(ifR == 1 && ifL == 1)
        {
            for (int i=argc-1;i>2; i--)
            {
                std::cout<<argv[i]<<" \n";
            }
        }
        else if(ifR == 1&& ifN == 1)
        {
            for (int i=argc-1;i>2; i--)
            {
                std::cout<<argv[i]<<" ";
            }
        }
        else if(ifN == 1)
        {
            for (int i=2;i<argc; i++)
            {
                std::cout<<argv[i]<<" ";
            }
        }
        else if(ifR == 1)
        {
            for (int i=argc-1;i>1; i--)
            {
                std::cout<<argv[i]<<" ";
            }
            std::cout<<"\n";
        }
        else if(ifL == 1)
        {
            for (int i=2;i<argc; i++)
            {
                std::cout<<argv[i]<<"\n";
            }
            
        }
        else if (ifR == 0 && ifL == 0 && ifN == 0)
        {
            for (int i=1;i<argc; i++)
            {
                std::cout<<argv[i]<<" ";
            }
            std::cout<<"\n";
        }
       
        return 0;
    }


