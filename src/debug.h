/* 
 * Gmu Music Player
 *
 * Copyright (c) 2006-2010 Johannes Heimansberg (wejp.k.vu)
 *
 * File: debug.h  Created: 070610
 *
 * Description: Debug output
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2 of
 * the License. See the file COPYING in the Gmu's main directory
 * for details.
 */
#ifndef _DEBUG_H
#define _DEBUG_H
#define DEBUG_PRINT(module, msg) (printf("%s: %s\n", module, msg))

typedef enum Verbosity {
	V_SILENT = 0, V_FATAL = 1, V_ERROR = 2, V_WARNING = 3, V_INFO = 4, V_DEBUG = 5
} Verbosity;

void wdprintf_set_verbosity(Verbosity v);
int wdprintf(Verbosity v, char *module, char *fmt, ...);
#endif
