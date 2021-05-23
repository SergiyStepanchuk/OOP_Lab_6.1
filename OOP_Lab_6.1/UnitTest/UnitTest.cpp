#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/Array.h"
#include "../Program/Array.cpp"
#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[5] = { 5, 5, 5, 5, 5 };
			Assert::AreEqual(sum(arr, 5), 25.);
		}
	};
}
