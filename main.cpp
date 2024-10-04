#include <iostream>
int main(int argc, char* args[])
{
    for (int i = 1; i < argc; i++)
    {
        std::cout << args[i] << std::endl;
    }
}