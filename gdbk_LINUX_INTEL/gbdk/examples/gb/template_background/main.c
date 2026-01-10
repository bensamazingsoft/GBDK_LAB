#include <gb/gb.h>
#include <stdint.h>
#include "LaroldsJubilantJunkyard.h"


void main(void)
{
    // Loop forever
    while(1) {


		// Game main loop processing goes here

        DISPLAY_ON;  // Turn on the display
        SHOW_BKG;    // Show the background layer
        
        // Load & set our background data
        set_bkg_data(0,178,LaroldsJubilantJunkyard_data);
        
        // The gameboy screen is 160px wide by 144px tall
        // We deal with tiles that are 8px wide and 8px tall
        // 160/8 = 20, and 144/8 = 18
        set_bkg_tiles(0,0,20,18,LaroldsJubilantJunkyard_map_plane0);

		// Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}
