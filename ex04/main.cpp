#include "fileWork.hpp"


int main(int argc, char **argv)
{
    if (argc < 4 || argc > 4)
    {
        std::cout << "Need four Arguments please !!" << std::endl;
        return (1);
    }
    if (!argv[2] || !*argv[2])
    {
        std::cout << "You must write something to replace" << std::endl;
        return (1);
    }
    if (readAndReplace(argv) == 1)
        return (1);

    return (0);
}