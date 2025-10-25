#include "fileWork.hpp"


int    readAndReplace(char **argv)
{
	std::ifstream	file;
	int          	indexPos;
	std::string  	searched = argv[2];
	std::string  	updated = argv[3];
	std::ofstream	replacedFile;
	std::string		lines;
	std::string		oldLines;

	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error when opening the file" << std::endl;
		return (1);
	}
	std::getline(file, lines, '\0');
	while (lines.find(searched) != std::string::npos)
	{
		oldLines = lines;
		indexPos = lines.find(searched);
		lines = lines.substr(0, indexPos);
		lines += updated;
		lines += oldLines.substr(indexPos + searched.length() , oldLines.length());
	}

	std::string rep = argv[1];
	rep += ".replace";
	replacedFile.open(rep.c_str());
	if (!replacedFile.is_open())
	{
	    std::cout << "Error when opening the file" << std::endl;
	    return (1);
	}
	
	replacedFile << lines;

	file.close();
	replacedFile.close();
	return (0);
}