//main.c



#include "student.h"

int main()
{
    Student *head;
    head = load_record();
    char choice;

    while(1)
    {
        printf("\n");
        printf("------------------MENU---------------------------\n");
        printf("a/A : Add a new student record\n");
        printf("p/P : Print the records from database\n");
        printf("s/S : Save the database in a file\n");
        printf("d/D : Delete a record\n");
        printf("e/E : Edit a record\n");
        printf("      1) For name edit\n");
        printf("      2) For DOB\n");
        printf("      3) For percentage\n");
        printf("      4) For contact\n");
        printf("      6) For email id\n");
        printf("f/F : Find a student\n");
        printf("r/R : Reverse the records of current display\n");
        printf("q/Q : Quit from app\n");
        printf("-------------------------------------------------\n");

        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'a':
            case 'A':
                head = add_record(head);
                break;

            case 'p':
            case 'P':
                print_record(head);
                break;

            case 's':
            case 'S':
                save_record(head);
                break;

            case 'd':
            case 'D':
                head = delete_record(head);
                break;

            case 'e':
            case 'E':
                head = edit_record(head);
                break;

            case 'f':
            case 'F':
                find_record(head);
                break;

            case 'r':
            case 'R':
                reverse_record(head);
                break;

            case 'q':
            case 'Q':
                printf("Exiting application...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}