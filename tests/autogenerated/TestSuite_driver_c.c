#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/Timer/driver.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/Timer/driver.c");

EXTERN_C_LINKAGE void TestSuite_driver_c_b54de75c_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_driver_c_b54de75c_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_driver_c_b54de75c);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_driver_c_b54de75c_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_driver_c_b54de75c_testSuiteTearDown);
CPPTEST_TEST(TestSuite_driver_c_b54de75c_test_print_menu_get_action);
CPPTEST_TEST(TestSuite_driver_c_b54de75c_test_main_loop);
CPPTEST_TEST(TestSuite_driver_c_b54de75c_test_main);
CPPTEST_TEST(TestSuite_driver_c_b54de75c_test_main_loop_Case1_Error);
CPPTEST_TEST_ERROR(TestSuite_driver_c_b54de75c_test_main_loop_Case3,CPPTEST_TIMEOUT);
CPPTEST_TEST_SUITE_END();
        

void TestSuite_driver_c_b54de75c_test_print_menu_get_action(void);
void TestSuite_driver_c_b54de75c_test_main_loop(void);
void TestSuite_driver_c_b54de75c_test_main(void);
void TestSuite_driver_c_b54de75c_test_main_loop_Case1_Error(void);
void TestSuite_driver_c_b54de75c_test_main_loop_Case3(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_driver_c_b54de75c);

void TestSuite_driver_c_b54de75c_testSuiteSetUp(void);
void TestSuite_driver_c_b54de75c_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_driver_c_b54de75c_testSuiteTearDown(void);
void TestSuite_driver_c_b54de75c_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_driver_c_b54de75c_setUp(void);
void TestSuite_driver_c_b54de75c_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_driver_c_b54de75c_tearDown(void);
void TestSuite_driver_c_b54de75c_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_print_menu_get_action */
/* CPPTEST_TEST_CASE_CONTEXT int print_menu_get_action(void) */
void TestSuite_driver_c_b54de75c_test_print_menu_get_action()
{
    CppTest_StreamRedirect* _stdoutStreamRedirect = CppTest_RedirectStdOutput();
    /* Pre-condition initialization */
    {
        /* Tested function call */
        int _return  = print_menu_get_action();
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
        CPPTEST_ASSERT_CSTR_N_EQUAL("**************************************************\n*                  Timer Menu                    *\n* -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ *\n*                                                *\n* 1) Add a timer                                 *\n*", ( CppTest_StreamReadData(_stdoutStreamRedirect, 0) ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_print_menu_get_action */

/* CPPTEST_TEST_CASE_BEGIN test_main_loop */
/* CPPTEST_TEST_CASE_CONTEXT void main_loop(void) */
void TestSuite_driver_c_b54de75c_test_main_loop()
{
    CppTest_StreamRedirect* _stdoutStreamRedirect = CppTest_RedirectStdOutput();
    /* Pre-condition initialization */
    {
        /* Tested function call */
        main_loop();
        /* Post-condition check */
        CPPTEST_ASSERT_CSTR_N_EQUAL("**************************************************\n*                  Timer Menu                    *\n* -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ *\n*                                                *\n* 1) Add a timer                                 *\n*", ( CppTest_StreamReadData(_stdoutStreamRedirect, 0) ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_main_loop */

/* CPPTEST_TEST_CASE_BEGIN test_main */
/* CPPTEST_TEST_CASE_CONTEXT int main(void) */
void TestSuite_driver_c_b54de75c_test_main()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        int _return  = main();
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_main */

void CppTest_StubCallback_add_timer(CppTest_StubCallInfo* stubCallInfo, int* __return){
	*__return = -1;
}

/* CPPTEST_TEST_CASE_BEGIN test_main_loop_Case1_Error */
/* CPPTEST_TEST_CASE_CONTEXT void main_loop(void) */
void TestSuite_driver_c_b54de75c_test_main_loop_Case1_Error()
{
    /* Pre-condition initialization */
    {
    	CPPTEST_REGISTER_STUB_CALLBACK("add_timer", &CppTest_StubCallback_add_timer);
        /* Tested function call */
        main_loop();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_main_loop_Case1_Error */

void CppTest_StubCallback_printMenuGetAction3(CppTest_StubCallInfo* stubCallInfo, int* __return){
	*__return = 3;
}

/* CPPTEST_TEST_CASE_BEGIN test_main_loop_Case3 */
/* CPPTEST_TEST_CASE_CONTEXT void main_loop(void) */
void TestSuite_driver_c_b54de75c_test_main_loop_Case3()
{
    CppTest_StreamRedirect* _stdoutStreamRedirect = CppTest_RedirectStdOutput();
    /* Pre-condition initialization */
    {
    	CPPTEST_REGISTER_STUB_CALLBACK("print_menu_get_action", &CppTest_StubCallback_printMenuGetAction3);
        /* Tested function call */
        main_loop();
        /* Post-condition check */
        CPPTEST_ASSERT_CSTR_N_EQUAL("**************************************************\n*                  Timer Menu                    *\n* -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ *\n*                                                *\n* 1) Add a timer                                 *\n*", ( CppTest_StreamReadData(_stdoutStreamRedirect, 0) ), 256);
    }
}
/* CPPTEST_TEST_CASE_END test_main_loop_Case3 */
