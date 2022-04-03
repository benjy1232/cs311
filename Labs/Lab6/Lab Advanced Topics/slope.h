#ifndef SLOPE_H
#define SLOPE_H

//add definitions below this line
class Slope {
	public:
		static double CalculateSlope(point a, point b) {
			return ( (double) (b.y - a.y) / (double) (b.x - a.x));
		}
};
//add definitions above this line

#endif
