//
//  main.c
//  area of triangle
//
//  Created by John Tan on 4/7/15.
//  Copyright (c) 2015 John Tan. All rights reserved.
//

#include <stdio.h>
float calculateThirdAngle (float angleOne, float angleTwo);

int main(int argc, const char * argv[]) {
    // insert code here...
    float angleOne;
    float angleTwo;
    float angleThree;
    printf("Please enter first angle of the triangle: \n");
    scanf("%f",&angleOne);
    printf("Please enter Second angle of the triangle: \n");
    scanf("%f",&angleTwo);
    
    angleThree= calculateThirdAngle(angleOne,angleTwo);
    
    printf("The third angle is %.2f\n", angleThree);
    
    return 0;
}

float calculateThirdAngle (float angleOne, float angleTwo) {
    float thirdAngle;
    thirdAngle = 180 - angleTwo - angleOne;
    return thirdAngle;
}