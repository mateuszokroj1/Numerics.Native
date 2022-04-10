#ifndef POSITION2D_H
#define POSITION2D_H

#include <array>

#include "Numerics_Native_Export.h"

namespace Numerics
{
	template<typename T>
	struct NUMERICS_NATIVE_EXPORT Position2D
	{
	public:
		constexpr Position2D();
		constexpr Position2D(const T&, const T&);
		constexpr Position2D(const Position2D&);
		constexpr Position2D(const Position2D&&);

	private:
		std::array<T, 3> data;

	public:
		const T x();
		void x(const T&);

		const T y();
		void y(const T&);
	};
}

#endif