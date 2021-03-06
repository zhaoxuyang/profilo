/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_BRIDGE_EBT_LOG_H
#define __LINUX_BRIDGE_EBT_LOG_H
#define _LINUX_BRIDGE_EBT_LOG_H
#define _LINUX_BRIDGE_EBT_LOG_H_
#define _UAPI_LINUX_BRIDGE_EBT_LOG_H
#define _UAPI_LINUX_BRIDGE_EBT_LOG_H_
#define NDK_ANDROID_SUPPORT__LINUX_BRIDGE_EBT_LOG_H
#define NDK_ANDROID_SUPPORT__LINUX_BRIDGE_EBT_LOG_H_
#define NDK_ANDROID_SUPPORT_UAPI__LINUX_BRIDGE_EBT_LOG_H
#define NDK_ANDROID_SUPPORT_UAPI__LINUX_BRIDGE_EBT_LOG_H_
#define _UAPI__LINUX_BRIDGE_EBT_LOG_H
#define _UAPI__LINUX_BRIDGE_EBT_LOG_H_
#define __LINUX_BRIDGE_EBT_LOG_H_
#include <museum/8.1.0/bionic/libc/linux/types.h>
#define EBT_LOG_IP 0x01
#define EBT_LOG_ARP 0x02
#define EBT_LOG_NFLOG 0x04
#define EBT_LOG_IP6 0x08
#define EBT_LOG_MASK (EBT_LOG_IP | EBT_LOG_ARP | EBT_LOG_IP6)
#define EBT_LOG_PREFIX_SIZE 30
#define EBT_LOG_WATCHER "log"
struct ebt_log_info {
  __u8 loglevel;
  __u8 prefix[EBT_LOG_PREFIX_SIZE];
  __u32 bitmask;
};
#endif
