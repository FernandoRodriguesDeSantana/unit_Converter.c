#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char option1 [20], sunit[20];
    float value = 0, unit = 0;
    int i;

    printf("Hi! Welcome! This is a unit converter program. Enjoy =D");

    printf("\n\nSelect a quantity to convert:\n1-Mass\n2-Time\n3-Temperature\nEnter: ");
    scanf("%s", &option1);

    if(option1 == "Mass" || option1 == "mass"){
        printf("\nEnter the mass value and your unit: ");
        scanf("%f%s", &value, &sunit);

        if(sunit == "Kg" || sunit == "kg" || sunit == "KG"){
            unit = 1000;
        }
        else if(sunit == "Hg" || sunit == "hg" || sunit == "HG"){
            unit = 100;
        }
        else if(sunit == "Dag" || sunit == "dag" || sunit == "DAG"){
            unit = 10;
        }
        else if(sunit == "g" || sunit == "G"){
            unit = 1;
        }
        else if(sunit == "Dg" || sunit == "dg" || sunit == "DG"){
            unit = 0.1;
        }
        else if(sunit == "Cg" || sunit == "cg" || sunit == "CG"){
            unit = 0.01;
        }        
        else if(sunit == "Mg" || sunit == "mg" || sunit == "MG"){
            unit = 0.001;
        }
        else{
            printf("\nError. Try it again.");
        }

         
    }
    else if(option1 == "Time" || option1 == "time"){
        
    }
    else if(option1 == "Temperature" || option1 == "temperature"){
        
    }
    else{
        printf("Something is wrong. Try it again, please.");
    }

    



    return 0;
}
