int ENTITY_SHAPE_CIRCLE = 0;
int ENTITY_SHAPE_RECTANGLE = 1;

struct Entity {
    float x;
    float y;
    float a;
    int shape;  /* 0 = circle, 1 = square */
    float radius;
    float mass;
};
