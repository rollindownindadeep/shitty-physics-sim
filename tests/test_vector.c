#include "util.h"
#include <stdio.h>
#include <assert.h>

void test_vector_init()
{
    Vector* vector = vector_init(3, sizeof(int));
    int* casted_buff = (int*) vector->_buff;

    casted_buff[0] = 67;
    casted_buff[1] = 67;
    casted_buff[2] = 67;

    assert(casted_buff[0] == 67 && casted_buff[1] && 67 && casted_buff[2] == 67);

}

int main()
{
    printf("Running vector tests...\n");
    test_vector_init();
    printf("All vector tests passed.\n");

    return 0;
}