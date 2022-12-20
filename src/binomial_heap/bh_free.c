#include "../../include/binomial_heap.h"

#include <stdlib.h>

#include "binomial_heap_structs.h"

static void tn_free(tn_t *n) {
    if (!n)
        return;

    if (n->children) {
        for (int i = 0; i < n->num_children; ++i)
            tn_free(n->children[i]);
        free(n->children);
    }

    free(n);
}

static void tree_free(tree_t *t) {
    if (!t)
        return;

    tree_t *curr = t;
    while (curr) {
        tree_t *temp = curr;
        curr = curr->next;

        tn_free(temp->root);
        free(temp);
    }

    free(t);
}

void bh_free(bh_t *bh) {
    if (bh) {
        tree_free(bh->start);
        free(bh);
    }
}
