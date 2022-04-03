#include <iostream>

struct point {
	int x, y;
};

class Slope {
	public:
		static double CalculateSlope(point a, point b) {
			return ( (double) (b.y - a.y) / (double) (b.x - a.x));
		}
};

int main() {
  
  //add code below this line
  point a;
  point b;
  a.x = 1;
  a.y = 2;
  b.x = 10;
  b.y = 20;
  std::cout << Slope::CalculateSlope(a,b) << std::endl;
  //add code above this line
  
  return 0;
  
}
