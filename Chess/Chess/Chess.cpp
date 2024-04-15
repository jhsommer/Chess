#include <iostream>
#include "SDL.h"
#include "Poligon.h"
using namespace std;

#define TIC_INTERVAL 16

int main(int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) == 0)
	{
		SDL_Window* window = NULL;
		SDL_Renderer* renderer = NULL;

		Poligon Test({ {0,0},{800,0},{400,800} }, 0.5);


		if (SDL_CreateWindowAndRenderer(800, 800, 0, &window, &renderer) == 0) {
			SDL_bool done = SDL_FALSE;

			while (!done) {
				SDL_Event event;
				
				
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);

				

				SDL_RenderClear(renderer);
				SDL_RenderPresent(renderer);

				Test.RenderArea(renderer);


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
	cin.get();
	return 0;
	
}

