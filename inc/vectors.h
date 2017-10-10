#ifndef VECTORS_H
#define VECTORS_H

#include "common.h"
#include "entity.h"

typedef struct vect {
    size_t size;
    math_entity_t ent;
    void* vector;
}* vector_t;

void* vect_new(size_t size, math_entity_t ent, ...);

void vect_delete(void* vect);

void vect_zero(void* x);

void vect_one(void* x);

void vect_inv(void* x);

void vect_add(const void* vect1, const void* vect2, void* res);

void vect_mult(const void* vect, const void* scalar, void* res);

void vect_mult_vect(const void* vect1, const void* vect2, void* res);

void vect_cauchy_mult(const void* vect1, const void* vect2, void* res);

void vect_dot(const void* vect1, const void* vect2 , void* res);

void vect_sigma(const void* vect, void* res);

void vect_pigma(const void* vect, void* res);

#endif /* end of include guard: VECTORS_H */
