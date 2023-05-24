#include "empty_class.hpp"


namespace ProjectLibrary
{
}


#include <iostream>
#include "Eigen/Eigen"
#include <fstream>

using namespace std;

void import0D(const string& inputFilePath1, size_t& n1, unsigned int& v1, unsigned int& v2, unsigned int& v3, unsigned int& v4){
    ifstream file1(inputFilePath1);
    string line1;

    while (getline(file1,line1)){
        vector<vecto<int>> matrix1;
        vector<int> row1;
        isrtringstream ss1(line1);
        string cell1;

        while(getline(ss1, cell1,' ')){
            int value1 = stoi(cell1);
            row1.push_back(value1);
        }

        matrix1.push_back(row1)
    }

    for (const int& n1 : matrix1){
        v1.push_back(row1[0]);
        v2.push_back(row1[1]);
        v3.push_back(row1[2]);
        v4.push_back(row1[3]);
    }

}

void import1D(const string& inputFilePath2, size_t& n2, unsigned int& c1, unsigned int& c2, unsigned int& c3, unsigned int& c4){
    ifstream file2(inputFilePath2);
    string line2;

    while (getline(file2,line2)){
        vector<vecto<int>> matrix2;
        vector<int> row2;
        isrtringstream ss2(line2);
        string cell2;

        while(getline(ss2, cell2,' ')){
            int value2 = stoi(cell2);
            row2.push_back(value2);
        }

        matrix2.push_back(row2)
    }

    for (const int& n2 : matrix2){
        c1.push_back(row[0]);
        c2.push_back(row[1]);
        c3.push_back(row[2]);
        c4.push_back(row[3]);
    }

}

void import2D(const string& inputFilePath3, size_t& n3, unsigned int& g1, unsigned int& g2, unsigned int& g3, unsigned int& g4, unsigned int& g5, unsigned int& g6){
    ifstream file3(inputFilePath3);
    string line3;

    while (getline(file3,line3)){
        vector<vecto<int>> matrix3;
        vector<int> row3;
        isrtringstream ss3(line3);
        string cell3;

        while(getline(ss3, cell3,' ')){
            int value3 = stoi(cell3);
            row3.push_back(value3);
        }

        matrix3.push_back(row3)
    }

    for (const int& n3 : matrix3){
        c1.push_back(row[0]);
        c2.push_back(row[1]);
        c3.push_back(row[2]);
        c4.push_back(row[3]);
        c5.push_back(row[4]);
        c6.push_back(row[5]);
    }

}
