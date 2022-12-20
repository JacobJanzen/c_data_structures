#ifndef BINOMIAL_HEAP_H
#define BINOMIAL_HEAP_H

typedef struct BINOMIAL_HEAP_DS bh_t;

bh_t *bh_create(void);
void bh_free(bh_t *bh);

#endif
