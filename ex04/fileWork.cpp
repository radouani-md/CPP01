#include "fileWork.hpp"


int    readAndReplace(char **argv)
{
    std::ifstream file;
    std::ofstream replacedFile;
    std::string lines;

    file.open(argv[1], std::ios::out);
    if (!file.is_open())
    {
        std::cout << "Error when opening the file" << std::endl;
        return (1);
    }

    replacedFile.open(argv[2], std::ios::out | std::ios::in);
    if (!replacedFile.is_open())
    {
        std::cout << "Error when opening the file" << std::endl;
        return (1);
    }

    std::getline(file, lines, '\0');
    
    replacedFile << lines;

    file.close();
    replacedFile.close();
    return (0);
}