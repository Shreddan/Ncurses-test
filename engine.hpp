#include <curses.h>
#include <iostream>


class Engine
{
public:
	Engine();
	~Engine();
	
	void Update();
	void Input(int &ch);

private:
	int ch = 0;
};
