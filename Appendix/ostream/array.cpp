#include<iostream>

namespace array_0{

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

namespace array_1{

    template<typename data_type>
	struct array_3{

	    data_type data[3];

	    data_type& operator [](std::size_t i){

		return data[i];
	    }
	};

    template<typename array_3>
    std::ostream& operator << (std::ostream& os,array_3 array){

	return os << array[0] <<' '<< array[1] 
	    << ' ' << array[2] << "\n";
    }
}

int main(void){

    array_0::array_3 a = {1,2,3};
    std::cout << a;

    array_1::array_3<int> b = {2,4,6};
    std::cout << b;


    return 0;
}
