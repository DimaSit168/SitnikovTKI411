//#include "pch.h"
#include "CppUnitTest.h"
#include "../StaticLib1/Stack.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test1
{
	TEST_CLASS(Test1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//arrange

			//act
			const auto result = new Stack();

			//assert
			Assert::IsNotNull(result);
		}
		
		TEST_METHOD(TestMethod2)
		{
			// arrange
			const size_t expectedSize = 5;

			// act
			// const auto result = new StaticLib1;	//было	
			Stack result = { 1, 2, 3, 4, 5 }; //стало
			
			//assert
			Assert::AreEqual(expectedSize, result.GetSize());
			Assert::AreEqual(5, result.Pop());
		}

		TEST_METHOD(TestMethod3)
		{
			//Arrange
			const Stack stack = { 1, 2, 3, 4, 5 };
			std::stringstream buffer;
			const std::string expected = "5 4 3 2 1 ";

			//Act
			buffer << stack;

			//Assert
			Assert::AreEqual(expected, buffer.str());
		}

	};
}