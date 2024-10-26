#include <iostream>
#include <cstdlib>

using namespace std; 

/*A magic8ball randomizer.*/
int main()
{
cout << "MAGIC 8-BALL: \n";
srand(time(NULL));
int answer = rand()%10; 

if(answer == 0)
{
cout <<"It is certain \n";
}
else if(answer == 1)
{
cout <<"Absolutely Possible \n";
}
else if(answer == 2)
{
  cout <<"Don't even try \n";
}
else if(answer == 3)
{
  cout <<"The answer is not available \n";
}
else if(answer == 4)
{
  cout <<"According to all known laws of aviation,there is no way a bee should be able to fly. It's wings are too small to get its fat little body off the ground. thee, of course, flies anyway because bees don't care what humans think is impossible....\n";
}
else if(answer == 5)
{
  cout <<"try again later \n";
}
else if(answer == 6)
{
  cout << "If you turn around in several circles and dance, the possibility is there. \n"; 
}
else if(answer == 8)
{
  cout << "please stop asking that particvular question \n";
}
else if(answer == 9)
{
  cout << "Don't count on it\n"; 
}
else
{
cout << "Very doubtful. \n";
}
}
