#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test1
{
	TEST_CLASS(Test1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// arrange
			const size_t expectedSize = 0;

			// act
			const auto result = new StaticLib1;	//было	
			StaticLib1 result = { 1, 2, 3, 4, 5 }; //6стало
			

		}
	};
}
