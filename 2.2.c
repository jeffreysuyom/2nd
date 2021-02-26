#include<stdio.h>
int main()
{
	int age;
	char name[20];

    printf("Name:");
    scanf("%s", &name);
    printf("Age:");
    scanf("%d", &age);


	if(age>=1){

            if(age>=18){
            printf("You are eligible to vote");}
            else {
            printf("You are not eligible to vote");
	}
	}
	else{
		printf("Invalid Age, Please Try Again!");
	}

	return 0;
}
