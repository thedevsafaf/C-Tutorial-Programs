#include <stdio.h>
int main(){
    float physics,maths,chemistry,social,english;
    float no_of_subjects = 5;
    float marks_total = 500;
    float marks_obtained,average,percentage;
    printf("\nEnter Subject Marks in 100");
    printf("\n\nPhysics: ");
    scanf("%f",&physics);
    printf("\nMaths: ");
    scanf("%f",&maths);
    printf("\nChemistry: ");
    scanf("%f",&chemistry);
    printf("\nSocial: ");
    scanf("%f",&social);
    printf("\nEnglish: ");
    scanf("%f",&english);
    marks_obtained = physics+maths+chemistry+social+english;
    average = marks_obtained/no_of_subjects;
    percentage = (marks_obtained/marks_total)*100;
    printf("\n\nmarks obtained: %.2lf",marks_obtained);
    printf("\nmarks total: %.2lf", marks_total);
    printf("\nAverage : %.2lf", average);
    printf("\nPercentage : %.2lf\n\n\n", percentage);
    return 0;

}