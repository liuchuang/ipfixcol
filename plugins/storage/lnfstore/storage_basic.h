/**
 * \file storage.h
 * \author Imrich Stoffa <xstoff02@stud.fit.vutbr.cz>
 * \author Lukas Hutak <xhutak01@stud.fit.vutbr.cz>
 * \brief Storage management (header file)
 *
 * Copyright (C) 2015 CESNET, z.s.p.o.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of the Company nor the names of its contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * ALTERNATIVELY, provided that this notice is retained in full, this
 * product may be distributed under the terms of the GNU General Public
 * License (GPL) version 2 or later, in which case the provisions
 * of the GPL apply INSTEAD OF those given above.
 *
 * This software is provided ``as is, and any express or implied
 * warranties, including, but not limited to, the implied warranties of
 * merchantability and fitness for a particular purpose are disclaimed.
 * In no event shall the company or contributors be liable for any
 * direct, indirect, incidental, special, exemplary, or consequential
 * damages (including, but not limited to, procurement of substitute
 * goods or services; loss of use, data, or profits; or business
 * interruption) however caused and on any theory of liability, whether
 * in contract, strict liability, or tort (including negligence or
 * otherwise) arising in any way out of the use of this software, even
 * if advised of the possibility of such damage.
 *
 */

#ifndef LS_STORAGE_BASIC_H
#define LS_STORAGE_BASIC_H

#include <ipfixcol.h>
#include "lnfstore.h"

// Store a record
void store_record_basic(const struct metadata* mdata, struct lnfstore_conf *conf);

char *create_file_name(struct lnfstore_conf *conf, char **bf_index_fn);
int mkdir_hierarchy(const char* path);

int prepare_index(struct lnfstore_index *lnf_index, struct index_params ind_par,
					char *path, char *filename);

int fill_record(const struct metadata *mdata, lnf_rec_t *record, uint8_t *buffer);
void store_to_file(lnf_file_t *file, struct lnfstore_conf *conf, index_t *index);

void cleanup_storage_basic(struct lnfstore_conf *conf);

#endif //LS_STORAGE_BASIC_H
