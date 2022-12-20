#include "../../include/stack.h"

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_CAPACITY 8

typedef struct STACK_DS {
    void **data;
    unsigned int size;
    unsigned int capacity;
} stack_t;

stack_t *stack_create(void) {
    stack_t *s = malloc(sizeof(stack_t));
    if (!s)
        return NULL;

    s->size = 0;
    s->capacity = DEFAULT_CAPACITY;
    s->data = malloc(sizeof(void *) * DEFAULT_CAPACITY);
    if (!s->data)
        return NULL;

    return s;
}

void stack_push(stack_t *s, void *data) {
    if (!s || !s->data)
        return;

    if (s->size >= s->capacity) {
        s->data = realloc(s->data, sizeof(void *) * s->capacity * 2);
        s->capacity *= 2;

        if (!s->data)
            return;
    }

    s->data[s->size++] = data;
}

void *stack_pop(stack_t *s) {
    if (!s || !s->data || s->size == 0)
        return NULL;

    return s->data[--s->size];
}

void *stack_peek(stack_t *s) {
    if (!s || !s->data || s->size == 0)
        return NULL;

    return s->data[s->size - 1];
}

void stack_free(stack_t *s) {
    if (s) {
        if (s->data)
            free(s->data);
        free(s);
    }
}
