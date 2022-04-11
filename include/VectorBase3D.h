#ifndef VECTORBASE3D_H
#define VECTORBASE3D_H

#include <array>

#include "Numerics_Native_Export.h"

namespace Numerics
{
	template<typename T>
	struct NUMERICS_NATIVE_EXPORT VectorBase3D
	{
	protected:
		VectorBase3D() = default;

	private:
		std::array<T, 4> data;

	public:
		const inline T x() const { return data[0]; }
		inline void x(const T& value) { data[0] = value; }

		const inline T y() const { return data[1]; }
		inline void y(const T& value) { data[1] = value; }

		const inline T z() const { return data[2]; }
		inline void z(const T& value) { data[2] = value; }

		constexpr T w() { return data[3]; }
	};
}

#endif