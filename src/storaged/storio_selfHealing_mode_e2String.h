#ifndef __storio_selfHealing_mode_e2String_h__
#define __storio_selfHealing_mode_e2String_h__
#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/
#include <strings.h>

/*___________________________________________________________________
 
   Generated by enum2String.py 
   Date : Wednesday 2018 February 14, 08:56:54
   Command line : 
 ../../tools/enum2String.py -n storio_selfHealing_mode_e -f storio_device_monitor.c -c 24

  ____________________________________________________________________
*/

/*_________________________________________________________________
 * Builds a string from an integer value supposed to be within
 * the enumerated list storio_selfHealing_mode_e
 *
 * @param x : value from storio_selfHealing_mode_e to translate into a string
 *
 * The input value is translated into a string deduced from the enum
 * definition. When the input value do not fit any of the predefined
 * values, "??" is returned
 *
 * @return A char pointer to the constant string or "??"
 *_________________________________________________________________*/ 
static inline char * storio_selfHealing_mode_e2String (const storio_selfHealing_mode_e x) {
  switch(x) {
    case storio_selfHealing_mode_spare           : return("spare");
    case storio_selfHealing_mode_relocate        : return("relocate");
    case storio_selfHealing_mode_resecure        : return("resecure");
    /* Unexpected value */
    default: return "??";
  }
}

#ifdef	__cplusplus
}
#endif
#endif

