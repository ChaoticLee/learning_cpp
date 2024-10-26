#include <iostream>

int main() {
  float pesos,reais, soles, dollars; 
  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos; 
  std::cout<<"Enter number of Brazilian Reis: \n"; 
  std::cin >> reais; 
  std::cout << "Enter number of Peruvian Soles: \n"; 
  std::cin >> soles; 
  
dollars = (0.05*pesos)+(0.18*reais)+(0.27*soles); 

std::cout << "US Dollars = $"<<dollars<<".\n";

return 0; 
}
