#define CTEST_MAIN

#include <ctest.h>
#include "form.h"
char A[10][10];
CTEST(Syntax, CorrectSyntaxCheck) {
    bool result = board(A, "e2-e4");
    ASSERT_TRUE(result);
}

CTEST(Syntax, IncorrectLenghtCheck) {
    bool result = board(A, "e2 - e4");
    ASSERT_FALSE(result);
}


CTEST(Syntax, IncorrectTire) {
    bool result = board(A, "h2xh4");
    ASSERT_FALSE(result);
}

CTEST(Syntax, Synt) {
    bool result = board(A, "1b-6b");
    ASSERT_FALSE(result);
}

CTEST(Syntax, IncorrectPredel) {
    bool result = board(A, "l2-l4");
    ASSERT_FALSE(result);
}

int main(int argc, const char** argv)
{
	PrintDoska(A);
    return ctest_main(argc, argv);
}
