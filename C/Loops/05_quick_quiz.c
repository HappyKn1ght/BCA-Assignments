/*Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop 
counter is initialized to 0. 
Note that The loop counter need not be int, it can be float as well.*/

#include<stdio.h> //despite of all below three code i liked this

int main(){
    int i = 10;
    while(i<=20){
        printf("%d\n",i);
        i++;
    }
    return 0;
}

/*we can also write the above code in below format 
#include<stdio.h>

int main(){
    int i = 10;
    while(i<21){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
*/

/* we can also write the above code in below format 
#include<stdio.h>

int main(){
    int i = 0;
    while(i<=20){
        if(i>=10){
        printf("%d\n",i);
        }
        i++;
    }
    return 0;
} */

