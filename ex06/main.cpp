#include "Harl.hpp"


int main(int argc, char **argv)
{
    Harl msg;

    if (argc != 2)
    {
        std::cout << "Two Arguments expected !!" << std::endl;
        return (1);
    }
    std::string msgString = argv[1];
    msg.complain(msgString);
}