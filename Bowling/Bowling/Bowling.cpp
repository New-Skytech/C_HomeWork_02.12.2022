#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int Scores[23];
	int Throws, Throw = 0, Round = 0, Summ = 0;
	ifstream fin;
	ofstream fout;
	fin.open("INPUT.txt");
	fout.open("OUTPUT.txt");

	fin >> Throws;

	for (int i = 0; Throws > i; i++)
	{
		fin >> Scores[i];
	}
	for (int i = 0; Round < 10; i++)
	{
		Throw++;
		if (Scores[i] == 10 and Throw == 1)
		{
			Summ = Summ + Scores[i] + Scores[i + 1] + Scores[i + 2];
			Throw = 0;
			Round++;
			continue;
		}
		if ((Scores[i] + Scores[i - 1]) == 10 and Throw == 2)
		{
			Summ = Summ + Scores[i] + Scores[i + 1];
			Throw = 0;
			Round++;
			continue;
		}
		Summ += Scores[i];
		if (Throw == 2)
		{
			Throw = 0;
			Round++;
		}
	}
	fout << Summ;
	fin.close();
	fout.close();
}