#include "Sprite.h"
#include <string>
#include <iostream>
Sprite::Sprite(int x, int y, int w, int h, int fx, int fy, string src){
	this->x=x;
	this->y=y;
	width=w;
	height=h;
	f_x=fx;
	f_y=fy;
	this->src=src;
}

Sprite::~Sprite(){
	
}

int Sprite::getX(){
	return x;
}

int Sprite::getY(){
	return y;
}

int Sprite::getWidth(){
	return width;
}

int Sprite::getHeight(){
	return height;
}

int Sprite::getFrame_X(){
	return f_x;
}

int Sprite::getFrame_Y(){
	return f_y;
}

string Sprite::getSrc(){
	return src;
}

void Sprite::setFrame_X(int fx){
	f_x=fx;
}

void Sprite::setFrame_Y(int fy){
	f_y=fy;
}

void Sprite::setX(int x){
	this->x=x;
}

void Sprite::setY(int y){
	this->y=y;
}

void Sprite::setWidth(int w){
	width=w;
}

void Sprite::setHeight(int h){
	height=h;
}

void Sprite::setSrc(string src){
	this->src=src;
}
