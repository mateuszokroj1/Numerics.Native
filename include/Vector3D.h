#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <array>

#include "VectorBase3D.h"
#include "Numerics_Native_Export.h"

namespace Numerics
{
	template<typename T>
	struct NUMERICS_NATIVE_EXPORT Vector3D : public VectorBase3D<T>
	{
	public:
		constexpr Vector3D();
		constexpr Vector3D(const T&, const T&);
		constexpr Vector3D(const Vector3D&);
		constexpr Vector3D(const Vector3D&&);
	};
}

#endif