#include <stdio.h>
#include <malloc.h>
#include "StudentList.h"
#include "GradesOperations.h"

int main() {
    StudentList * Lis = createList();
    printStudentList(Lis);

    printf("%d\n" , NumberOfStudents(Lis));
    printf("%d\n" , NumberOfStudentsFirstEx(Lis));
    printf("%d\n" , NumberOfStudentsSecondEx(Lis));
    printf("%.2f \n" , CheckIfPassInA(Lis));
//    printf("%.2f \n" , CheckIfPassInB(Lis));



    return 0;
}
