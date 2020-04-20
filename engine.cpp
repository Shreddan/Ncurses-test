#include "engine.hpp"

Engine::Engine()
{
	initscr();
	keypad(stdscr, true);
	raw();
	noecho();
}

Engine::~Engine()
{
	endwin();
}

void Engine::Update()
{
	printw("Hello World!");
	refresh();
	ch = getch();
	while (stdscr)
	{
		refresh();
		addch('#');
		//Input(ch);
	}
	
}

/*void Engine::Input(int &ch)
{
	switch (ch)
	{
		case KEY_LEFT(1):
			{
				
			}
	}
}*/
