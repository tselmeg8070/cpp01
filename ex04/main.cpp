#include <iostream>
#include <fstream>
#include <string>

void	replace(std::string &str, int start, int len, std::string &to)
{
	std::string	left;
	std::string	right;

	left = str.substr(0, start);
	right = str.substr(start + len, str.size() - (start + len));
	str = left + to + right;
}

void	replaceString(std::string &str, std::string from, std::string to)
{
	if(from.empty())
		return;
	size_t start_pos = 0;
	while((start_pos = str.find(from, start_pos)) != std::string::npos) {
		replace(str, start_pos, from.size(), to);
		start_pos += to.length();
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	myFile;
	std::ofstream	resFile;
	std::string		fileContent;
	std::string		line;

	fileContent = "";
	if (argc == 4)
	{
		myFile.open(argv[1]);
		if (myFile.is_open())
		{
			while (myFile)
			{
				std::getline(myFile, line);
				fileContent += line + "\n";
			}
			fileContent = fileContent.substr(0, fileContent.size() - 1);
			std::string from = argv[2];
			std::string to = argv[3];
			replaceString(fileContent, from, to);
			myFile.close();
			std::string outName = argv[1];
			outName += ".replace";
			resFile.open(outName.c_str());
			if (resFile.is_open())
			{
				resFile << fileContent;
				resFile.close();
			}
			else
			{
				std::cerr << "Couldn't create the file" << std::endl;
				return (1);
			}
		}
		else
		{
			std::cerr << "Couldn't open the file" << std::endl;
			return (1);
		}
	}
	else
	{
		std::cerr << "Arguments seems strange" << std::endl;
		return (1);
	}
}
