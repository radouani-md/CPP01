#include "fileWork.hpp"


int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cout << "Need three Arguments please !!" << std::endl;
        return (1);
    }

    if (readAndReplace(argv) == 1)
        return (1);

    return (0);
}