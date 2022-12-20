#include "../../include/binomial_heap.h"

#include <stdio.h>
#include <stdlib.h>

#include "binomial_heap_structs.h"

bh_t *bh_create(void) {
    bh_t *bh = malloc(sizeof(bh_t));
    if (!bh)
        return NULL;

    bh->start = NULL;
    return bh;
}
