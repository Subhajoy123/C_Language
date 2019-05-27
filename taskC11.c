// storing and displaying data form a structure
#include <stdio.h>

struct book{
    char title[50];
    char author[50];
    char genre[50];
};
void display(struct book p);
int main()
{
    struct book s;

    printf("Enter title of the book:");
    scanf ("%s", s.title);
	printf("Enter name of the author:");
    scanf("%s", s.author);
    printf("Enter name of the genre:");
    scanf("%s", s.genre);
    display(s);   
    return 0;
}
void display(struct book p) {
  printf("\nName: %s \n", p.title );
  printf("Author: %s", p.author);
  printf("\nGenre: %s", p.genre);
}
