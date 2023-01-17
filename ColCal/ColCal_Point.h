#ifndef COLCAL_POINT_H
#define COLCAL_POINT_H

#include "ColCal.h"

class ColCal_Point {
public:
	ColCal_Point();
	ColCal_Point(float X, float Y, float Z);
	ColCal_Point(const ColCal_Point& point);
	ColCal_Point& operator=(const ColCal_Point& point);

	float x, y, z;
};

#endif // !POINT_H