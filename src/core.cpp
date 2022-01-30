#include "core.h"

namespace Numerics
{
	NUMERICS_NATIVE_EXPORT float add(float a, float b)
	{
		__m128 xmm0, xmm1;
		xmm0.m128_f32[0] = a;
		xmm1.m128_f32[0] = b;
		return _mm_add_ss(xmm0, xmm1).m128_f32[0];
	}

	NUMERICS_NATIVE_EXPORT double add(double a, double b)
	{
		__m128d xmm0, xmm1;
		xmm0.m128d_f64[0] = a;
		xmm1.m128d_f64[0] = b;
		return _mm_add_sd(xmm0, xmm1).m128d_f64[0];
	}

	NUMERICS_NATIVE_EXPORT __m128 add(__m128 xmm0, __m128 xmm1)
	{
		return _mm_add_ps(xmm0, xmm1);
	}

	NUMERICS_NATIVE_EXPORT __m128d add(__m128d xmm0, __m128d xmm1)
	{
		return _mm_add_pd(xmm0, xmm1);
	}

	NUMERICS_NATIVE_EXPORT __m256 add(__m256 ymm0, __m256 ymm1)
	{
		return _mm256_add_ps(ymm0, ymm1);
	}

	NUMERICS_NATIVE_EXPORT __m256d add(__m256d ymm0, __m256d ymm1)
	{
		return _mm256_add_pd(ymm0, ymm1);
	}

	NUMERICS_NATIVE_EXPORT __m128 horizontal_add(__m128 xmm0, __m128 xmm1)
	{
		return _mm_hadd_ps(xmm0, xmm1);
	}

	NUMERICS_NATIVE_EXPORT __m128d horizontal_add(__m128d xmm0, __m128d xmm1)
	{
		return _mm_hadd_pd(xmm0, xmm1);
	}

	NUMERICS_NATIVE_EXPORT __m256 horizontal_add(__m256 ymm0, __m256 ymm1)
	{
		return _mm256_hadd_ps(ymm0, ymm1);
	}

	NUMERICS_NATIVE_EXPORT __m256d horizontal_add(__m256d ymm0, __m256d ymm1)
	{
		return _mm256_hadd_pd(ymm0, ymm1);
	}

	NUMERICS_NATIVE_EXPORT float multiply(float a, float b)
	{
		__m128 xmm0, xmm1;
		xmm0.m128_f32[0] = a;
		xmm1.m128_f32[0] = b;
		return _mm_mul_ss(xmm0, xmm1).m128_f32[0];
	}

	NUMERICS_NATIVE_EXPORT double multiply(double a, double b)
	{
		
	}

	NUMERICS_NATIVE_EXPORT __m128 multiply(__m128, __m128) {}
	NUMERICS_NATIVE_EXPORT __m128d multiply(__m128d, __m128d) {}
	NUMERICS_NATIVE_EXPORT __m256 multiply(__m256, __m256) {}
	NUMERICS_NATIVE_EXPORT __m256d multiply(__m256d, __m256d) {}

	NUMERICS_NATIVE_EXPORT float divide(float, float) {}
	NUMERICS_NATIVE_EXPORT double divide(double, double) {}
	NUMERICS_NATIVE_EXPORT __m128 divide(__m128, __m128) {}
	NUMERICS_NATIVE_EXPORT __m128d divide(__m128d, __m128d) {}
	NUMERICS_NATIVE_EXPORT __m256 divide(__m256, __m256) {}
	NUMERICS_NATIVE_EXPORT __m256d divide(__m256d, __m256d) {}
}