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


#include "xstdlib.h"
#include "xstdio.h"



/**
 * malloc wrapper
 * 
 * @param size The size of the memory to allocate
 * @return A pointer to the memory
 */
void* xmalloc(size_t size)
{
	void* p = malloc(size);
	
	xprintf(L_DEBUG, "New memory allocation at %p (%#x byte allocated)\n", p, size);
	
	if(p == NULL)
	{
		xprintf(L_CRITICAL, "Cannot allocate more memory, aborting\n");
		exit(2);
	}
	
	return p;
}


/**
 * free wrapper
 * 
 * @param pointer The pointer to the memory to free
 */
void xfree(void *pointer)
{
	xprintf(L_DEBUG, "Freeing pointer at address %p\n", pointer);
	
	free(pointer);
}


