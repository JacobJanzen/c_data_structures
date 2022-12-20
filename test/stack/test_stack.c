#include "test_stack.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../include/stack.h"

static stack_t *s;

static void before_each(void) {
    s = stack_create();
    assert(s);
}

static void after_each(void) { stack_free(s); }

static void stack_create_returns_valid_stack(void) {
    before_each();
    after_each();
}

static void retrieving_a_value_functions(void) {
    before_each();

    int val = 10;

    stack_push(s, &val);
    int *top = stack_peek(s);

    assert(top != NULL);
    assert(*top == val);

    after_each();
}

static void stack_pop_removes_values(void) {
    before_each();

    int val;

    stack_push(s, &val);
    stack_pop(s);
    int *top = stack_peek(s);

    assert(top == NULL);

    after_each();
}

static void adding_multiple_values_works(void) {
    before_each();

    int val1 = 10;
    int val2 = 11;

    stack_push(s, &val1);
    stack_push(s, &val2);

    int *top = stack_pop(s);
    assert(top != NULL);
    assert(*top == val2);

    top = stack_pop(s);
    assert(top != NULL);
    assert(*top == val1);

    after_each();
}

static void stack_resizes_correctly(void) {
    before_each();

    for (int i = 0; i < 100; ++i) {
        int *val = malloc(sizeof(int));
        assert(val);

        *val = i;
        stack_push(s, val);
    }

    for (int i = 99; i >= 0; --i) {
        int *top = stack_pop(s);
        assert(top);
        assert(*top == i);
        free(top);
    }

    after_each();
}

void test_stack(void) {
    stack_create_returns_valid_stack();
    retrieving_a_value_functions();
    stack_pop_removes_values();
    adding_multiple_values_works();
    stack_resizes_correctly();
}
