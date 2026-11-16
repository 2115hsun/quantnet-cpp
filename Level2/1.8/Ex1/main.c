/*
 * Objective:
 *   Print the contents of a struct Article (article number, quantity and a
 *   20-character description). The Article is initialised where it is
 *   declared and printed by Print(), which receives its address.
 */

#include <stdio.h>

/* An article in stock */
struct Article {
    int article_number;
    int quantity;
    char description[21];       /* 20 characters + '\0' */
};

/*
 * Print: prints every field of an Article.
 *   p: address of the Article to print
 */
void Print(struct Article *p)
{
    /* p->field is shorthand for (*p).field */
    printf("Article Number: %d\n", p->article_number);
    printf("Quantity: %d\n", p->quantity);
    printf("Description: %s\n", p->description);
}

int main(void)
{
    /* Initialise the fields in declaration order: number, quantity, description */
    struct Article article = {12345, 10, "Sample Article"};

    /* Pass the address so Print() reads the original struct instead of a copy */
    Print(&article);
    return 0;
}
