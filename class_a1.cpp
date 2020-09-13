// You should define Pair here:
// (Use as many lines as you need!)

#include "iostream"

 class Pair {

 	// variables
  public :  
 	 int a;
 	 int b;

 	// function

 	 int sum(){ 

 		int sum = a+b;
 		return sum;
 	 }
};

int main() {
  Pair p;
  p.a = 100;
  p.b = 200;
  if (p.a + p.b == p.sum()) {
    std::cout << "Success!" << std::endl;
  } else {
    std::cout << "p.sum() returns " << p.sum() << " instead of " << (p.a + p.b) << std::endl;
  }
  return 0;
}