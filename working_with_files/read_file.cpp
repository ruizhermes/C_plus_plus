#include <iostream>
#include <fstream>

using namespace std;


int main (){

    string inFileName = "test.txt";

    ifstream inFile;

    inFile.open(inFileName);

    if(inFile.is_open()){

        string line;

        while(!inFile.eof()){
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
    }
    else{
        cout << "could not open file: " << inFileName << endl;
    }

    return 0;
}