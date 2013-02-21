/*
 * X_errno.c
 *
 *  Created on: Nov 12, 2012
 *      Author: caoj7
 */
#include "xerrno.h"


/* Type for error string table entries */
typedef struct {
	int xe_number;
	char *xe_message;
} x_errtab_t;

/* Add new error values to xerrno.h, and their descriptions to this table */
static x_errtab_t x_errtab[] = {
	{0, "No error"},
	{-1, "Unspecified error"},
	{EINPROGRESS, "Operation now in progress"},

	/* General Message error codes */
	{ X_UNEXPECTED_MSG_ERROR, "Unexpected msg received" },
	{ X_COMMUNICATIONS_CONNECTION_ERROR, "Communication connection failure" },
	{ X_COMMUNICATIONS_SEND_ERROR, "Message send failure" },
	{ X_COMMUNICATIONS_RECEIVE_ERROR, "Message receive failure" },
	{ X_PROTOCOL_VERSION_ERROR, "Protocol version has changed, re-link your code" },
	{ X_PROTOCOL_IO_STREAM_VERSION_ERROR, "I/O stream version number error" },

	//X_ctld communication failure
	{ X_CTLD_COMMUNICATIONS_CONNECTION_ERROR, "Unable to contact controller (connect failure)" },
	{ X_CTLD_COMMUNICATIONS_SEND_ERROR, "Unable to contact controller (send failure)" },
	{ X_CTLD_COMMUNICATIONS_RECEIVE_ERROR, "Unable to contact controller (receive failure)" },
	{ X_CTLD_COMMUNICATIONS_SHUTDOWN_ERROR, "Unable to contact controller (shutdown failure)"},

	//X_d node daemon error
	{ X_D_CANNOT_SPAWN_IO_THREAD, "node daemon could not spawn I/O thread" },
	{ X_D_FORK_FAILED, "node daemon could not fork job" },
	{ X_D_EXECVE_FAILED, "node daemon could not execve job" },
};


/*
 * Linear search through table of errno values and strings,
 * returns NULL on error, string on success.
 */
static char *_lookup_x_errtab(int errnum)
{
	char *res = NULL;
	int i;

	for (i = 0; i < sizeof(x_errtab) / sizeof(x_errtab_t); i++) {
		if (x_errtab[i].xe_number == errnum) {
			res = x_errtab[i].xe_message;
			break;
		}
	}

	return res;
}

/* Set errno to the specified value. */
void x_set_errnum (int errnum)
{
	#ifdef __set_errno
		__set_errno(errnum);
	#else
		errno = errnum;
	#endif
}

/* get an errno value */
int x_get_errno ()
{
	return errno;
}

/*
 * Return string associated with error (X or system).
 * Always returns a valid string (because strerror always does).
 */
char* x_errnum_to_str (int errnum)
{
	char *res = _lookup_x_errtab(errnum);
	return (res ? res : strerror(errnum));
}

/*
 * Print "message: error description" on stderr for current errno value.
 */
void x_perror (char *msg)
{
	fprintf(stderr, "%s: %s\n", msg, x_errnum_to_str(errno));
}
