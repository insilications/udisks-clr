/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2022 Tomas Bzatek <tbzatek@redhat.com>
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

#ifndef __UDISKS_LINUX_MANAGER_NVME_H__
#define __UDISKS_LINUX_MANAGER_NVME_H__

#include "udisksdaemontypes.h"

G_BEGIN_DECLS

#define UDISKS_TYPE_LINUX_MANAGER_NVME  (udisks_linux_manager_nvme_get_type ())
#define UDISKS_LINUX_MANAGER_NVME(o)    (G_TYPE_CHECK_INSTANCE_CAST ((o), UDISKS_TYPE_LINUX_MANAGER_NVME, UDisksLinuxManagerNVMe))
#define UDISKS_IS_LINUX_MANAGER_NVME(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), UDISKS_TYPE_LINUX_MANAGER_NVME))

GType              udisks_linux_manager_nvme_get_type    (void) G_GNUC_CONST;
UDisksManagerNVMe *udisks_linux_manager_nvme_new         (UDisksDaemon           *daemon);
UDisksDaemon      *udisks_linux_manager_nvme_get_daemon  (UDisksLinuxManagerNVMe *manager);

G_END_DECLS

#endif /* __UDISKS_LINUX_MANAGER_NVME_H__ */
