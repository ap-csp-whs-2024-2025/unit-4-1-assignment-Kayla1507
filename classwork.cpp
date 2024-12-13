#include <iostream>
#include <string>

int main()
{
  int x = 25;
  int y = 3;
  int add_xy;
  int sub_xy;
  int mult_xy;
  int div_xy;
  int mod_xy;
  
  add_xy = x + y;
  sub_xy = x - y; 
  mult_xy = x*y; 
  div_xy = x/y;
  mod_xy = x % y;
  std::cout << "x+y= " << add_xy << std::endl
            << "x-y= " << sub_xy << std::endl
            << "x*y= " << mult_xy << std::endl
            << "x/y= " << div_xy << std::endl
            << "x % y= " << mod_xy << std::endl;

  int z= 10;
  bool xGreaterz = x > z;
  bool yLessx = y < x;
  std::cout << "x > z is " << xGreaterz << "\n";
  std::cout << "y < x is " << yLessx << "\n";

// ex 2
  bool isSunny = true;
  bool hasUmbrella = false;

  //you can plug in (isSunny && hasUmbrella) into the code or..
  std::cout << "Is it both sunny and you have an umbrella? "
            << (isSunny && hasUmbrella) << std::endl;

  //you can create a varaible to store the boolean 'sun_or_umb', then plug into code
  bool sun_or_umb = isSunny || hasUmbrella; 
  std::cout << "Is it either sunny or you have an umbrella? "
            << sun_or_umb << "\n";

  // this makes it so that it is not sunny
  std::cout << "Is it sunny? " << (!isSunny) << std::endl;

  std::cout << "Is it not sunny and you don't have an umbrella? " << (!isSunny && !hasUmbrella) << std::endl;

  //Exercise 3

  return 0;
}

