#include <stdio.h>

int main(){

    float speed;
    int level;
    
    printf("Wpisz predkosc wiatru w metrach na sekundach\n");
    scanf("%f",&speed);

    //Conversion
    speed *= 1.94384f;

    //Beaufort scale
    if(speed < 1) level = 0;//Calm
    else if (speed < 4.0f) level = 1;//Light Air
    else if (speed < 7.0f) level = 2;//Light Breeze
    else if (speed < 11.0f) level = 3;//Gentle Breeze
    else if (speed < 17.0f) level = 4;//Moderate Breeze
    else if (speed < 22.0f) level = 5;//Fresh Breeze
    else if (speed < 28.0f) level = 6;//Strong Breeze
    else if (speed < 34.0f) level = 7;//Near Gale
    else if (speed < 41.0f) level = 8;//Gale
    else if (speed < 48.0f) level = 9;//Strong Gale
    else if (speed < 56.0f) level = 10;//Storm
    else if (speed < 64.0f) level = 11;//Violent Storm
    else level = 12;//Huricane

    //NOTE: most calculators "round up" the numbers to the next level, but it makes it inconsistent with the 0 level
    //And also some do not think 0 tier existst???

    printf("\n Sila wiatru: %d w skali Beauforta +%f ", level,speed);

    switch (level)
    {
    case 0:
        printf("(Calm)");
        break;
    case 1:
        printf("(Light Air)");
        break;
    case 2:
        printf("(Light Breeze)");
        break;
    case 3:
        printf("(Gentle Breeze)");
        break;
    case 4:
        printf("(Moderate Breeze)");
        break;
    case 5:
        printf("(Fresh Breeze)");
        break;
    case 6:
        printf("(Strong Breeze)");
        break;
    case 7:
        printf("(Near Gale)");
        break;
    case 8:
        printf("(Gale)");
        break;
    case 9:
        printf("(Stong Gale)");
        break;
    case 10:
        printf("(Storm)");
        break;    
    case 11:
        printf("(Violent Storm)");
        break;
    case 12:
        printf("(Hurricane)");
        break;

    default:
        printf("\nWRONG (INT LEVEL) VALUE");
        break;
    }

    return 0;
}