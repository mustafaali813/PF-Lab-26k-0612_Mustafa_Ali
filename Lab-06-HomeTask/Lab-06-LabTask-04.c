#include<stdio.h>
int main(){
    int total_containers, cargo_type;
    float weight, result, code;
    printf("Enter total number of containers for todays day: ");
    scanf("%d", &total_containers);
    for(int count = 1; count <= total_containers; count++){
        printf("Enter weight of the container: ");
        scanf("%f", &weight);
        printf("Select cargo type.\n");
        printf("1. General Goods\n2. Hazardous Material\n3. Refrigerated Goods\n");
        printf("Enter choice: ");
        scanf("%d", &cargo_type);
        switch(cargo_type){
            case 1:
                if(weight <=20000){
                    printf("This conatiner may be loaded\n");
                }
                break;
             case 2:
                if(weight <=15000){
                    printf("This conatiner may be loaded\n");
                }
                break;
             case 3:
                if(weight <=18000){
                    printf("This conatiner may be loaded\n");
                }
                break;
            default:
                printf("Invalid cargo type!");
                break;
        }
        result = (int)weight % 97;
        code = (int)result % 100;
        printf("Total conatiner weight: %f\n", weight);
        printf("Conatiner traking code: %f\n", code);
    }
    return 0;
}