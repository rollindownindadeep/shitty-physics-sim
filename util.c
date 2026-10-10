#include "util.h"
#include <stdlib.h>
#include <string.h>

Vector* vector_init(int size, int element_size_bytes)
{
    int buff_size = size*element_size_bytes;
    char* buff = malloc(buff_size);

    if (buff == NULL)
    {
        return VECTOR_ERROR_MALLOC_FAILED;
    }

    Vector* v = malloc(sizeof(Vector));

    if (v == NULL)
    {
        return VECTOR_ERROR_MALLOC_FAILED;
    }

    v->_buff = buff;
    v->_current_offset_bytes = 0;
    v->_element_size_bytes = element_size_bytes;
    v->length = 0;
    v->_max_length_bytes = buff_size;

    return v;
}

int vector_push(Vector* vec, void* item)
{
    void* end_of_vec = vec->_buff+vec->_max_length_bytes;
    int new_offset = vec->_current_offset_bytes + vec->_element_size_bytes;
    void* buff_new_position_ptr = vec->_buff + new_offset;

    if (buff_new_position_ptr > end_of_vec)
    {
        vec->_max_length_bytes+=vec->_element_size_bytes;
        void* new_buff = malloc(vec->_max_length_bytes);

        if (new_buff == NULL)
        {
            return VECTOR_ERROR_MALLOC_FAILED;
        }

        memcpy(new_buff, vec->_buff, sizeof(vec->_buff));
        free(vec->_buff);
        vec->_buff = (char*)(new_buff);
    }

    memcpy(vec->_buff+vec->_current_offset_bytes, item, vec->_element_size_bytes);
    vec->_current_offset_bytes = new_offset;
    vec->length+=1;

    return VECTOR_SUCCESS_GENERIC;

}