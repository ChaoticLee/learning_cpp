#include <iostream>
using namespace std; 

int main() {
  
  int year; 
  cin >> year; 

do{
 cin >> year;
}
  while(year < 999);
  
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
 {
  std::cout << "Leap year";
}

}
