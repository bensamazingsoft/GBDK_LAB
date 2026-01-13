#include <gb/gb.h>
#include <stdint.h>
#include "New_tileset.h"

void main(void)
{
    DISPLAY_ON;
    SHOW_SPRITES;

    set_sprite_data(0,1,new_tileset);

    set_sprite_tile(0,0);
    move_sprite(0,84,88);

    // Loop forever
    while (1)
    {

        // Game main loop processing goes here

        // Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}
