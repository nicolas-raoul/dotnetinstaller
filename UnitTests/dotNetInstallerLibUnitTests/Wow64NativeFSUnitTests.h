#pragma once

namespace DVLib
{
	namespace UnitTests 
	{
		class Wow64NativeFSUnitTests :  public CPPUNIT_NS::TestFixture
		{
			CPPUNIT_TEST_SUITE( Wow64NativeFSUnitTests );
			CPPUNIT_TEST( testAuto );
			CPPUNIT_TEST_SUITE_END();
		public:
			void testAuto();
		};
	}
}
