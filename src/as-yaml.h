/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2012-2017 Matthias Klumpp <matthias@tenstral.net>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the license, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined (__APPSTREAM_H) && !defined (AS_COMPILATION)
#error "Only <appstream.h> can be included directly."
#endif

#ifndef __AS_YAML_H
#define __AS_YAML_H

#include <yaml.h>
#include "as-context.h"

G_BEGIN_DECLS
#pragma GCC visibility push(hidden)

const gchar	*as_yaml_node_get_key (GNode *n);
const gchar	*as_yaml_node_get_value (GNode *n);

void		as_yaml_print_unknown (const gchar *root,
				       const gchar *key);

void		as_yaml_mapping_start (yaml_emitter_t *emitter);
void		as_yaml_mapping_end (yaml_emitter_t *emitter);

void		as_yaml_sequence_start (yaml_emitter_t *emitter);
void		as_yaml_sequence_end (yaml_emitter_t *emitter);

void		as_yaml_emit_scalar (yaml_emitter_t *emitter,
				     const gchar *value);
void		as_yaml_emit_scalar_uint (yaml_emitter_t *emitter,
					  guint value);
void		as_yaml_emit_scalar_key (yaml_emitter_t *emitter,
					 const gchar *key);
void		as_yaml_emit_entry (yaml_emitter_t *emitter,
					const gchar *key,
					const gchar *value);
void		as_yaml_emit_entry_uint (yaml_emitter_t *emitter,
					 const gchar *key,
					 guint value);
void		as_yaml_emit_entry_timestamp (yaml_emitter_t *emitter,
						const gchar *key,
						guint64 unixtime);
void		as_yaml_emit_long_entry (yaml_emitter_t *emitter,
					 const gchar *key,
					 const gchar *value);

#pragma GCC visibility pop
G_END_DECLS

#endif /* __AS_YAML_H */
