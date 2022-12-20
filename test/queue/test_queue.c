#include "test_queue.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../include/queue.h"

static queue_t *q;

static void before_each(void) {
    q = queue_create();
    assert(q);
}

static void after_each(void) { queue_free(q); }

static void queue_create_returns_a_valid_queue(void) {
    before_each();
    after_each();
}

static void retrieving_a_value_functions(void) {
    before_each();

    int val = 10;

    queue_enqueue(q, &val);
    int *top = queue_peek(q);

    assert(top != NULL);
    assert(*top == val);

    after_each();
}

static void dequeue_removes_values(void) {
    before_each();

    int val;

    queue_enqueue(q, &val);
    queue_dequeue(q);
    int *top = queue_peek(q);

    assert(top == NULL);

    after_each();
}

static void adding_multiple_values_works(void) {
    before_each();

    int val1 = 10;
    int val2 = 11;

    queue_enqueue(q, &val1);
    queue_enqueue(q, &val2);

    int *top = queue_dequeue(q);
    assert(top != NULL);
    assert(*top == val1);

    top = queue_dequeue(q);
    assert(top != NULL);
    assert(*top == val2);

    after_each();
}

static void queue_handles_large_number_of_inserts(void) {
    before_each();

    for (int i = 0; i < 100; ++i) {
        int *val = malloc(sizeof(int));
        assert(val);

        *val = i;
        queue_enqueue(q, val);
    }

    for (int i = 0; i < 100; ++i) {
        int *top = queue_dequeue(q);
        assert(top);
        assert(*top == i);
        free(top);
    }

    after_each();
}

void test_queue(void) {
    queue_create_returns_a_valid_queue();
    retrieving_a_value_functions();
    dequeue_removes_values();
    adding_multiple_values_works();
    queue_handles_large_number_of_inserts();
}
