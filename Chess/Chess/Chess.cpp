#include <iostream>
#include "SDL.h"
#include <windows.h>
using namespace std;

#define TIC_INTERVAL 16

int main(int argc, char* argv[])
{
	//SetDllDirectory("C:\SDL2 - devel - 2.0.18 - VC\SDL2 - 2.0.18\lib\x86\SDL2.dll");
	if (SDL_Init(SDL_INIT_VIDEO) == 0)
	{
		SDL_Window* window = NULL;
		SDL_Renderer* renderer = NULL;

		if (SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer) == 0) {
			SDL_bool done = SDL_FALSE;

			while (!done) {
				SDL_Event event;

				SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
				SDL_RenderClear(renderer);
				SDL_RenderPresent(renderer);

				while (SDL_PollEvent(&event)) {
					if (event.type == SDL_QUIT) {
						done = SDL_TRUE;
					}
				}
			}
			if (renderer) {
				SDL_DestroyRenderer(renderer);
			}
			if (window) {
				SDL_DestroyWindow(window);
			}
		}

	cout << "SDL initialization failed. SDL Error: " << SDL_GetError();
	}
	else
	{
	cout << "SDL initialization succeeded!";
	}
	SDL_Quit();
	//cin.get();
	return 0;
	
}

