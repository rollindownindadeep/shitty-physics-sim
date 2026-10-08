
// dyn array
typedef struct Vector {
    void* _buff;
    int _element_size;
    void* _current_position;
    int _buff_size; // size of buffer in bytes
} Vector;

Vector* vector_init(int size, int element_size);
void vector_push(Vector* vec, void* item);
void vector_pop(Vector* vec);
void vector_remove(Vector* vec, int index);
void vector_free(Vector* vec);