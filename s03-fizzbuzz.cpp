#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    auto x = std:;string{argv[1]};
    auto n=std::stoi(x);
    
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
    argc++;
    return 0;
}
