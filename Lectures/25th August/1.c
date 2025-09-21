#include<stdio.h>
struct details{
    char str[10];
    int roll_no;
    float marks;
};

void update(struct details *s){
    float newmark;
    printf("\nEnter new marks: ");
    scanf("%f",&newmark);
    s->marks=newmark;
}

int main(){
    struct details s1={"Sai",89,55.4};
    printf("Name: %s Roll No: %d Marks: %.2f",s1.str,s1.roll_no,s1.marks);
    update(&s1);
    printf("\nUpdated: Name: %s Roll No: %d Marks: %.2f",s1.str,s1.roll_no,s1.marks);
    s1.marks=200;
    printf("\nNew Updated: Name: %s Roll No: %d Marks: %.2f",s1.str,s1.roll_no,s1.marks);


    return 0;
}