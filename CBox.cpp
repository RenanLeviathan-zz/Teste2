#include "CBox.h"
CBox::CBox(int x, int y, int w, int h){
	this->x=x;
	this->y=y;
	width=w;
	height=h;
}

CBox::~CBox(){
	
}

int CBox::getX(){
	return x;
}

int CBox::getY(){
	return y;
}

int CBox::getWidth(){
	return width;
}

int CBox::getHeight(){
	return height;
}

void CBox::setX(int x){
	this->x=x;
}

void CBox::setY(int y){
	this->y=y;
}

void CBox::setWidth(int w){
	width=w;
}

void CBox::setHeight(int h){
	height=h;
}
