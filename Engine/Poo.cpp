#include "Poo.h"
#include "Graphics.h"

void Poo::Update() {
	x += vx;
	y += vy;

	const int right = x + width;
	if (x < 0) {
		x = 0;
		vx = -vx;
	}
	else if (right >= Graphics::ScreenWidth) {
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const int bottom = y + height;
	if (y < 0) {
		y = 0;
		vy = -vy;
	}
	else if (bottom >= Graphics::ScreenHeight) {
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}
}

void Poo::ProcessConsumption(int dudex, int dudey, int dudewidth, int dudeheight)
{
	const int dudeRight = dudex + dudewidth; // face
	const int dudeBottom = dudey + dudeheight;
	const int pooRight = x + width; // poo
	const int pooBottom = y + height;

	if (dudeRight >= x &&
		dudex <= pooRight &&
		dudeBottom >= y &&
		dudey <= pooBottom)
	{
		isEaten = true;
	}
		
}
