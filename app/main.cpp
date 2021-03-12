
#include <iostream>
#include <stdlib.h>

char toLowerCase(char input)
{
  if (input <= 90 && input >= 65)
    input += 32;
  else
    input = 0;
  return input;
}

int main()
{
  for (char i = 65; i <= 90; i++) {
    std::cout << toLowerCase(i) << ' ';
  }
  std::cout << '\n';

  return 0;
}
