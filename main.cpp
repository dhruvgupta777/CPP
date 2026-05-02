
#include<bits/stdc++.h>
using namespace std;

int main() {

     double wind_speed ;

 double temprature ;

 bool wear_coat;

 const double wind_speed_for_coat = 28;  // over this coat is required 
 const double temprature_for_coat= 45; // over this temprature coat is required 

 cout << boolalpha;

 cout << "enter the temprature(in degree celsius) " << endl;

 cin >> temprature;

 cout << "enter the wind speed (in mph) " << endl;

 cin >> wind_speed;

 wear_coat = ( temprature >= 45 && wind_speed >= 28) ;

 cout << " DO YOU REALLY NEED TO WEAR A COAT " << wear_coat << endl;

 wear_coat = (temprature >= 45 || wind_speed >= 28) ;

 cout << " IN THIS CONDITIION YOU REALLY NEED TO WEAR A COAT " << wear_coat << endl;



    return 0;
}