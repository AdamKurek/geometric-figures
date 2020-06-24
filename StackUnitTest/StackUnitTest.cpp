#include "pch.h"
#include "CppUnitTest.h"
#include "../geometric figures/stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackUnitTest
{
	TEST_CLASS(StackUnitTest)
	{
	public:
		
		TEST_METHOD(TestInt)
		{
			Stack<int> mystack;
			mystack.push(6);
			mystack.push(9);
			mystack.push(5);
			Assert::AreEqual(5, mystack.pop());
			Assert::AreEqual(9, mystack.pop());
			Assert::AreEqual(6, mystack.pop());
		}

		TEST_METHOD(TestIntdeletelast)
		{
			Stack<int> mystack;
			mystack.push(6);
			mystack.push(9);
			mystack.deletelast();
			Assert::AreEqual(6, mystack.pop());
		}
		TEST_METHOD(TestIntdeletelastleftsempty)
		{
			Stack<int> mystack;
			mystack.push(6);
			mystack.deletelast();
			Assert::AreEqual(true, mystack.empty());
		}
		TEST_METHOD(TestIntdeletelastempty)
		{
			Stack<int> mystack;
			mystack.deletelast();
			Assert::AreEqual(true, mystack.empty());
		}

		TEST_METHOD(Testlast)
		{
			Stack<int> mystack;
			mystack.push(6);
			Assert::AreEqual(6, mystack.last());
			Assert::AreEqual(6, mystack.pop());
		}
		TEST_METHOD(Testchar)
		{
			Stack<char> mystack;
			mystack.push('d');
			mystack.push('3');
			mystack.push(':');
			Assert::AreEqual(':', mystack.pop());
			Assert::AreEqual('3', mystack.pop());
			Assert::AreEqual('d', mystack.pop());
		}
		
		
		
		
		
		
		
		
		
		/*TEST_METHOD(Testchartab)
		{
			Stack<char[]> mystack;
			mystack.push(tab a[2] = { 'a','s' });
			mystack.push(tab b[2] = { 'a','s' });
			mystack.push(tab c[2] = { 'a','s' });
			Assert::AreEqual("as", mystack.pop());
			Assert::AreEqual("as", mystack.pop());
			Assert::AreEqual("as", mystack.pop());
		}*/
	};
}
