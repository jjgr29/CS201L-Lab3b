#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

//add function declarations below along with PRE- and POST- conditions for each
bool verifyVector(vector<vector<int>> vec1);
void processVector(vector<vector<int>> vec1);
void addTwoMatrices(vector<vector<int>> vec1, vector<vector<int>> vec2);
void multiplyTwoMatrices(vector<vector<int>> vec1, vector<vector<int>> vec2);
void printVector(vector<vector<int>> vec1);