#include <iostream>
int main(int argc, char* args[])
{
    for (int i = argc - 1; i > 0; i--)
    {
        std::cout << args[i] << std::endl;
    }
}