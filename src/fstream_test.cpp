#include <fstream>

// Can be removed after debugging
//
int main() {
   std::ifstream is("bla.txt");
   int a;
   is >> a;
   return a;
}