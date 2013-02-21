/*
 * xerrno.h
 *
 *  Created on: Nov 14, 2012
 *      Author: caoj7
 */

#ifndef XERRNO_H_
#define XERRNO_H_

#include "common.h"
BEGIN_C_DECLS

#include <errno.h>

/* general return codes */
#define X_SUCCESS   0
#define X_ERROR    -1
#define X_FAILURE  -1

enum {
	/* General Message error codes */
	X_UNEXPECTED_MSG_ERROR = 			1000,
	X_COMMUNICATIONS_CONNECTION_ERROR,
	X_COMMUNICATIONS_SEND_ERROR,
	X_COMMUNICATIONS_RECEIVE_ERROR,
	X_PROTOCOL_VERSION_ERROR,
	X_PROTOCOL_IO_STREAM_VERSION_ERROR,

	//X_ctld communication failure
	X_CTLD_COMMUNICATIONS_CONNECTION_ERROR =     2000,
	X_CTLD_COMMUNICATIONS_SEND_ERROR,
	X_CTLD_COMMUNICATIONS_RECEIVE_ERROR,
	X_CTLD_COMMUNICATIONS_SHUTDOWN_ERROR,

	//X_d node daemon error
	X_D_CANNOT_SPAWN_IO_THREAD =     3000,
	X_D_FORK_FAILED,
	X_D_EXECVE_FAILED
};

/* Set errno to the specified value. */
extern void x_set_errnum PARAMS((int errnum));

/* get an errno value */
extern int x_get_errno PARAMS((void));

/* look up an errno value */
extern char* x_errnum_to_str PARAMS((int errnum));

/* print message: error string for current errno value */
extern void x_perror PARAMS((char *msg));

END_C_DECLS


#endif /* XERRNO_H_ */
