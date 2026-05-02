#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct node
    {
        char *url;
        struct node *next;
    }
    node;

void push(node **head, char *new_url);

int main(void)
{
    node *list = NULL;

    push(&list, "google.com");
    push(&list, "harvard.edu");
    push(&list, "cs50.net");

    node *ptr = list;
    while(ptr != NULL)
    {
        printf("%s -> ", ptr->url);
        ptr = ptr->next;
    }
     printf("NULL\n");
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}
void push(node **head, char *new_url)
{
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        return;
    }
    new_node->url = new_url;
    new_node->next = *head;
    *head = new_node;
}