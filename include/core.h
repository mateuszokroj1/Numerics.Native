#include <intrin.h>
#include <mmintrin.h>
#include <xmmintrin.h>

#ifndef CORE_H
#define CORE_H

float add(float, float);
double add(double, double);
__m128 __vectorcall add(__m128, __m128);
__m128d __vectorcall add(__m128d, __m128d);
__m256 __vectorcall add(__m256, __m256);
__m256d __vectorcall add(__m256d, __m256d);

__m128 __vectorcall horizontal_add(__m128, __m128);
__m128d __vectorcall horizontal_add(__m128d, __m128d);
__m256 __vectorcall horizontal_add(__m256, __m256);
__m256d __vectorcall horizontal_add(__m256d, __m256d);

float __vectorcall mul(float, float);
double __vectorcall mul(double, double);
__m128 __vectorcall mul(__m128, __m128);
__m128d __vectorcall mul(__m128d, __m128d);
__m256 __vectorcall mul(__m256, __m256);
__m256d __vectorcall mul(__m256d, __m256d);

float __vectorcall div(float, float);
double __vectorcall div(double, double);
__m128 __vectorcall div(__m128, __m128);
__m128d __vectorcall div(__m128d, __m128d);
__m256 __vectorcall div(__m256, __m256);
__m256d __vectorcall div(__m256d, __m256d);

#endif