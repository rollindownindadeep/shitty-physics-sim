#include "util.h"
#include <stdio.h>
#include <assert.h>

void test_vector_init()
{
    Vector *vector = vector_init(3, sizeof(int));
    int *casted_buff = (int *)vector->_buff;

    casted_buff[0] = 67;
    casted_buff[1] = 67;
    casted_buff[2] = 67;

    assert(casted_buff[0] == 67 && casted_buff[1] && 67 && casted_buff[2] == 67);
}

//TODO: test exceeding the size of the ting
void test_vector_push()
{
    Vector *vector = vector_init(100, sizeof(int));

    for (int i = 0; i < 100; i++)
    {
        int temp = 67;
        vector_push(vector, &temp);
    }

    assert(vector->length == 100);
    int *casted_buff = (int *)vector->_buff;

    for (int i = 0; i < 100; i++)
    {
        assert(casted_buff[i] == 67);
    }

    
}

int main()
{
    printf("Running vector tests...\n");
    test_vector_init();
    test_vector_push();
    printf("All vector tests passed.\n");

    return 0;
}