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
	double sin_calc = degreemath::sin(45);
	std::cout << sin_calc << std::endl;
	double cos_calc = degreemath::cos(30);
	std::cout << cos_calc << std::endl;
	double tg_calc = degreemath::tg(60);
	std::cout << tg_calc << std::endl;
	double ctg_calc = degreemath::ctg(30);
	std::cout << ctg_calc << std::endl;
	double result = degreemath::sin(45.0);
	#else
	double cos_calc =cos(M_PI/4.0);
	std::cout << cos_calc << std::endl;
	#endif

}