#include<stdio.h>

// creating structure

struct cars{
    char brand[40];
    char model[40];
    int year;
};

int main()
{

    // defininng booklet

    struct cars car1 = {"Toyota ","Fortuner-Legender",2022};
    struct cars car2 = {"Mahindra ","XUV700",2022};
    struct cars car3 = {"MG ","Gloster",2019};

    // printing structures

    printf("%s%s was launched in %d \n",car1.brand,car1.model,car1.year);
    printf("%s%s was launched in %d \n",car2.brand,car2.model,car2.year);
    printf("%s%s was launched in %d",car3.brand,car3.model,car3.year);
}
