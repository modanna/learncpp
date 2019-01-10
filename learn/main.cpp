#include <iostream>
#include "learn.h"

int main(int argc, char *argv[]){
  int x1 = 10;
  int x2 = 20;
   std::cout << "Hello World!" << add(x1, x2) << std::endl;

   printSize();
   printInfNan();
   
   return 0;
}
