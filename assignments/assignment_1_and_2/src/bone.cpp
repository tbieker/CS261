//Tyler Bieker
//CS 261
//Project 1 Bone Implementation
//06/24/2016

#include "bone.h"

Bone::Bone(){
    return;
}

Bone::Bone(int sideA, int sideB){
    sideOne = sideA;
    sideTwo = sideB;
    setDouble();
    return;
}

void Bone::setSides(int sideA, int sideB){
    sideOne = sideA;
    sideTwo = sideB;
    setDouble();
    return;
}

void Bone::returnSides(int& sideA, int& sideB){
    sideA = sideOne;
    sideB = sideTwo;
    return;
}

bool Bone::returnIsDouble(){
    std::cout << "returnIsDouble: " << isDouble << std::endl;
	
	return isDouble;
}

const Bone& Bone::operator=(const Bone& aBone){
    sideOne = aBone.sideOne;
    sideTwo = aBone.sideTwo;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Bone& aBone){
    out << aBone.sideOne
        << '-'
        << aBone.sideTwo;
    return out;
}



void Bone::print(){ //print in format |sideOne|sideTwo|
	std::cout << '|' << sideOne << '|' << sideTwo << '|';
}

void Bone::swap(){  //swap ends of bone
	int temp;
	temp = sideOne;
	sideOne = sideTwo;
	sideTwo = temp;
	return;
}

void Bone::setDouble(){
	if(sideOne == sideTwo){
		isDouble = true;
	}else{
		isDouble = false;
	}
	return;
}