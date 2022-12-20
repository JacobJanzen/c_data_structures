#include "../../include/queue.h"

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_CAPACITY 8

typedef struct NODE {
    void *data;
    struct NODE *next;
} node_t;

typedef struct QUEUE_DS {
    node_t *head;
    node_t *tail;
} queue_t;

queue_t *queue_create(void) {
    queue_t *q = malloc(sizeof(queue_t));
    if (!q)
        return NULL;

    return q;
}

void queue_enqueue(queue_t *q, void *data) {
    if (!q)
        return;

    node_t *new_node = malloc(sizeof(node_t));
    if (!new_node)
        return;

    new_node->data = data;
    if (!q->tail) {
        q->head = new_node;
        q->tail = new_node;
    } else {
        q->tail->next = new_node;
        q->tail = q->tail->next;
    }
}

void *queue_dequeue(queue_t *q) {
    if (!q || !q->head)
        return NULL;

    node_t *node = q->head;
    q->head = node->next;

    void *data = node->data;

    free(node);

    return data;
}

void *queue_peek(queue_t *q) {
    if (!q || !q->head)
        return NULL;

    return q->head->data;
}

void queue_free(queue_t *q) {
    if (q) {
        free(q);
    }
}
