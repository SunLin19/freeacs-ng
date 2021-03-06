/*
 *	This program is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 2 of the License, or
 *	(at your option) any later version.
 *
 *	Copyright (C) 2012 Luka Perkov <freeacs-ng@lukaperkov.net>
 */

#ifndef _FREEACS_NG_AMQP_H__
#define _FREEACS_NG_AMQP_H__

#include <libfreecwmp.h>

int amqp_notify(const cwmp_str_t *);
int amqp_fetch_pending(cwmp_str_t *, cwmp_str_t *);

#endif /* _FREEACS_NG_AMQP_H__ */
