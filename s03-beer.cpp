#include <iostream>
#include <string>
int main(int argc, char* argv[])
{
    int x = argc >=2 ? std::stoi(argv[1]) : 99;
    for(int i=x;i>=1;i--)
    {
        std::cout<< i <<" bottles of beer on the wall, " << i << " bottle of beer.\n";
        
        std::cout<<"Take down one, pass it around, " << i-1 <<" bottles of beer on the wall...\n";
    
    }
    std::cout<<"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall...\n";
    return 0;
}

