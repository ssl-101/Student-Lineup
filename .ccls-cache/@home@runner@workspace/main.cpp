// Size Prediction
// This program will predict the size of a population of organisms.
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    int days;
    double startSize, dailyIncrease;

    cout << "Enter the starting population of organisms: ";
    cin >> startSize;
    while (startSize < 2) {
       cout<< "Error: starting population must be at least 2. Enter again: ";
       cin>> startSize;
     }
    cout<< "Enter the daily increase: ";
    cin>> dailyIncrease;
    while (dailyIncrease < 0) {
        cout<< "Error: number can not be less than 0. Enter again: ";
        cin>> dailyIncrease;
     }
     cout<< "Enter the number of days to be multiplied: ";
     cin>> days;
     
     while (days <1){
        cout<<"Error: number of days must be at least 1. Enter again: ";
        cin>> days;
     }
     double rate = dailyIncrease / 100.0;

      cout<< "Day         Population"<< endl;
      cout<< "........................."<< endl;
     for (int i =1; i <= days; i++){
        cout << i <<"       "<< fixed << setprecision(2) << startSize <<endl;
        startSize += (startSize * rate);
      }
      return 0;
}
