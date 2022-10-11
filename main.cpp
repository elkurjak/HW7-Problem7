#include <iostream>
using namespace std;
#include <cmath>
int main() {
//declare variables and arrays
int resistance[5] {16,27,39,56,81};
double current [5];
double power[5];
int resistTotal;
double currentTotal = 0;
double powerTotal = 0;
int n=5;
//user inputs / calculations
for (int i =0; i < 5; i++){
 cin>>current[i];
power[i]= resistance[i] * pow(current[i],2); 
}
resistTotal = 219;

for(int i = 0; i<n ; i++){
      currentTotal+=current[i];
   }
for(int j = 0; j<n ; j++){
     powerTotal+=power[j];
   }
//output
cout<< resistance[0] << " " << current[0] << " " << power [0] << endl;
cout<< resistance[1] << " " << current[1] << " " << power [1] << endl;
cout<< resistance[2] << " " << current[2] << " " << power [2] << endl;
cout<< resistance[3] << " " << current[3] << " " << power [3] << endl;
cout<< resistance[4] << " " << current[4] << " " << power [4] << endl;
cout<< resistTotal << " " << currentTotal << " " << powerTotal;
}