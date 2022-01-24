#include "core.h"

float __vectorcall sum(float a, float b)
{
	__m128 xmm0, xmm1;
	xmm0.m128_f32[0] = a;
	xmm1.m128_f32[0] = b;
	return _mm_add_ss(xmm0, xmm1).m128_f32[0];
}

