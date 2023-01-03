#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>


using namespace std;

int main()
{
    float sum = 0, mean, SD, x;
    int count = 0;
    string textline;
    ifstream source;
    source.open("score.txt");

    while (getline(source, textline))
    {
        sum += stof(textline);
        x += pow(stof(textline), 2);
        count++;
    }
    mean = sum / count;
    SD = sqrt((x / count) - (mean * mean));

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD << "\n";

    source.close();
    return 0;
}