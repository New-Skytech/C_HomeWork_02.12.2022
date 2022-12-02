#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int summ = 0, layers, angles;
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    fin >> angles >> layers;

    for (int level = 1; level <= layers; level++)
    {
        if (level == 1)
        {
            summ += angles;
            continue;
        }
        summ += level * angles - (3 + 2 * (level - 2));
    }
    fout << summ;
    fin.close();
    fout.close();
}
