/* -*- coding: utf-8 -*- */
/* -*- mode: c -*- */
/*
 * Dislocker -- enables to read/write on BitLocker encrypted partitions under
 * Linux
 * Copyright (C) 2012  Romain Coltel, Hervé Schauer Consultants
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */
#ifndef CLOCK_H
#define CLOCK_H


#include "common.h"


/* Deal with ntfs timestamps */
typedef uint64_t ntfs_time_t;
#define NTFS_TIME_OFFSET  ((ntfs_time_t)(369 * 365 + 89) *24 * 3600 * 10000000)


/*
 * Prototypes of functions from clock.c
 */
void ntfs2utc(ntfs_time_t t, time_t *ts);

int utf16towchars(uint16_t* utf16, size_t utf16_length, wchar_t* utf32);


#endif /* CLOCK_H */
