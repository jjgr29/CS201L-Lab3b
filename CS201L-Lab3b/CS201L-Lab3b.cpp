// NAME:
// LAB SECTION:
// LECTURE SECTION:
// 
// CS201L-Lab3.cpp : This project will complete the Lab3 (2-D Vectors) 
//

#include "Matrix.h"

int main() {

    cout << "Welcome to My 2-D Vector Processor!\n";
	//create input file stream & name it, open the file
	ifstream inFile;
	inFile.open("dataValid.txt");

	//verify the input file is good - if not exit
	if (!inFile.good()) {
		cout << "Error opening input file!\n";
		return -1;
	}

	string inputStr1, inputStr2;
	vector<vector<int>> v1, v2;
	bool valid1 = false, valid2 = false;

	while (getline(inFile, inputStr1)) {
		if (getline(inFile, inputStr2)) {
			cout << "\n\nPROCESSING A SET OF MATRICES\n";
 
			cout << "\n\tPROCESSING FIRST MATRIX\n";
			//verify vector, if valid, printVector & processVector


			cout << "\n\tPROCESSING SECOND MATRIX\n";
			//verify vector, if valid, printVector & processVector

			cout << "\n\tPROCESSING BOTH MATRICES\n";
			//if both vectors are valid, 
			//   if sizes are correct addTwoMatrices
			//   if sizes are correct multTwoMatrices

		}
		inFile.close();

	}

 