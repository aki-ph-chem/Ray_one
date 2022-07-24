#ifndef RAY_H
#define RAY_H

#include<vec3.h>

class ray{
    public:

	ray(void) {}

	ray(const point3& origin, const vec3& direction)
	    : orig(origin),dir(direction)
	{}

	point3 origin(void) const {

	    return orig;
	}

	vec3 direction(void) const{

	    return dir;
	}

	point3 at(double t) const{

	    return orig + t*dir;
	}

    public:

	point3 orig;
	vec3   dir ;
};


#endif
