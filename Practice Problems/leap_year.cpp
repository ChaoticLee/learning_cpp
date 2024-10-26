#include <iostream>
using namespace std; 

/*This is a practice of making a conditional loop to see if a given year is a leap year. It wants a year that is larger than 1000, and then checks to see if the year is 
modulo 4, and 100, or can be modulo 400, to be consider a leap year. If not, it will continue to prompt the user to enter a year until a leap year is found.*/
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
