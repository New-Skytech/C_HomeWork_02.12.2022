#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    int circle[500], step, count, count2, progres = 0;
    
    fin >> count >> step;
    for (int i = 0; i < 500; i++)
    {
        circle[i] = 0;
    }
    for (int i = 0; i < count; i++)
    {
        circle[i] = 1;
    }
    count2 = count;

    int i = 0;
    while(true)
    {
        if (circle[i] == 1)
        {
            progres++;
        }
        if (progres == step and circle[i] == 1)
        {
            circle[i] = 0;
            progres = 0;
            count--;
            cout << i + 1 << " ";
        }
        if (count == 1)
        {
            break;
        }
        i++;
        if (i == count2)
        {
            i = 0;
        }
    }
    for (int i = 0; i < 500; i++)
    {
        if (circle[i] == 1)
        {
            fout << i + 1;
        }
    }
    fout.close();
    fin.close();
}
