#include <stdio.h>
#include <stdlib.h>

void addStudent();
void displayStudent();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====");
        printf("\n1. Add Student");
        printf("\n2. Display Records");
        printf("\n3. Search Student");
        printf("\n4. Update Record");
        printf("\n5. Delete Record");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("\nProgram Ended");
                exit(0);

            default:
                printf("\nInvalid Choice");
        }
    }

    return 0;
}

void addStudent()
{
    printf("\nAdd Student Function");
}

void displayStudent()
{
    printf("\nDisplay Function");
}

void searchStudent()
{
    printf("\nSearch Function");
}

void updateStudent()
{
    printf("\nUpdate Function");
}

void deleteStudent()
{
    printf("\nDelete Function");
}
