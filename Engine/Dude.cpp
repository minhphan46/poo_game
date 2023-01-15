#include "Dude.h"
#include "Graphics.h"
void Dude::ClampToScreen()
{
	// va cham ngang
	const int right = x + width;
	if (x < 0) {
		x = 0;
	}
	else if (right >= Graphics::ScreenWidth) {
		x = (Graphics::ScreenWidth - 1) - width;
	}
	// va cham doc
	const int bottom = y + height;
	if (y < 0) {
		y = 0;
	}
	else if (bottom >= Graphics::ScreenHeight) {
		y = (Graphics::ScreenHeight - 1) - height;
	}
}
