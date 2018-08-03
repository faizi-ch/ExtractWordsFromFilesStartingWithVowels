#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

void main()
{
	string word;

	ifstream inputFile("input.txt");

	if (!inputFile)
	{
		cout << "There was a problem opening the file. Press any key to close.\n";
		_getch();
		exit(0);
	}

	ofstream resultFile;
	resultFile.open("result.txt");
	

	int i = 0;
	
	while (inputFile.good())
	{
		getline(inputFile, word, ' ');
		if (word != "")
		{
			//words[i] = word;
			if (word.at(0)=='a' || word.at(0)=='e' || word.at(0)=='i' || word.at(0)=='o' || word.at(0)=='u')
			{
				resultFile << word+" ";
				cout << word + " ";
			}
			i++;
		}
	}
	inputFile.close();
	resultFile.close();

	cout << "\nabove words are saved in result.txt successfully!";

	_getch();
}