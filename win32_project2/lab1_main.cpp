/*****************************************************************************
*
*
*	Starting code for lab1.
*
*	Complete this prolog header.
*
*
******************************************************************************/
#include <allegro.h>

int main(void) {
	allegro_init();
	set_color_depth(24);
	set_gfx_mode(GFX_SAFE, 640, 480, 0, 0);
	install_keyboard();
	set_keyboard_rate(500, 600);
	textprintf_ex(screen, font, 1, 1, makecol(0,255,0),-1, "Hello World!");
	textprintf_ex(screen, font, 1, 20, makecol(0,0,255), -1,"Press ESCape to quit");
	while(! key[KEY_ESC]);
	allegro_exit();
	return 0;
}
END_OF_MAIN()
