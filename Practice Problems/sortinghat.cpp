#include <iostream>

int main() {
  // storing the counters
  int gryff = 0, huff = 0, raven = 0, slyth = 0;
  // storing answers from user.
  int ans1, ans2, ans3, ans4;

  std::cout << "The Sorting Hat Quiz!\n";
  // first question
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n 1) The "
               "Good\n 2) the Great \n 3) The Wise\n 4) The Bold \n";
  std::cin >> ans1;
  // logic: if the answer does not fall within the limitations, it does not
  // continue
  while (ans1 >= 5 || ans1 == 0) {
    std::cout << "Invalid Input, please enter again:";
    std::cin >> ans1;
  }
  switch (ans1) {
    case 1:
      ++huff;
    case 2:
      ++slyth;
    case 3:
      ++raven;
    case 4:
      ++gryff;
  }

  // q2
  std::cout << "Q2) Dawn or Dusk?\n 1) Dawn \n 2) Dusk\n";
  std::cin >> ans2;

  while (ans2 < 0 && ans2 > 3) {
    std::cout << " Invalid Input\n";
    std::cin >> ans2;
  }
  switch (ans2) {
    case 1:
      ++gryff;

    case 2:
      ++huff;
  }

  // q3 - instrument
  std::cout << "Q3) Which Kind of Instrument most pleases your ear?\n 1) te "
               "violin\n 2) The trumpet\n 3) The piano\n 4) The drum\n";
  std::cin >> ans3;

  while (ans3 == 0 || ans3 > 4) {
    std::cout << " Invalid Input\n";
    std::cin >> ans3;
  }
  switch (ans3) {
    case 2:
      ++huff;

    case 1:
      ++slyth;

    case 3:
      ++raven;

    case 4:
      ++gryff;
  }

std::cout << "Q4) Which road tempts you the most?\n 1) The wide, sunny grassy lane\n 2) The narrow, dark, lantern-lit alley\n 3) The twisting, leave-strewn path through woods\n 4)The cobbled street lined (ancient buildings)\n";
  std::cin >> ans3;

  while (ans3 == 0 || ans3 > 4) {
    std::cout << " Invalid Input\n";
    std::cin >> ans3;
  }
  switch (ans3) {
    case 1:
      ++huff;

    case 2:
      ++slyth;

    case 4:
      ++raven;

    case 3:
      ++gryff;
  }

  std::string house; 
  int max; 
  
if (gryff > max) {
  
  max = gryff;
  house = "Gryffindor";
  
}

if (huff > max) {

  max = huff;
  house = "Hufflepuff";
  
}

if (raven > max) {
  
  max = raven;
  house = "Ravenclaw";
  
}

if (slyth > max) {
  
  max = slyth;
  house = "Slytherin";
  
}

std::cout << house << "!\n";
  return 0;
}
