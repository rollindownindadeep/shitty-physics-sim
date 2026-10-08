int SHAPE_CIRCLE = 0;
int SHAPE_RECTANGLE = 1;

struct Entity {
    float x;
    float y;
    float a;
    int shape;  /* 0 = circle, 1 = square */
    float radius;
    float mass;
};
