#pragma once

#include <fstream>
#include <cmath>
#include <limits>
#include <memory>

using std::fabs;
using std::shared_ptr;
using std::make_shared;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double degrees_to_radians(double degrees) {
	return degrees * pi / 180.0;
}

inline double random_double() {
	// [0, 1)
	return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
	// [0, 1) * [min, max)
	return min + (max - min) * random_double();
}

#include "interval.h"
#include "ray.h"
#include "vec3.h"
#include "color.h"
#include "hittable.h"