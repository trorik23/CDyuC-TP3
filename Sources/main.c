#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "buffertx.h"
#include "sound.h"

#ifdef __cplusplus
extern "C"
#endif
void MCU_init(void); /* Device initialization function declaration */

void main(void) {
	MCU_init(); /* call Device Initialization */

	//PTCDS=0xFF;
	buffertx_send_str("\r\nBIENVENIDOS\r\n > ");

	sound_init();

	for (;;) {
	}

}

