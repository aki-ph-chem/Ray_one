#include<iostream>

namespace array_3{

    struct array_3{

	int data[3];

	int& operator[](std::size_t i){

	    return data[i];
	}
    };

    std::ostream& operator << (std::ostream& os,array_3 array){

	return os << array[0] << ' ' << array[1] 
	    << ' ' << array[2] << "\n";
    }

}

int main(void){

    array_3::array_3 a = {1,2,3};

    std::cout << a;


    return 0;
}
