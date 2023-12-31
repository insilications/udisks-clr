/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2007-2010 David Zeuthen <zeuthen@gmail.com>
 * Copyright (C) 2020 Tomas Bzatek <tbzatek@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef __UDISKS_LINUX_MOUNT_OPTIONS_H__
#define __UDISKS_LINUX_MOUNT_OPTIONS_H__

#include "udisksdaemontypes.h"

G_BEGIN_DECLS

/**
 * UDisksMountOptionsEntry:
 * @fs_type: The filesystem type to use.
 * @options: comma-separated mount options.
 */
typedef struct
{
  gchar *fs_type;
  gchar *options;
} UDisksMountOptionsEntry;

void                       udisks_mount_options_entry_free        (UDisksMountOptionsEntry *entry);

UDisksMountOptionsEntry ** udisks_linux_calculate_mount_options   (UDisksDaemon            *daemon,
                                                                   UDisksBlock             *block,
                                                                   uid_t                    caller_uid,
                                                                   const gchar             *fs_signature,
                                                                   const gchar             *fs_type,
                                                                   GVariant                *options,
                                                                   GError                 **error);

GHashTable               * udisks_linux_mount_options_get_builtin (void);


G_END_DECLS

#endif /* __UDISKS_LINUX_MOUNT_OPTIONS_H__ */
