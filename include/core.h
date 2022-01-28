#include <intrin.h>
	#include <x86intrin.h>
#endif

#ifndef CORE_H
#define CORE_H

extern "C"
{
	float add(float, float);
	double add(double, double);
	__m128 add(__m128, __m128);
	__m128d add(__m128d, __m128d);
	__m256 add(__m256, __m256);
	__m256d add(__m256d, __m256d);

	__m128 horizontal_add(__m128, __m128);
	__m128d horizontal_add(__m128d, __m128d);
	__m256 horizontal_add(__m256, __m256);
	__m256d horizontal_add(__m256d, __m256d);

	float multiply(float, float);
	double multiply(double, double);
	__m128 multiply(__m128, __m128);
	__m128d multiply(__m128d, __m128d);
	__m256 multiply(__m256, __m256);
	__m256d multiply(__m256d, __m256d);

	float divide(float, float);
	double divide(double, double);
	__m128 divide(__m128, __m128);
	__m128d divide(__m128d, __m128d);
	__m256 divide(__m256, __m256);
	__m256d divide(__m256d, __m256d);
}

#endif