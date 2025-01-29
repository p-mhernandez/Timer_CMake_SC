#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/Timer/timer.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/Timer/timer.c");

EXTERN_C_LINKAGE void TestSuite_timer_c_63bfe540_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_timer_c_63bfe540_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_timer_c_63bfe540);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_timer_c_63bfe540_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_timer_c_63bfe540_testSuiteTearDown);
CPPTEST_TEST(TestSuite_timer_c_63bfe540_test_add_timer);
CPPTEST_TEST_SUITE_END();
        

void TestSuite_timer_c_63bfe540_test_add_timer(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_timer_c_63bfe540);

void TestSuite_timer_c_63bfe540_testSuiteSetUp(void);
void TestSuite_timer_c_63bfe540_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_timer_c_63bfe540_testSuiteTearDown(void);
void TestSuite_timer_c_63bfe540_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_timer_c_63bfe540_setUp(void);
void TestSuite_timer_c_63bfe540_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_timer_c_63bfe540_tearDown(void);
void TestSuite_timer_c_63bfe540_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

void CppTest_StubCallback_query_user_FAIL(CppTest_StubCallInfo* stubCallInfo, struct timer_record ** __return){
	*__return = NULL;
}

/* CPPTEST_TEST_CASE_BEGIN test_add_timer */
/* CPPTEST_TEST_CASE_CONTEXT int add_timer(void) */
void TestSuite_timer_c_63bfe540_test_add_timer()
{
    /* Pre-condition initialization */
	CPPTEST_REGISTER_STUB_CALLBACK("query_user", &CppTest_StubCallback_query_user_FAIL);

    /* Initializing global variable timer_records */ 
    {
         timer_records[0]  = 0 ;
    }
    /* Initializing global variable curr_index */ 
    {
         curr_index  = 0;
    }
    {
        /* Tested function call */
        int _return  = add_timer();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER(" _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("struct timer_record * timer_records[0] ", ( timer_records[0] ));
        CPPTEST_POST_CONDITION_INTEGER(" curr_index", ( curr_index ));
    }
}
/* CPPTEST_TEST_CASE_END test_add_timer */
