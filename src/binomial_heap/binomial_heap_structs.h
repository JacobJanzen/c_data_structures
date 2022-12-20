#ifndef BINOMIAL_HEAP_STRUCTS_H
#define BINOMIAL_HEAP_STRUCTS_H

#define DEFAULT_CHILD_CAP 4

typedef struct TREE_NODE {
    int key;
    void *data;
    int num_children;
    struct TREE_NODE **children;
    int children_capacity;
} tn_t;

typedef struct TREE {
    struct TREE *next;
    tn_t *root;
} tree_t;

typedef struct BINOMIAL_HEAP_DS {
    tree_t *start;
} bh_t;

#endif
