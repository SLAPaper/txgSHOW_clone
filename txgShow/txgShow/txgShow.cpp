#include "stdafx.h"

#include "readm.h"
#pragma comment(lib,"ReadMemory.lib") 
#include "include/SDL.h"
#pragma comment(lib,"SDL2.lib") 
#pragma comment(lib,"SDL2main.lib") 
#include "windows.h"
#include "iostream"
using namespace std;

const int SCREEN_WIDTH = 582;
const int SCREEN_HEIGHT = 672;

SDL_Window *window = nullptr;
SDL_Renderer *ren = nullptr;

BOOL toren = true;

class Round
{
public:
	float X, Y;
		int R;
	Round(int x, int y, int r)
	{
		X = SCREEN_WIDTH*(x/194.0/2.0+0.5); Y = SCREEN_HEIGHT*y /446.0; R = sqrt(SCREEN_HEIGHT*SCREEN_WIDTH*r/388.0/446.0);
	}
};
void round(Round A, int S)
{
	while (A.R > 0) {


		SDL_Point *point = (SDL_Point*)malloc((S + 2)*sizeof(SDL_Point));
		float O = 360.0 / S;
		for (int i = 0; i < S + 2; i++)
		{
			point[i].x = A.X - A.R*(cos(O*i*3.14 / 180));
			point[i].y = A.Y - A.R*(sin(O*i*3.14 / 180));
		}
		SDL_RenderDrawLines(ren, point, S + 2);
		free(point);
		A.R-=2;
	}
};



void mainloop()
{
	
	if (getci() == 3)
	{
		SDL_RenderPresent(ren);
		SDL_SetRenderDrawColor(ren, 5, 10, 5, 255);
		SDL_RenderClear(ren);
		addCount();
		toren = true;
		SDL_SetRenderDrawColor(ren, 255, 255, 0, 255);
		Round A(getzijiX(), getzijiY(), 9);
		round(A, 8);

	}
	else if (getcontinue() == 1)
		{
			setcontinue(0);
			SDL_SetRenderDrawColor(ren, 255, 0, 0, 255);
			Round A(getdanmuX(), getdanmuY(), getR());
			round(A, 32);		
		}

}



int main(int argc, char** argv) {
	SDL_Event *evlp = new SDL_Event;
	SDL_Init(SDL_INIT_VIDEO); // Init SDL2

	window = SDL_CreateWindow("txgshow", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_RESIZABLE);
	/*HWND HWnd = FindWindowA(NULL, "txgshow");
	SetWindowLong(HWnd, GWL_EXSTYLE,
		GetWindowLong(HWnd, GWL_EXSTYLE) ^ 0x80000^WS_EX_TRANSPARENT);
	SetLayeredWindowAttributes(HWnd, 0, 100, LWA_ALPHA);
	SetWindowPos(HWnd, HWND_TOPMOST, 0, 0, 0, 0,
		SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);*///´°¿ÚÖÃ¶¥Í¸Ã÷
	ren = SDL_CreateRenderer(window, -1, 0);
	
	for (; evlp->type != SDL_QUIT; SDL_PollEvent(evlp)) {
	
		mainloop();

	}

	free(evlp);
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}