#ifndef __rozofs_storcli_trc_req_mode_e2String_h__
#define __rozofs_storcli_trc_req_mode_e2String_h__
#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/
#include <strings.h>

/*___________________________________________________________________
 
   Generated by enum2String.py 
   Date : Tuesday 2019 September 17, 18:40:46
   Command line : 
 ../../tools/enum2String.py -n rozofs_storcli_trc_req_mode_e -f rozofs_storcli.h -c 28

  ____________________________________________________________________
*/

/*_________________________________________________________________
 * Builds a string from an integer value supposed to be within
 * the enumerated list rozofs_storcli_trc_req_mode_e
 *
 * @param x : value from rozofs_storcli_trc_req_mode_e to translate into a string
 *
 * The input value is translated into a string deduced from the enum
 * definition. When the input value do not fit any of the predefined
 * values, "??" is returned
 *
 * @return A char pointer to the constant string or "??"
 *_________________________________________________________________*/ 
static inline char * rozofs_storcli_trc_req_mode_e2String (const rozofs_storcli_trc_req_mode_e x) {
  switch(x) {
    case rozofs_storcli_trc_req_mode_tcp         : return("tcp");
    case rozofs_storcli_trc_req_mode_standalone  : return("standalone");
    case rozofs_storcli_trc_req_mode_rdma        : return("rdma");
    /* Unexpected value */
    default: return "??";
  }
}

#ifdef	__cplusplus
}
#endif
#endif
