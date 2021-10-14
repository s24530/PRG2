#include <iostream>
#include <time.h>

int main()
{
    int x = 0;
    int y = 0;
    srand(time(NULL));
    x = (rand()%100);
    do
    {
    std::cout<<"Zgadnij liczbe: ";
    std::cin>>y;
    if(y>x)
        {
            std::cout<<"Za dużo!\n";
        }
    else if (y<x)
        {
            std::cout<<"Za mało!\n";
        }
    }
    while(y!=x);

    std::cout<<"Brawo zgadłeś !\n";

    return 0;
}
