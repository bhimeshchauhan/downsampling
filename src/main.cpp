#include <iostream>

int main(int argc, const char * argv[]) 
{
   char name[50];
 
   std::cout << "Please enter your name: ";
   std::cin >> name;
   std::cout << "Your name is: " << name << std::endl;
}