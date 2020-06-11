#include "pch.h"
#include "CppUnitTest.h"
#include "../geometric figures/GeometricFigure.h"
#include "../geometric figures/GeometricFigure.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GeometricFigureUnitTest
{
	TEST_CLASS(GeometricFigureUnitTest)
	{
	public:

		TEST_METHOD(TestMethodTriangle)
		{
			triangle a(3, 4);
			Assert::AreEqual(3, a.getBase(), 0.01);
			Assert::AreEqual(4, a.getAtribute(), 0.01);
			Assert::AreEqual(6, a.area(), 0.01);
			Assert::AreEqual(9, a.circuit(), 0.01);
		}
		TEST_METHOD(TestMethodRectangle)
		{
			rectangle a(6, 7);
			Assert::AreEqual(6, a.getBase(), 0.01);
			Assert::AreEqual(7, a.getAtribute(), 0.01);
			Assert::AreEqual(42, a.area(), 0.01);
			Assert::AreEqual(26, a.circuit(), 0.01);
		}
		TEST_METHOD(TestMethodEllipse)
		{
			ellipse a(6, 11);
			Assert::AreEqual(6, a.getBase(), 0.01);
			Assert::AreEqual(11, a.getAtribute(), 0.01);
			Assert::AreEqual(207.24, a.area(), 0.01);
			Assert::AreEqual(54.59, a.circuit(), 0.1);
		};
	};
}