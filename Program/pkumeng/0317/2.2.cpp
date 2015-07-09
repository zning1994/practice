#include <iostream>
#include <stdio.h>
#include <malloc.h>
using namespace std;
typedef struct
{
    char *stk;
    int top;
    int size;
} stack;
void initstack(stack *s, char n)
{
    s->stk = (char*)malloc((s->size=n) * sizeof(char));
    s->top = 0;
}
int count=1;
void outputstack(stack* s)
{
    int i;
    cout<<count++<<", ";
    for(i=0; i<s->top; i++)
        cout<<s->stk[i]<<' ';
    cout<<endl;
}
int stackempty(stack* s)
{
    return !s->top;
}
void push(stack* s, char x)
{
    s->stk[s->top++] = x;
}
char pop(stack* s)
{
    return s->stk[--s->top];
}
void stackseq(stack *input, stack *s, stack *output)
{
    if(stackempty(input) && stackempty(s))
        outputstack(output);
    else
    {
        if(!stackempty(input))
        {
            push(s, pop(input));
            stackseq(input, s, output);
            push(input, pop(s));
        }
        if(!stackempty(s))
        {
            push(output, pop(s));
            stackseq(input, s, output);
            push(s, pop(output));
        }
    }
}
int main()
{
    int i;
    stack input, s, output;
    initstack(&input, 20);
    initstack(&s, 20);
    initstack(&output, 20);
    push(&input,'a');
    push(&input,'b');
    push(&input,'c');
    push(&input,'d');
    stackseq(&input, &s, &output);
    return 0;
}
