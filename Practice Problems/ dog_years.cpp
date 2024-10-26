#include <iostream>
using namespace std; 

int main() {
  
int dog_age, age; 
cout <<"Enter your dog's age in human years: ";
cin >> age; 
if(age < 2)
{
  if(age == 1)
  {
    dog_age = 10.5; 
  }
  else{
    dog_age = 21;   
  }
}
else
{
  dog_age = 21 + ((age - 2)*4); 
}
cout <<"Your dog's age is: " << dog_age << ".\n"; 
  
  return 0; 
}
