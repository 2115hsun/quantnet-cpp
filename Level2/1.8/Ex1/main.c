/*
 * Level 2 - 1.8 Exercise 1
 * Define struct Article (article number, quantity, 20-char description).
 * Create an Article initialised at declaration and print it with
 * Print(), which takes the struct's address (use p->field).
*/

#include <stdio.h>

struct Article {
    int article_number;
    int quantity;
    char description[21];
};

void Print(struct Article *p)
{
    printf("Article Number: %d\n", p->article_number);
    printf("Quantity: %d\n", p->quantity);
    printf("Description: %s\n", p->description);
}

int main(void)
{
    struct Article article = {12345, 10, "Sample Article"};
    Print(&article);
    return 0;
}