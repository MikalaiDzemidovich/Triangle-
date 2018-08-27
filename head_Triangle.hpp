#ifndef HEAD_TRIANGLE_HPP
#define HEAD_TRIANGLE_HPP
#include <math.h>
#include <iostream>

class Triangle{
	private:
		int A_x, A_y;
		int B_x, B_y;
		int C_x, C_y;
	public:
/*\\\\\\\\\\\\\\\*Simple Constructor and Destructor*\\\\\\\\\\\\\\\\\\*/
		Triangle(){}
		~Triangle(){}
/*\\\\\\\\\\\\*Constructor of Triangle, set coordinates*\\\\\\\\\\\\\\*/
		Triangle(int A_x, int A_y, int B_x, int B_y, int C_x, int C_y){
			this->A_x = A_x; this->A_y = A_y;
			this->B_x = B_x; this->B_y = B_y;
			this->C_x = C_x; this->C_y = C_y;
		}
/*\\\\\\\\\\\\*Metod Get of Triangle's coordinates*\\\\\\\\\\\\\\\\\\\*/
		int GetA_X(){return A_x;}	int GetA_Y(){return A_y;}
		int GetB_X(){return B_x;}	int GetB_Y(){return B_y;}
		int GetC_X(){return C_x;}	int GetC_Y(){return C_y;}
/*\\\\\\\\\\\\\\\\\\\*Show Metod of Triangle*\\\\\\\\\\\\\\\\\\\\\\\\\*/
		void show(){
			std::cout<<"Point A{"<<A_x<<","<<A_y<<"};"<<std::endl;
			std::cout<<"Point B{"<<B_x<<","<<B_y<<"};"<<std::endl;
			std::cout<<"Point C{"<<C_x<<","<<C_y<<"};"<<std::endl;
		}
/*\\\\\\\\\\\\\*Metod for Side of Main Triangle*\\\\\\\\\\\\\\\\\\\\\\*/
		float AB_/*LineLength*/(){
			float AB = sqrt(pow((GetA_X()-GetB_X()),2)+
							pow((GetA_Y()-GetB_Y()),2));
							return AB;}
		float AC_/*LineLength*/(){
			float AC = sqrt(pow((GetA_X()-GetC_X()),2)+
							pow((GetA_Y()-GetC_Y()),2));
							return AC;}
		float BC_/*LineLength*/(){
			float BC = sqrt(pow((GetB_X()-GetC_X()),2)+
							pow((GetB_Y()-GetC_Y()),2));
							return BC;}
/*\\\\\\\\\\\\\\\\\\\*Metod for Triangle Square*\\\\\\\\\\\\\\\\\\\\\\*/
		float Main_Triangle_Square(){
			float/*MainPerimetr*/p= (AB_()+AC_()+BC_())/2;
			float/*MainSquare*/s= sqrt(p*(p-AB_())*(p-AC_())*(p-BC_()));
			return s;
		}
	};
/*\\\\\\\\\\\\\\*Function for Side of Main Triangle*\\\\\\\\\\\\\\\\\\*/
float Other_LineLength(float x1, float y1, float x2, float y2);
/*\\\\\\\\\\\\\\\\*Function for Triangle Square*\\\\\\\\\\\\\\\\\\\\\\*/
float Triangle_Square(float l1, float l2, float l3);
/*\\\\\\\\\\\\\\\\\\\*Function for count*\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/
bool is_in(Triangle A, float D_x, float D_y);


#endif
