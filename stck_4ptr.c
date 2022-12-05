#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct Stack
{
    int count;
    int capacity;
    int *data;
} Stack;
Stack create_stack(int initialcapacity)
{
    Stack new_stack;
    new_stack.count = 0;
    new_stack.capacity = initialcapacity;

    if (!(new_stack.data = malloc(initialcapacity * sizeof(int))))
        printf("not enough memory!");

    return new_stack;
}
//Stack stack = create_stack(10);
int delete_stack(Stack *stack)
{
    stack->count = 0;
    stack->capacity = 0;
    free(stack->data);
    stack->data = NULL;
    return 0;
}
void push(int value, Stack *stack)
{   
    if (stack->count == stack->capacity)
    {   
        int *temp = malloc(stack->capacity * sizeof(int));

        int i;
        for (i = 0; i < stack->count; i++)
            temp[i] = stack->data[i];

        free(stack->data);
        stack->data = NULL;

        stack->data = malloc(stack->capacity * 2 * sizeof(int));

        for (i; i > -1; i--)
            stack->data[i] = temp[i];

        free(temp);
        temp = NULL;
        stack->data[stack->count] = value;
        stack->count++;
        stack->capacity = stack->capacity * 2;
    }
    else{    
    stack->data[stack->count] = value;
        stack->count++;

    }
    
}