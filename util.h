
// dyn array
struct Vector {
    void** buff;
    int element_size;
};

Vector* vector_init(int size, int element_size);
void vector_push(Vector* vec, void* item);
void vector_pop(Vector* vec);
void vector_remove(Vector* vec, int index);