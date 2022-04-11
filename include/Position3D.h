#ifndef POSITION3D_H
#define POSITION3D_H

#include <array>

#include "VectorBase3D.h"
#include "Numerics_Native_Export.h"

namespace Numerics
{
	template<typename T>
	struct NUMERICS_NATIVE_EXPORT Position3D : public VectorBase3D<T>
	{
	public:
		constexpr Position3D();
		constexpr Position3D(const T&, const T&);
		constexpr Position3D(const Position3D&);
		constexpr Position3D(const Position3D&&);
	};
}

#endif