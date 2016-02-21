#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream inputFile;

    inputFile.open(argv[1]);

    string line;

    while(getline(inputFile,line))
    {
        stringstream lineStream(line);
        vector<string> data;
        string temp;

        while(getline(lineStream,temp,','))
        {
            data.push_back(temp);
        }

        //cout << data[0] << "," << data[1] << endl; 

        stringstream nStream(data[0]);
        int n;

        nStream >> n;

        stringstream mStream(data[1]);
        int m; 

        mStream >> m;

        //cout << "N: " << n << " ,M: " << m << endl;

        int divResult;

        divResult = n / m;

        //cout << divResult << endl;

        int mult = divResult * m;
        int modulus = n - mult;

        cout  << modulus << endl;
    } 

    return 0;
}
