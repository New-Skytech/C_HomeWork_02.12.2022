#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

int main() {
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");

    int n, m, k;
    fin >> n >> m >> k;
    vector <string> l(n), l1(n);
    for (int z = 0; z < n; z++) { 
        fin >> l[z];
        l1[z] = l[z]; 
    }
    for (int t = 0; t < k; t++) {
        for (int z = 0; z < n; z++)
            for (int x = 0; x < m; x++) {
                int s = 0; 
                s += l[(z + n - 1) % n][(x + m - 1) % m] == '*';
                s += l[(z + n - 1) % n][x] == '*';
                s += l[(z + n - 1) % n][(x + m + 1) % m] == '*';
                s += l[z][(x + m - 1) % m] == '*';
                s += l[z][(x + m + 1) % m] == '*';
                s += l[(z + n + 1) % n][(x + m - 1) % m] == '*';
                s += l[(z + n + 1) % n][x] == '*';
                s += l[(z + n + 1) % n][(x + m + 1) % m] == '*';
                if (s < 2 || s>3) l1[z][x] = '.'; 
                if (s == 3) l1[z][x] = '*'; 
            }
        for (int z = 0; z < n; z++) l[z] = l1[z]; 
    }
    for (int z = 0; z < n; z++) fout << l[z] << endl; 

    return 0;
}