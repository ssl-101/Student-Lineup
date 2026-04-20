//this program will display
//a population bar chart.
#include <iostream>
#include <fstream>
using namespace std;

int main;
{
  string file;
  ifstream inFile;

  const perPeople = 1000;

 cout<< "Enter file name: "<<endl;
 cin >> file ;

  inFile.open(file);

  if (!inFile) {
    cout<< "Error opening file"<<endl;
      return 1;
  }

  cout<< "PEOPLE DISPLAY CHART "<< endl;
  cout<< "Every * displays 1000 people" <<endl;

  
}