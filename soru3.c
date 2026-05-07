#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *ch[26];
    int end;
};

struct Node *newNode() {
    struct Node *n = calloc(1, sizeof(struct Node));
    return n;
}

void insert(struct Node *r, char *s) {
    for (; *s; s++) {
        int i = *s - 'a';
        if (!r->ch[i]) r->ch[i] = newNode();
        r = r->ch[i];
    }
    r->end = 1;
}

int main() {
    struct Node *root = newNode();
    insert(root, "ace");
    return 0;
}
