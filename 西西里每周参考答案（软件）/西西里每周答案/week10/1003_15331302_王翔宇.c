#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100][100];
    int top;
} stack;

void push(stack *s, char val[]) {
    strcpy(s->name[s->top], val);
    s->top++;
}

void pop(stack *s, char character[]) {
    --s->top;
    printf("%s %s\n", character, s->name[s->top]);
}
int main() {
    int n, i, operation;
    stack *src = (stack *)malloc(sizeof(stack));
    char ss[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d%s", &operation, ss);
        switch (operation) {
            case 1 : {
                    push(src, ss);
                    break;
                }
            case 2 : {
                    pop(src, ss);
                    break;
                }
        }
    }
    return 0;
}
