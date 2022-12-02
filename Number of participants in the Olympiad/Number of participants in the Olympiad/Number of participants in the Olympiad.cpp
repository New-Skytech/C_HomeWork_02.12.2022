#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int K, N, M, D, koeficent, x;
    fin >> K >> N >> M >> D;
    D = K * N * M * D;
    x = K * N * M - K * N - N * M - K * M;
    koeficent = D / x;
    if (round(koeficent) == koeficent and koeficent > 0)
    {
        fout << koeficent;
    }
    else
    {
        fout << -1;
    }
    fin.close();
    fout.close();
}
