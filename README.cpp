#include <Stdio.h>
#include <iostream>
using namespace std;

int main ()
{
  int guess = 0, value = 4;
  cout << "Please guess a number between 1 and 4\n";
  cin >> guess;

 if (guess >= 0 || guess <= 4)
 {
    cout << "congradulations, you actually guessed within the range!\n";

    if (guess == value)
    {
      cout << "you actuallly are correct??!!\n";
    }
    else
    {
      cout << "WRONG!\n";
    }
  }
  else 
  {
    cout << "PLEASE GUESS WITHIN THE RANGE!!!\n";
    cin.get();
    main();
  }
}
