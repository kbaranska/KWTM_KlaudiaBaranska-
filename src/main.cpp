#define _USE_MATH_DEFINES
#include <iostream>
#include <LaborkaConfig.h>

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <cmath>
#endif

int main() {


	#ifdef USE_TRIGONOMETRY_DEGREE
	double sin_calc = degreemath::sin(45.0);
	std::cout << sin_calc << std::endl;
	double cos_calc = degreemath::cos(30.0);
	std::cout << cos_calc << std::endl;
	double tg_calc = degreemath::tg(60.0);
	std::cout << tg_calc << std::endl;
	double ctg_calc = degreemath::ctg(30.0);
	std::cout << ctg_calc << std::endl;
	double result = degreemath::sin(45.0);
	#else
	double sin_calc =sin(M_PI / 4.0);
	std::cout << sin_calc << std::endl;
	double cos_calc =cos(M_PI/6.0);
	std::cout << cos_calc << std::endl;
	double tg_calc = tan(M_PI/3.0);
	std::cout << tg_calc << std::endl;
	double ctg_calc = 1/tan(M_PI / 4.0);
	std::cout << ctg_calc << std::endl;
	#endif

}