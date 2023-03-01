// 2.28 LAB: Expression for calories burned during workout
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int age;
   int weight;
   int heart;
   int time;

   cin >> age >> weight >> heart >> time;
   
   double calW =  ((age * 0.074) - (weight * 0.05741) + (heart * 0.4472) - 20.4022) * time / 4.184;
   double calM =  (((age * 0.2017) + (weight * 0.09036) + (heart * 0.6309)) - 55.0969) * time / 4.184;
   
   cout << fixed << setprecision(2); 
   cout << "Women: " << calW << " calories" << endl;
   cout << "Men: " << calM << " calories" << endl;

   return 0;
}
