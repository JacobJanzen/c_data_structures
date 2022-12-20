#ifndef KVP_H
#define KVP_H

typedef enum INFINITY {
    NEG_INFINITY,
    NOT_INFINITY,
    POS_INFINITY,
} infinity_t;

typedef struct KVP_INT_KEY {
    int key;
    void *data;
    infinity_t infinity;
} kvp_int_t;

#endif
