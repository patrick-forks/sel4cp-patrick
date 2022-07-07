/*
 * Copyright 2021, Breakaway Consulting Pty. Ltd.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */
#pragma once

#define MAX_UNTYPED_REGIONS 256

struct region {
    uintptr_t paddr;
    uintptr_t size_bits;
    uintptr_t is_device; /*FIXME: should back size_bits / is_device */
};

struct untyped_info {
    seL4_Word cap_start;
    seL4_Word cap_end;
    struct region regions[MAX_UNTYPED_REGIONS];
};

void dump_bootinfo(seL4_BootInfo *bi);
void dump_untyped_info(struct untyped_info *untyped_info);
