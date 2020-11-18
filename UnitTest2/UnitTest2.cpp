#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = p(0);	
			Assert::AreEqual(t,0.0);
		}
	};
}
