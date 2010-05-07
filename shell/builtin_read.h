/* vi: set sw=4 ts=4: */
/*
 * Adapted from ash applet code
 *
 * This code is derived from software contributed to Berkeley by
 * Kenneth Almquist.
 *
 * Copyright (c) 1989, 1991, 1993, 1994
 *      The Regents of the University of California.  All rights reserved.
 *
 * Copyright (c) 1997-2005 Herbert Xu <herbert@gondor.apana.org.au>
 * was re-ported from NetBSD and debianized.
 *
 * Copyright (c) 2010 Denys Vlasenko
 * Split from ash.c
 *
 * Licensed under the GPL v2 or later, see the file LICENSE in this tarball.
 */
#ifndef SHELL_BUILTIN_READ_H
#define SHELL_BUILTIN_READ_H 1

PUSH_AND_SET_FUNCTION_VISIBILITY_TO_HIDDEN

enum {
	BUILTIN_READ_SILENT = 1 << 0,
	BUILTIN_READ_RAW    = 1 << 1,
};

const char* FAST_FUNC
shell_builtin_read(void FAST_FUNC (*setvar)(const char *name, const char *val),
	char       **argv,
	const char *ifs,
	int        read_flags,
	const char *opt_n,
	const char *opt_p,
	const char *opt_t,
	const char *opt_u
);

POP_SAVED_FUNCTION_VISIBILITY

#endif
