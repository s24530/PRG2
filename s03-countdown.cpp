#include <iostream>
#include <string>

int main(int agrc, char* argv[])
{
    auto x = std::string{argv[1]};
    auto y = std::stoi(x);
    if (y>0)
    {
        for (int i=y;>=0;i--)
        {
            std::cout<<i<<"...\n";
        }
    }
    else
    {
        for (int i=0;i>=yi--)
        {
            std::cout<<i<<"...\n";
        }
    }
    argc++;
    return 0;
}
