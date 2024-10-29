#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1rec/Lab_08.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081
{
	TEST_CLASS(UnitTest081)
	{
	public:

		
		TEST_METHOD(TestCount)
		{
			char str1[] = "n1o";
			char str2[] = "hello n2o world";
			char str3[] = "no pattern here";
			char str4[] = "n3o n4o n5o";

			Assert::AreEqual(1, Count(str1, 1));  
			Assert::AreEqual(1, Count(str2, 1));  
			Assert::AreEqual(0, Count(str3, 1));  
			Assert::AreEqual(3, Count(str4, 1));  
		}

		
	};
}
