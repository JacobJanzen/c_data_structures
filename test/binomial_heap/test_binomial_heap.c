#include "test_binomial_heap.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "../../include/binomial_heap.h"

static bh_t *bh;

static void before_each(void) {
    bh = bh_create();
    assert(bh);
}

static void after_each(void) { bh_free(bh); }

static void bh_create_returns_a_valid_binomial_heap(void) {
    before_each();
    after_each();
}

void test_binomial_heap(void) {
    bh_create_returns_a_valid_binomial_heap();
    // TODO
}
