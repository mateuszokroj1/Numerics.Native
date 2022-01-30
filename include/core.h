#include <intrin.h>
#include "Numerics_Native_Export.h"

#ifndef CORE_H
#define CORE_H

namespace Numerics
{
	NUMERICS_NATIVE_EXPORT float add(float, float);
	NUMERICS_NATIVE_EXPORT double add(double, double);
	NUMERICS_NATIVE_EXPORT __m128 add(__m128, __m128);
	NUMERICS_NATIVE_EXPORT __m128d add(__m128d, __m128d);
	NUMERICS_NATIVE_EXPORT __m256 add(__m256, __m256);
	NUMERICS_NATIVE_EXPORT __m256d add(__m256d, __m256d);

	NUMERICS_NATIVE_EXPORT __m128 horizontal_add(__m128, __m128);
	NUMERICS_NATIVE_EXPORT __m128d horizontal_add(__m128d, __m128d);
	NUMERICS_NATIVE_EXPORT __m256 horizontal_add(__m256, __m256);
	NUMERICS_NATIVE_EXPORT __m256d horizontal_add(__m256d, __m256d);

	NUMERICS_NATIVE_EXPORT float multiply(float, float);
	NUMERICS_NATIVE_EXPORT double multiply(double, double);
	NUMERICS_NATIVE_EXPORT __m128 multiply(__m128, __m128);
	NUMERICS_NATIVE_EXPORT __m128d multiply(__m128d, __m128d);
	NUMERICS_NATIVE_EXPORT __m256 multiply(__m256, __m256);
	NUMERICS_NATIVE_EXPORT __m256d multiply(__m256d, __m256d);

	NUMERICS_NATIVE_EXPORT float divide(float, float);
	NUMERICS_NATIVE_EXPORT double divide(double, double);
	NUMERICS_NATIVE_EXPORT __m128 divide(__m128, __m128);
	NUMERICS_NATIVE_EXPORT __m128d divide(__m128d, __m128d);
	NUMERICS_NATIVE_EXPORT __m256 divide(__m256, __m256);
	NUMERICS_NATIVE_EXPORT __m256d divide(__m256d, __m256d);
}

#endif