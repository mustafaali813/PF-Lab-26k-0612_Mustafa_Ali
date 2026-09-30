#include<stdio.h>
int main(){
    int access_number, hour;
    int Late_night, allowed, trainer_access;
    while(1){
        printf("Enter you Access Number(9999 to exit): ");
        scanf("%d", &access_number);
        if(access_number== 9999){
            break;
        }
        printf("Enter hour number(1-24): ");
        scanf("%d", &hour);
        Late_night = ((hour>=22) && (hour< 6))? "Late Night Mode" : "Standard Mode";
        if(Late_night){
            allowed = access_number & 8;
        }
        else{
            allowed = access_number & (1|2|4);
        }
        if(allowed){
            printf("Entry Greanted\n");
        }
        else{
            printf("Entry Denied\n");
        }
        trainer_access = access_number & 4;
        if(trainer_access){
            printf("Trainer Access Granted\n");
        }
        else{
            printf("Trainer Access Denied\n");
        }
    }
    return 0;
}