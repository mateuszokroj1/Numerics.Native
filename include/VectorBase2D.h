#ifndef VECTORBASE2D_H
#define VECTORBASE2D_H

#include <array>

#include "Numerics_Native_Export.h"

namespace Numerics
{
	template<typename T>
	struct NUMERICS_NATIVE_EXPORT VectorBase2D
	{
	protected:
		VectorBase2D() = default;

	private:
		std::array<T, 3> data;

	public:
		const inline T x() const { return data[0]; }
		inline void x(const T& value) { data[0] = value; }

		const inline T y() const { return data[1]; }
		inline void y(const T& value) { data[1] = value; }

		constexpr T w() { return data[2]; }
	};
}

#endif