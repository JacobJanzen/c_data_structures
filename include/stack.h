#ifndef STACK_H
#define STACK_H

typedef struct STACK_DS stack_t;

stack_t *stack_create(void);
void stack_push(stack_t *s, void *data);
void *stack_pop(stack_t *s);
void *stack_peek(stack_t *s);
void stack_free(stack_t *s);

#endif
