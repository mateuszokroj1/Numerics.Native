#include <intrin.h>
#include <mmintrin.h>
#include <xmmintrin.h>

#ifndef CORE_H
#define CORE_H

float __vectorcall sum(float, float);
double __vectorcall sum(double, double);
__m128 __vectorcall sum(__m128, __m128);
__m128d __vectorcall sum(__m128d, __m128d);
__m256 __vectorcall sum(__m256, __m256);
__m256d __vectorcall sum(__m256d, __m256d);

__m128 __vectorcall horizontal_sum(__m128, __m128);
__m128d __vectorcall horizontal_sum(__m128d, __m128d);
__m256 __vectorcall horizontal_sum(__m256, __m256);
__m256d __vectorcall horizontal_sum(__m256d, __m256d);

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