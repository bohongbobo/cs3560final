// File: TaskB.cc
/**
*@file TaskB.cc
*@brief This is a program that count the how many lines and characters that is in the file
*@author Bohong Li
*@date 2017/12/12
*/
#include<iostream>
#include<string>
#include<fstream>


using namespace std;

int countLine(char *pName);
int countChar(char *pName);
/**
* @brief count the number of lines and characters
* 
* @see countLine()
* @see countChar()
* 
*/
int main(int argc, char* argv[])
{
	char *pName;
    ifstream fin(argv[1]);
    if (!fin) {
        cout << "Can't open file - " << argv[1] 
            << "\nUseage : countch filename" << endl;
        }
	countChar(pName);



	return 0;
}

/**
* @brief count number of characters
*
* @param pName
* @return number of characters
*/
int countChar(char *pName){
    string d;
    int count = 0;
    while (getline(cin, d))
        count += d.size(); 
    
    cout << "\n Number of characters : "<< count << endl;

	return count;
}

/**
* @brief count number of lines
*
* @param pName
* @return number of lines
*/
int countLine(char *pName){


} 