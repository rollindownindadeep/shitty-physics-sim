#include "util.h"

Vector* vector_init(int size, int element_size)
{
    int buff_size = size*element_size;
    void* buff = malloc(buff_size);
    Vector* v = (Vector*)malloc(sizeof(Vector));

    v->_buff = buff;
    v->_current_position = buff;
    v->_element_size = element_size;
    v->_buff_size = buff_size;

    return v;
}