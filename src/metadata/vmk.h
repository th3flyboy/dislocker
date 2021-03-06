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
#ifndef VMK_H
#define VMK_H


#include "ntfs/guid.h"
#include "metadata.h"



/*
 * Functions prototypes
 */
int get_vmk_from_clearkey(bitlocker_dataset_t* dataset, void** vmk_datum);

int get_vmk_from_rp(bitlocker_dataset_t* dataset, dis_config_t* cfg, void** vmk_datum);

int get_vmk_from_bekfile(bitlocker_dataset_t* dataset, dis_config_t* cfg, void** vmk_datum);

int get_vmk_datum_from_guid(void* dataset, guid_t guid, void** vmk_datum);

int get_vmk_datum_from_range(void* dataset, uint16_t min_range, uint16_t max_range, void** vmk_datum);




#endif /* VMK_H */
