#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");

    int R, r, b, h, distance;
    fin >> R >> r >> h >> b;

    h = h - b + r;
    distance = sqrt(pow(r, 2) + pow(h, 2));
    if (distance <= R)
    {
        fout << "YES";
    }
    else
    {
        fout << "NO";
    }



}
