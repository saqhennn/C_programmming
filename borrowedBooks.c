//BCS-05-0072/2026
#include <stdio.h>

int main()
{
    FILE *file;
    char title[100];

    file = fopen("C:\\Users\\User\\OneDrive\\Desktop\\weekly assignment\\borrowed_books.txt", "a");

    if (file == NULL)
    {
        printf("Error opening the file!\n");
        return 1;
    }

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(file, "%s", title);

    fclose(file);

    printf("Book title successfully stored!\n");

    return 0;
}

