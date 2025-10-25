#include "fileWork.hpp"


int main(int argc, char **argv)
{
    if (argc < 4 || argc > 4)
    {
        std::cout << "Need four Arguments please !!" << std::endl;
        return (1);
    }

    if (readAndReplace(argv) == 1)
        return (1);

    return (0);
}