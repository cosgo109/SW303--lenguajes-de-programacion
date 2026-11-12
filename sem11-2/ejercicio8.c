#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;

    struct node *l, *r;
} Node;

Node* insert (Node **p, int value) {
    if (*p == NULL) {
        *p = malloc(sizeof(Node));
        (*p)->value = value;

        return *p;
    }
    else if (value < (*p)->value) {
        (*p)->l = insert(&((*p)->l), value);
        return (*p)->l;
    }
    else {
        (*p)->r = insert(&((*p)->r), value);
        return (*p)->r;
    }
}

int seekfor(Node *p, int value) {
    if (p == NULL) {
        return 0;
    }
    else if (value == p->value) {
        return 1;
    }
    else if (value < p->value) {
        return seekfor((p->l), value);
    }
    else {
        return seekfor((p->r), value);
    }
}

void printtree(Node *p) {

    if (p != NULL) {
        printtree(p->l);
        printf("value : %d\n", p->value);
        printtree(p->r);
    }

}

int main() {

    Node *TREE = NULL;

    // insert values ?
    insert(&TREE, 10);
    insert(&TREE, 12);
    insert(&TREE, 7);

    printtree(TREE);

    if (seekfor(TREE, 10)) {
        printf("found value 10\n");
    }
    else {
        printf("couldn't find value 10\n");
    }

    return 0;
}