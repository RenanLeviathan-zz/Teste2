#ifndef SPRITE_H
#define SPRITE_H
#include <iostream>
#include <string>
using namespace std;
class Sprite{
	private:
		int x,y,width,height,f_x,f_y;
		string src;
	public:
		Sprite(int,int,int,int,int,int,string);
		virtual ~Sprite();
		int getX(void);
		int getY(void);
		int getWidth(void);
		int getHeight(void);
		int getFrame_X(void);
		int getFrame_Y(void);
		string getSrc(void);
		//setters
		void setX(int);
		void setY(int);
		void setWidth(int);
		void setHeight(int);
		void setFrame_X(int);
		void setFrame_Y(int);
		void setSrc(string);
		
};
#endif
