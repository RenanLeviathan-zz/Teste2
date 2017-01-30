#ifndef CBOX_H
#define CBOX_H
class CBox{
	private:
		int x,y,width,height;
	public:
		CBox(int,int,int,int);
		virtual ~CBox();
		int getX(void);
		int getY(void);
		int getWidth(void);
		int getHeight(void);
		//setters
		void setX(int);
		void setY(int);
		void setWidth(int);
		void setHeight(int);
};
#endif
