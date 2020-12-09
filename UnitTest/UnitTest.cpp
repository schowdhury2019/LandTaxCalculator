#include "pch.h"
#include "CppUnitTest.h"
#include "../LandTaxCalculator/functions.h"
#include "../LandTaxCalculator/Buyer.h"




using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Buyer b = initialize();
			checkMembers(b);
			




			

		}
	};
}
