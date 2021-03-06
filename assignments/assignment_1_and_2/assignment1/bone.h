//Tyler Bieker
//CS 261
//Project 1 Bone Class
//06/24/2016

//object that holds two ends with values 1-9

#ifndef _BONE_
#define _BONE_

#include <iostream>

class Bone{
private:
    int sideOne;
    int sideTwo;
    bool isDouble;

public:
    Bone();
    Bone(int sideA, int sideB); //constructor to set sides

    void setSides(int sideA, int sideB);
    void returnSides(int& sideA, int& sideB);
    bool returnIsDouble();  //return true if bone is double number

    const Bone& operator=(const Bone& aBone);
    friend std::ostream& operator<<(std::ostream& out, const Bone& aBone);
};

#endif
