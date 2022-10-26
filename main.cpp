#include <iostream>
#include "warehouse.hpp"
#include <stream>

// > onlineshop -i ./lagerdatei.txt

int main(int argc, char** argv) {
  warehouse_t onlineshop{}; //hier wird ein Onlineshop erstellt aus einer Lagerdatei
  
  onlineshop.run();
}