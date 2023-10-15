#include <stdio.h>
int main()
{
    int marks,question;
    printf("enter the question number \n"
           "1. correct question\n"
           "2. incorrect question\n"
           "3. unattemted question\n");
    scanf("%d",&marks);

    switch (marks)
    {
    case 1:
        printf("you get 3 marks");
        break;
    
    case 2:
        printf("you get -1 marks");
        break;
    
    case 3:
        printf("you get 0 marks");
        break;
    
    
    default:
        printf("abscent");
        break;
    }
    
    return 0;
}
