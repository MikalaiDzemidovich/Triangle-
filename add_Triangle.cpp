#include "head_Triangle.hpp"

/*\\\\\\\\\\\\\\*Function for Side of Main Triangle*\\\\\\\\\\\\\\\\\\*/	
		float Other_LineLength(float x1, float y1, float x2, float y2){
			float L = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
							return L;}
/*\\\\\\\\\\\\\\\\*Function for Triangle Square*\\\\\\\\\\\\\\\\\\\\\\*/
		float Triangle_Square(float l1, float l2, float l3){
			float p = (l1+l2+l3)/2;
			float s = sqrt(p*(p-l1)*(p-l2)*(p-l3));
			return s;
		}	
/*\\\\\\\\\\\\\\\\*Function for count*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
		bool is_in(Triangle A, float D_x, float D_y){
			float AD = Other_LineLength(D_x,D_y,A.GetA_X(),A.GetA_Y());
			float BD = Other_LineLength(D_x,D_y,A.GetB_X(),A.GetB_Y());
			float CD = Other_LineLength(D_x,D_y,A.GetC_X(),A.GetC_Y());
			float Sq_ABD = Triangle_Square(A.AB_(),AD,BD);
			float Sq_BCD = Triangle_Square(A.BC_(),BD,CD);
			float Sq_ACD = Triangle_Square(A.AC_(),AD,CD);
			float a = A.Main_Triangle_Square();
			float b = Sq_ABD+Sq_BCD+Sq_ACD;
			float c;
			if (a>=b)
				c = a-b;
			else
				c = b-a;
			if (c<=0.5){//pogreshnost
				std::cout<<"Yes, Triangle include Point D";
				std::cout<<"{"<<D_x<<","<<D_y<<"}"<<std::endl;
				std::cout<<"Squares of Trianglies are:  "<<std::endl;
				std::cout<<"Main Triangle : "<<a<<std::endl;
				std::cout<<"Sum of another Triangles : "<<b<<std::endl;
				return true;
			}
			else{
				std::cout<<"No, Triangle ABC doesn't include Point D";
				std::cout<<"{"<<D_x<<","<<D_y<<"}"<<std::endl;
				std::cout<<"Squares of Trianglies are:  "<<std::endl;
				std::cout<<"Main Triangle : "<<a<<std::endl;
				std::cout<<"Sum of another Triangles : "<<b<<std::endl;
				std::cout<<"No"<<a;
				std::cout<<b<<std::endl;
				return false;
			}
		}
