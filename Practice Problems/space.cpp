#include <iostream>
using namespace std;

int main() {
  int weight;
  int choice;
  int new_weight; 
  cout << "Enter Earth Weight:\n"; 
  cin >> weight; 

  cout<<"What planet do you want to fight on?: \n" <<"1.Mercury\n"<<"2.Venus\n"<<"3.Mars\n"<<"4.Jupiter\n"<<"5.Saturn\n"<<"6.Uranus \n"<<"7.Neptune \n";
  cin >> choice; 
  
  switch (choice)
  {
    case 1:
      new_weight = weight*0.38;
    case 2:
    new_weight = weight*0.91;
    case 3:
    new_weight = weight*0.38;
    case 4:
    new_weight = weight*2.34;
    case 5:
    new_weight = weight*1.06;
    case 6:
    new_weight = weight*0.92;
    case 7:
    new_weight = weight*1.19;
  }
  cout << new_weight; 
  

  
  
}
