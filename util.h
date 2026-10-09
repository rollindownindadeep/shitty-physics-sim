static int VECTOR_ERROR_MALLOC_FAILED = -1;
static int VECTOR_SUCCESS_GENERIC = 1;

// dyn array
typedef struct Vector {
    char* _buff;
    int _element_size_bytes;
    int length;
    int _max_length_bytes;
    int _current_offset_bytes;
} Vector;

Vector* vector_init(int size, int element_size);
int vector_push(Vector* vec, void* item);
int vector_pop(Vector* vec);
int vector_remove(Vector* vec, int index);
int vector_free(Vector* vec);