#include <stdio.h>

typedef struct Movie {
    char title[50];
    char director[50];
    int year;
    char genre[30];
} Movie;

void store(Movie* mov, int size);
void display(Movie* mov, int size);

void main() {
    Movie mov[20];
    int size = 3;

    store(mov, size);
    display(mov, size);

   int added= add(mov,size);

display(mov, added );
}

void store(Movie* mov, int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEnter details for movie %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", mov[i].title); 

        printf("Director: ");
        scanf(" %[^\n]", mov[i].director);

        printf("Release Year: ");
        scanf("%d", &mov[i].year);

        printf("Genre: ");
        scanf(" %[^\n]", mov[i].genre);
    }
}

void display(Movie* mov, int size) {
    printf("\n--- Movie List ---\n");

    for (int i = 0; i < size; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title   : %s\n", mov[i].title);
        printf("Director: %s\n", mov[i].director);
        printf("Year    : %d\n", mov[i].year);
        printf("Genre   : %s\n", mov[i].genre);
    }
}
int add(Movie* mov, int size) {
    int n;
    printf("no of movies do you want to add: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for movie %d:\n", size + i + 1);

        printf("Title: ");
        scanf(" %[^\n]", mov[size + i].title);

        printf("Director: ");
        scanf(" %[^\n]", mov[size + i].director);

        printf("Release Year: ");
        scanf("%d", &mov[size + i].year);

        printf("Genre: ");
        scanf(" %[^\n]", mov[size + i].genre);
    }

    printf("\n%d movies added successfully!\n", n);
    return (size + n);
}







