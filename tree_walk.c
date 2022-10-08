#include <stdio.h>
#define MAX 10000
#define NIL -1

struct Node { int p, l, r; };
struct Node T[MAX];
int n;

// Preorder
void preParse(int u) {
    if (u == NIL) return;
    printf(" %d", u);
    preParse(T[u].l);
    preParse(T[u].r);
}

// Inorder
void inParse(int u) {
    if (u == NIL) return ;
    inParse(T[u].l);
    printf(" %d", u);
    inParse(T[u].r);
}

// Postorder
void postParse(int u) {
    if (u == NIL) return ;
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d", u);
}
