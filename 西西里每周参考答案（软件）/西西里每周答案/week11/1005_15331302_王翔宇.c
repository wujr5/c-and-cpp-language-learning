#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int data[1000];
    int top;
} StackNum;
void Numpush(StackNum *s, int val) {
    s->data[s->top++] = val;
}
int Numpop(StackNum *s) {
    if (s->top != 0) {
        return s->data[--s->top];
    } else return 0;
}

typedef struct {
    char data[1000];
    int top;
} StackOp;
void Oppush(StackOp *s, int ops) {
    s->data[s->top++] = ops;
}
char Oppop(StackOp *s) {
    return s->data[--s->top];
}

int calc(char *s);
int judgeam(char c);
int judgemd(char c);
int judgesloc(char c);
int judgeNum(char c);
int getnum(char *e, int *num);
char s[200];

int main() {
    int ans = 0;
    while (~scanf("%s", s)) {
        ans = calc(s);
        printf("%d\n", ans);
    }
    return 0;
}

int calc(char *s) {
    StackNum *snum = (StackNum *)malloc(sizeof(StackNum));
    StackOp *sop = (StackOp *)malloc(sizeof(StackOp));
    memset(snum, 0, sizeof(StackNum));
    memset(sop, 0, sizeof(StackOp));
    int i = 0, sum = 0, num;
    char ch;
    while ((ch = s[i]) != '\0') {
        if (judgeNum(ch)) {
            i += getnum(s + i, &num);
            Numpush(snum, num);
            continue;
        } else if (ch == '-' && judgeNum(s[i + 1]) && s[i - 1] == '(') {
            i += getnum(s + i + 1, &num) + 2;
            Numpush(snum, num * -1);
            continue;
        } else if (judgeam(ch) || judgemd(ch)) {
            Oppush(sop, ch);
        } else if (ch == '(') {
            ;
        } else if (ch == ')') {
            int num1, num2, nums;
            char op;
            num2 = Numpop(snum);
            num1 = Numpop(snum);
            op = Oppop(sop);
            switch (op) {
                case '+' : {
                        nums = num1 + num2;
                        break;
                    }
                case '-' : {
                        nums = num1 - num2;
                        break;
                    }
                case '*' : {
                        nums = num1 * num2;
                        break;
                    }
                case '/' : {
                        nums = num1 / num2;
                        break;
                    }
            }
            Numpush(snum, nums);

        }
        i++;
    }
    return Numpop(snum);
}

int judgeam(char c) {
    return c == '+' || c == '-';
}
int judgemd(char c) {
    return c == '*' || c == '/';
}
int judgesloc(char c) {
    return c == '(' || c == ')';
}
int judgeNum(char c) {
    return c >= 48 && c <= 57;
}

int getnum(char *e, int *num) {
    *num = 0;
    int m = 0;
    while (judgeNum(*e)) {
        *num *= 10;
        *num += *e - 48;
        e++;
        m++;
    }
    return m;
}
