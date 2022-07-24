#ifndef COLOR_H
#define COLOR_H

#include <vec3.h>
#include<iostream>

void write_color(std::ostream &out, color pixcel_color){

    // write the tanslated [0,255] value of each color component
    out << static_cast<int>(255.999 * pixcel_color.x()) << ' '
        << static_cast<int>(255.999 * pixcel_color.y()) << ' '
        << static_cast<int>(255.999 * pixcel_color.z()) << '\n'; 

}


#endif
