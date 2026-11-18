/*
 * Objective:
 *   Print the contents of an Article struct (article number, quantity and
 *   a 20-character description). I fill in the Article when I declare it,
 *   then print it with Print(), which takes its address.
 */

#include <stdio.h>

/* One article in stock */
struct Article {
    int article_number;
    int quantity;
    char description[21];       /* 20 characters plus the '\0' */
};

/*
 * Print: prints every field of an Article.
 *   p: address of the Article
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
    /* Values go in the same order as the fields: number, quantity, description */
    struct Article article = {12345, 10, "Sample Article"};

    /* I pass the address so Print() works with the original struct, not a copy */
    Print(&article);
    return 0;
}
