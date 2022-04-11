#ifndef POSITION2D_H
#define POSITION2D_H

#include <array>

#include "VectorBase2D.h"
#include "Numerics_Native_Export.h"

namespace Numerics
{
	template<typename T>
	struct NUMERICS_NATIVE_EXPORT Position2D : public VectorBase2D<T>
	{
	public:
		constexpr Position2D();
		constexpr Position2D(const T&, const T&);
		constexpr Position2D(const Position2D&);
		constexpr Position2D(const Position2D&&);
	};
}

#endif