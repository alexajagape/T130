#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE*fptr;
    char n[500];
    int i, id, total, average, student;
    float grades;
    int math, science, english;

    fptr=fopen("gante.txt", "w");
    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }
    printf("Number of Student:");
    scanf("%d", student);

        for(i=0; i<student; i++){
            printf("\nStudent Name: ");
            scanf("\n%[^\n]s", n);
            printf("Students ID Number: ");
            scanf("%d", &id);
            printf("Math Grade: ");
            scanf("%d", &math);
            printf("Science Grade: ");
            scanf("%d", &science);
            printf("English Grade: ");
            scanf("%d", &english);

        total=math+science+english;
            printf("Total Grade = %d", total);
                average=(math+science+english)/3;
                    printf("\nGrade average = %d\n", average);
        }
        fprintf(fptr,"%s %d %d %d %d %d %d %d", n, id, math, science, english, average, total);
        fclose(fptr);

        return 0;
}
