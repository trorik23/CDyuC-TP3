#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "shell.h"

#ifdef __cplusplus
extern "C"
#endif
void MCU_init(void); /* Device initialization function declaration */

void main(void) {
	MCU_init();
	// shell_reset imprimi todos los comandos disponibles y
	// resetea las interrupciones
	shell_reset();
	for (;;) {
		// shell_update chequea si hay un comando para ejecutar
		shell_update();
	}
}

