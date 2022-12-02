#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int n{};
    int m{};

    fin >> m >> n;

    bool girl = true;
    bool girl2 = false;
    bool boy = false;

    while (n || m)
    {
        if (girl)
        {
            if (n)
            {
                std::cout << 'G';
                --n;
            }
            girl = false;
            girl2 = true;
        }
        if (girl2)
        {
            if (n)
            {
                std::cout << 'G';
                --n;
            }
            girl2 = false;
            boy = true;
        }
        if (boy)
        {
            if (m)
            {
                std::cout << 'B';
                --m;
            }
            girl = true;
            boy = false;
        }
    }
}