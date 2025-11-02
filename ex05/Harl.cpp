#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG] Debug Message" << std::endl;
}
void Harl::info( void )
{
    std::cout << "[INFO] Info Message" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[WARNING] Warning Message" << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ERROR] Error Message" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string words[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == words[i])
            (this->*ptr[i])();
    }
}