//
// DynamicAnyTest.cpp
//
// $Id: //poco/Main/Foundation/testsuite/src/DynamicAnyTest.cpp#6 $
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "DynamicAnyTest.h"
#include "CppUnit/TestCaller.h"
#include "CppUnit/TestSuite.h"
#include "Poco/Exception.h"
#include "Poco/DynamicAny.h"
#include "Poco/Bugcheck.h"


using namespace Poco;


DynamicAnyTest::DynamicAnyTest(const std::string& name): CppUnit::TestCase(name)
{
}


DynamicAnyTest::~DynamicAnyTest()
{
}


void DynamicAnyTest::testInt8()
{
	Poco::Int8 src = 32;
	DynamicAny a1 = src;
	
	assert (a1.type() == typeid(Poco::Int8));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);
	
	Int8 value = a1.extract<Int8>();
	assert (value == 32);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testInt16()
{
	Poco::Int16 src = 32;
	DynamicAny a1 = src;

	assert (a1.type() == typeid(Poco::Int16));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	Int16 value = a1.extract<Int16>();
	assert (value == 32);
	
	try
	{
		Int32 value2 = a1.extract<Int32>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testInt32()
{
	Poco::Int32 src = 32;
	DynamicAny a1 = src;
	
	assert (a1.type() == typeid(Poco::Int32));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);
	
	Int32 value = a1.extract<Int32>();
	assert (value == 32);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testInt64()
{
	Poco::Int64 src = 32;
	DynamicAny a1 = src;
	
	assert (a1.type() == typeid(Poco::Int64));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	Int64 value = a1.extract<Int64>();
	assert (value == 32);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testUInt8()
{
	Poco::UInt8 src = 32;
	DynamicAny a1 = src;

	assert (a1.type() == typeid(Poco::UInt8));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	UInt8 value = a1.extract<UInt8>();
	assert (value == 32);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testUInt16()
{
	Poco::UInt16 src = 32;
	DynamicAny a1 = src;

	assert (a1.type() == typeid(Poco::UInt16));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	UInt16 value = a1.extract<UInt16>();
	assert (value == 32);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testUInt32()
{
	Poco::UInt32 src = 32;
	DynamicAny a1 = src;

	assert (a1.type() == typeid(Poco::UInt32));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	UInt32 value = a1.extract<UInt32>();
	assert (value == 32);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testUInt64()
{
	Poco::UInt64 src = 32;
	DynamicAny a1 = src;

	assert (a1.type() == typeid(Poco::UInt64));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	UInt64 value = a1.extract<UInt64>();
	assert (value == 32);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testBool()
{
	bool src = true;
	DynamicAny a1 = src;
	
	assert (a1.type() == typeid(bool));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 1);
	assert (s15 == 1);
	assert (s1 == "true");
	assert (s2 == 1);
	assert (s3 == 1);
	assert (s4 == 1);
	assert (s5 == 1);
	assert (s6 == 1);
	assert (s7 == 1);
	assert (s8 == 1);
	assert (s9 == 1);
	assert (s10 == 1.0f);
	assert (s11 == 1.0);
	assert (s12);
	assert (s13 == '\x1');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	bool value = a1.extract<bool>();
	assert (value);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testChar()
{
	char src = ' ';
	DynamicAny a1 = src;
	
	assert (a1.type() == typeid(char));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == " ");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	char value = a1.extract<char>();
	assert (value == ' ');
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testFloat()
{
	float src = 32.0f;
	DynamicAny a1 = src;
	
	assert (a1.type() == typeid(float));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	float value = a1.extract<float>();
	assert (value == 32.0f);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testDouble()
{
	double src = 32.0;
	DynamicAny a1 = src;
	
	assert (a1.type() == typeid(double));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	double value = a1.extract<double>();
	assert (value == 32.0);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testString()
{
	DynamicAny a1("32");
	
	assert (a1.type() == typeid(std::string));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == '3');

	const std::string& value = a1.extract<std::string>();
	assert (value == "32");
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testLong()
{
	long src = 32;
	DynamicAny a1 = src;
	
	assert (a1.type() == typeid(long));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);
	
	long value = a1.extract<long>();
	assert (value == 32);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testULong()
{
	unsigned long src = 32;
	DynamicAny a1 = src;
	
	assert (a1.type() == typeid(unsigned long));

	std::string s1;
	Poco::Int8 s2;
	Poco::Int16 s3;
	Poco::Int32 s4;
	Poco::Int64 s5;
	Poco::UInt8 s6;
	Poco::UInt16 s7;
	Poco::UInt32 s8;
	Poco::UInt64 s9;
	float s10;
	double s11;
	bool s12;
	char s13;
	a1.convert(s1);
	a1.convert(s2);
	a1.convert(s3);
	a1.convert(s4);
	a1.convert(s5);
	a1.convert(s6);
	a1.convert(s7);
	a1.convert(s8);
	a1.convert(s9);
	a1.convert(s10);
	a1.convert(s11);
	a1.convert(s12);
	a1.convert(s13);
	long s14;
	unsigned long s15;
	a1.convert(s14);
	a1.convert(s15);
	assert (s14 == 32);
	assert (s15 == 32);
	assert (s1 == "32");
	assert (s2 == 32);
	assert (s3 == 32);
	assert (s4 == 32);
	assert (s5 == 32);
	assert (s6 == 32);
	assert (s7 == 32);
	assert (s8 == 32);
	assert (s9 == 32);
	assert (s10 == 32.0f);
	assert (s11 == 32.0);
	assert (s12);
	assert (s13 == ' ');
	DynamicAny a2(a1);
	std::string t2;
	a2.convert(t2);
	assert (s1 == t2);

	unsigned long value = a1.extract<unsigned long>();
	assert (value == 32);
	
	try
	{
		Int16 value2 = a1.extract<Int16>();
		fail("bad cast - must throw");
	}
	catch (Poco::BadCastException&)
	{
	}
}


void DynamicAnyTest::testConversionOperator()
{
	DynamicAny any("42");
	int i = any;
	assert (i == 42);
	
	any = 123;
	std::string s = any;//'s(any)' bombs on gcc 3.4.4
	assert (s == "123");

	any = 321;
	s = (std::string) any;//must cast to disambiguate char/string
	assert (s == "321");

	any = "456";
	assert (any == "456");
}


void DynamicAnyTest::testLimitsInt()
{
	testLimitsSigned<Int16, Int8>();
	testLimitsSigned<Int32, Int8>();
	testLimitsSigned<Int64, Int8>();
	testLimitsFloatToInt<float, Int8>();
	testLimitsFloatToInt<double, Int8>();

	testLimitsSigned<Int16, char>();
	testLimitsSigned<Int32, char>();
	testLimitsSigned<Int64, char>();
	testLimitsFloatToInt<float, char>();
	testLimitsFloatToInt<double, char>();

	testLimitsSigned<Int32, Int16>();
	testLimitsSigned<Int64, Int16>();
	testLimitsFloatToInt<float, Int16>();
	testLimitsFloatToInt<double, Int16>();

	testLimitsSigned<Int64, Int32>();
	testLimitsFloatToInt<float, Int32>();
	testLimitsFloatToInt<double, Int32>();

	testLimitsSignedUnsigned<Int8, UInt8>();
	testLimitsSignedUnsigned<Int16, UInt8>();
	testLimitsSignedUnsigned<Int32, UInt8>();
	testLimitsSignedUnsigned<Int64, UInt8>();
	testLimitsFloatToInt<float, UInt8>();
	testLimitsFloatToInt<double, UInt8>();

	testLimitsSignedUnsigned<Int8, UInt16>();
	testLimitsSignedUnsigned<Int16, UInt16>();
	testLimitsSignedUnsigned<Int32, UInt16>();
	testLimitsSignedUnsigned<Int64, UInt16>();
	testLimitsFloatToInt<float, UInt16>();
	testLimitsFloatToInt<double, UInt16>();

	testLimitsSignedUnsigned<Int8, UInt32>();
	testLimitsSignedUnsigned<Int16, UInt32>();
	testLimitsSignedUnsigned<Int32, UInt32>();
	testLimitsSignedUnsigned<Int64, UInt32>();
	testLimitsFloatToInt<float, UInt32>();
	testLimitsFloatToInt<double, UInt32>();

	testLimitsSignedUnsigned<Int8, UInt64>();
	testLimitsSignedUnsigned<Int16, UInt64>();
	testLimitsSignedUnsigned<Int32, UInt64>();
	testLimitsSignedUnsigned<Int64, UInt64>();
	testLimitsFloatToInt<float, UInt64>();
	testLimitsFloatToInt<double, UInt64>();


	testLimitsUnsigned<UInt16, UInt8>();
	testLimitsUnsigned<UInt32, UInt8>();
	testLimitsUnsigned<UInt64, UInt8>();

	testLimitsUnsigned<UInt32, UInt16>();
	testLimitsUnsigned<UInt64, UInt16>();

	testLimitsUnsigned<UInt64, UInt32>();
}


void DynamicAnyTest::testLimitsFloat()
{
	if (std::numeric_limits<double>::max() != std::numeric_limits<float>::max())
	{
		double iMin = -1 * std::numeric_limits<float>::max();
		DynamicAny da = iMin * 10;
		try { float f; f = da; fail("must fail"); }
		catch (RangeException&) {}

		double iMax = std::numeric_limits<float>::max();
		da = iMax * 10;
		try { float f; f = da; fail("must fail"); }
		catch (RangeException&) {}
	}
}


void DynamicAnyTest::setUp()
{
}


void DynamicAnyTest::tearDown()
{
}


CppUnit::Test* DynamicAnyTest::suite()
{
	CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("DynamicAnyTest");

	CppUnit_addTest(pSuite, DynamicAnyTest, testInt8);
	CppUnit_addTest(pSuite, DynamicAnyTest, testInt16);
	CppUnit_addTest(pSuite, DynamicAnyTest, testInt32);
	CppUnit_addTest(pSuite, DynamicAnyTest, testInt64);
	CppUnit_addTest(pSuite, DynamicAnyTest, testUInt8);
	CppUnit_addTest(pSuite, DynamicAnyTest, testUInt16);
	CppUnit_addTest(pSuite, DynamicAnyTest, testUInt32);
	CppUnit_addTest(pSuite, DynamicAnyTest, testUInt64);
	CppUnit_addTest(pSuite, DynamicAnyTest, testBool);
	CppUnit_addTest(pSuite, DynamicAnyTest, testChar);
	CppUnit_addTest(pSuite, DynamicAnyTest, testFloat);
	CppUnit_addTest(pSuite, DynamicAnyTest, testDouble);
	CppUnit_addTest(pSuite, DynamicAnyTest, testString);
	CppUnit_addTest(pSuite, DynamicAnyTest, testLong);
	CppUnit_addTest(pSuite, DynamicAnyTest, testULong);
	CppUnit_addTest(pSuite, DynamicAnyTest, testConversionOperator);
	CppUnit_addTest(pSuite, DynamicAnyTest, testLimitsInt);
	CppUnit_addTest(pSuite, DynamicAnyTest, testLimitsFloat);

	return pSuite;
}
