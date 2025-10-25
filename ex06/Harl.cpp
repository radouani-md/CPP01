#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl << "Debug Message" << std::endl;
}
void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl << "Info Message" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl << "Warning Message" << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl << "Error Message" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string words[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int value = 0;
    for (int i = 0; i < 4; i++)
    {
        if (level == words[i])
            value = i + 1;
    }
    switch (value)
    {
        case 1:
            this->debug();
        
        case 2:
            this->info();
        
        case 3:
            this->warning();

        case 4:
            this->error();

        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
}