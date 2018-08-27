#include <iostream>
#include <math.h>
#include "head_Triangle.hpp"

int main(){
	Triangle ABC(1,1,3,3,4,2);
	ABC.show();
	bool c = is_in(ABC,3,2);
	std::cout<<"Result of operation is  : "<<c;
	return 0;
}
