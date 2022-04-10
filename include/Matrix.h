#ifndef MATRIX_H
#define MATRIX_H

#include <array>

#include "Numerics_Native_Export.h"

namespace Numerics
{
	template<typename T, size_t width, size_t height>
	struct NUMERICS_NATIVE_EXPORT Matrix
	{
	public:
		constexpr Matrix();
		constexpr Matrix(const T);
		Matrix(const T*);
		Matrix(const T**);
		constexpr Matrix(const Matrix&);
		constexpr Matrix(const Matrix&&);

	private:
		std::array<T, width * height> data;
	};
}

#endif