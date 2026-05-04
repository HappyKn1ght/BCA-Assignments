//Traffic Light System.
#include<stdio.h>
#include<string.h>
int main(){
    char color[10];
    printf("\n___________________________________________");
    printf("\nWELCOME TO TRAFFIC LIGHT SYSTEM SIMULATION\n");
    printf("___________________________________________\n");
    printf("Enter the traffic color: ");
    scanf("%s", &color);

    if(strcmp(color, "red") ==0){
        printf("STOP.\n");
    }
    else if(strcmp(color, "green")==0){
        printf("READY TO MOVE.\n");
    }
    else if(strcmp(color, "yellow")==0){
        printf("GO.\n");
    }
    else{
        printf("invalid color!\nPlease input valid color of traffic light system.");
    }
    return 0;
}