#include "gtest/gtest.h"
#include "Numerics.Native.h"

TEST(NumericsCore, Native_Name_ShouldBeValid)
{
	Numerics::Native native;
	ASSERT_STREQ("Numerics.Native", native.Name);
}