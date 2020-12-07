#include "pch.h"
#include "CppUnitTest.h"
#include "../LandTaxCalculator/functions.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(2, add(5,1));
		}
	};
}
