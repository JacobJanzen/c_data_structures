#ifndef QUEUE_H
#define QUEUE_H

typedef struct QUEUE_DS queue_t;

queue_t *queue_create(void);
void queue_enqueue(queue_t *q, void *data);
void *queue_dequeue(queue_t *q);
void *queue_peek(queue_t *q);
void queue_free(queue_t *q);

#endif
