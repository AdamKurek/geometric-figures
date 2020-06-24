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

		TEST_METHOD(TestMethodTriangle0)
		{
			triangle a(3, 4);
			Assert::AreEqual(3, a.getBase(), 0.01);
		}
		TEST_METHOD(TestMethodTriangle1)
		{
			triangle a(5, 6);
			Assert::AreEqual(6, a.getAtribute(), 0.01);
		}
		TEST_METHOD(TestMethodTriangle2)
		{
			triangle a(4, 8);
			Assert::AreEqual(16, a.area(), 0.01);
		}
		TEST_METHOD(TestMethodTriangle3)
		{
			triangle a(7, 9);
			Assert::AreEqual(38.5, a.circuit(), 0.01);
		}
		TEST_METHOD(TestMethodRectangle0)
		{
			rectangle a(6, 7);
			Assert::AreEqual(6, a.getBase(), 0.01);
		}
		TEST_METHOD(TestMethodRectangle1)
		{
			rectangle a(3, 5);
			Assert::AreEqual(5, a.getAtribute(), 0.01);
		}
		TEST_METHOD(TestMethodRectangle2)
		{
			rectangle a(2, 8);
			Assert::AreEqual(16, a.area(), 0.01);
		}
		TEST_METHOD(TestMethodRectangle3)
		{
			rectangle a(3, 9);
			Assert::AreEqual(24, a.circuit(), 0.01);
		}
		TEST_METHOD(TestMethodEllipse0)
		{
			ellipse a(3, 10);
			Assert::AreEqual(3, a.getBase(), 0.01);
		}
		TEST_METHOD(TestMethodEllipse1)
		{
			ellipse a(4, 7);
			Assert::AreEqual(7, a.getAtribute(), 0.01);
		}
		TEST_METHOD(TestMethodEllipse2)
		{
			ellipse a(5, 9);
			Assert::AreEqual(141.37, a.area(), 0.1);
		}
		TEST_METHOD(TestMethodEllipse3)
		{
			ellipse a(6, 11);
			Assert::AreEqual(54.59, a.circuit(), 0.1);
		};
	};
}
