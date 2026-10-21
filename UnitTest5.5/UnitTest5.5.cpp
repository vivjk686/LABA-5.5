#include "pch.h"
#include "CppUnitTest.h"

#define UNIT_TESTING
#include "../LABA-5.5/LABA-5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:

		TEST_METHOD(TestGCD_StandardNumbers)
		{
			int depth = 0;
			int res = gcd(48, 18, 1, depth);
			Assert::AreEqual(6, res);
			Assert::AreEqual(3, depth);
		}

		TEST_METHOD(TestGCD_ReversedOrder)
		{
			int depth = 0;
			int res = gcd(18, 48, 1, depth);
			Assert::AreEqual(6, res);
			Assert::AreEqual(4, depth);
		}

		TEST_METHOD(TestGCD_CoprimeNumbers)
		{
			int depth = 0;
			int res = gcd(17, 19, 1, depth);
			Assert::AreEqual(1, res);
		}

		TEST_METHOD(TestGCD_EqualNumbers)
		{
			int depth = 0;
			int res = gcd(25, 25, 1, depth);
			Assert::AreEqual(25, res);
			Assert::AreEqual(1, depth);
		}

		TEST_METHOD(TestGCD_Multiple)
		{
			int depth = 0;
			int res = gcd(100, 25, 1, depth);
			Assert::AreEqual(25, res);
			Assert::AreEqual(1, depth);
		}

		TEST_METHOD(TestGCD_LargePair)
		{
			int depth = 0;
			int res = gcd(1071, 462, 1, depth);
			Assert::AreEqual(21, res);
		}
	};
}
