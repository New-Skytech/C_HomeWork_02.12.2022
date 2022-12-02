#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("INPUT.txt");
    ofstream fout;
    fout.open("OUTPUT.txt");
    double fences[101], max = 0, P, a, b, c;
    int count, answer[3];
    fin >> count;
    
    
    for (int i = 0; i < 101; i++)
    {
        fences[i] = 0;
    }
    for (int i = 0; i < count; i++)
    {
        fin >> fences[i];
    }

    for (int a_ind = 0; a_ind < 99; a_ind++) {
        for (int b_ind = 1; b_ind < 100; b_ind++) {
            if (a_ind == b_ind)
            {
                continue;
            }
            for (int c_ind = 2; c_ind < 101; c_ind++)
            {
                if (a_ind == c_ind or b_ind == c_ind)
                {
                    continue;
                }
                a = fences[a_ind];
                b = fences[b_ind];
                c = fences[c_ind];
                if (a > 0 and b > 0 and c > 0) {
                    if (a < b + c and b < a + c and c < a + b)
                    {
                        P = (a + b + c) / 2.0;
                        if (P * (P - a) * (P - b) * (P - c) > max)
                        {
                            max = (P * (P - a) * (P - b) * (P - c));
                            answer[0] = a_ind;
                            answer[1] = b_ind;
                            answer[2] = c_ind;
                        }
                    }
                }
            }
        }
    }
    if (max > 0)
    {
        fout << sqrt(max) << endl;
        fout << answer[0] << " " << answer[1] << " " << answer[2];
    }
    else
    {
        fout << "-1";
    }
    fout.close();
    fin.close();
}
