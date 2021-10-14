#include <iostream>

int main()
{
    int n=0;
    std::cout<<"podaj liczbe: ";
    std::cin>>n;
    for ( int i=1;i<=n;i++)
    {
        std::cout<<i<<" ";
        if(i%3==0 && i%5==0)
        {
            std::cout<<"FizzBuzz";
        }
        else if(i%5==0)
        {
            std::cout<<"Buzz";
        }
        else if(i%3==0)
        {
            std::cout<<"Fizz";
        }
        std::cout<<"\n";

    }
    return 0;
}
