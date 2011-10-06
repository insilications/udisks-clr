/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */
/*
 * Copyright (C) 2011 David Zeuthen <zeuthen@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#if !defined (__UDISKS_INSIDE_UDISKS_H__) && !defined (UDISKS_COMPILATION)
#error "Only <udisks/udisks.h> can be included directly."
#endif

#ifndef __UDISKS_UTIL_H__
#define __UDISKS_UTIL_H__

#include <udisks/udiskstypes.h>
#include <udisks/udisks-generated.h>

G_BEGIN_DECLS

gchar *udisks_util_get_size_for_display (guint64 size,
                                         gboolean use_pow2,
                                         gboolean long_string);

gchar *udisks_util_get_part_scheme_for_display (const gchar *scheme);

gchar *udisks_util_get_part_type_for_display (const gchar *scheme,
                                              const gchar *type,
                                              gboolean     long_string);

const gchar **udisks_util_get_part_types_for_scheme (const gchar *scheme);


gchar *udisks_util_get_id_for_display (const gchar *usage,
                                       const gchar *type,
                                       const gchar *version,
                                       gboolean     long_string);

gchar *udisks_util_get_media_compat_for_display (const gchar* const *media_compat);

G_END_DECLS

#endif /* __UDISKS_UTIL_H__ */