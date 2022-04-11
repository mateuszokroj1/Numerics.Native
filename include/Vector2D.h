#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <array>

#include "VectorBase2D.h"
#include "Numerics_Native_Export.h"

namespace Numerics
{
	template<typename T>
	struct NUMERICS_NATIVE_EXPORT Vector2D : public VectorBase2D<T>
	{
	public:
		constexpr Vector2D();
		constexpr Vector2D(const T&, const T&);
		constexpr Vector2D(const Vector2D&);
		constexpr Vector2D(const Vector2D&&);
	};
}

#endif