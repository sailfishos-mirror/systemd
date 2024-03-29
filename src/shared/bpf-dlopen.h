/* SPDX-License-Identifier: LGPL-2.1-or-later */
#pragma once

#if HAVE_LIBBPF

#include <bpf/bpf.h>
#include <bpf/libbpf.h>

#include "bpf-compat.h"
#include "dlfcn-util.h"

DLSYM_PROTOTYPE(bpf_program__attach_cgroup);
DLSYM_PROTOTYPE(bpf_program__attach_lsm);
DLSYM_PROTOTYPE(bpf_link__fd);
DLSYM_PROTOTYPE(bpf_link__destroy);
DLSYM_PROTOTYPE(bpf_map__fd);
DLSYM_PROTOTYPE(bpf_map__name);
DLSYM_PROTOTYPE(bpf_map__set_max_entries);
DLSYM_PROTOTYPE(bpf_map_update_elem);
DLSYM_PROTOTYPE(bpf_map_delete_elem);
DLSYM_PROTOTYPE(bpf_map__set_inner_map_fd);
/* The *_skeleton APIs are autogenerated by bpftool, the targets can be found
 * in ./build/src/core/bpf/socket_bind/socket-bind.skel.h */
DLSYM_PROTOTYPE(bpf_object__open_skeleton);
DLSYM_PROTOTYPE(bpf_object__load_skeleton);
DLSYM_PROTOTYPE(bpf_object__attach_skeleton);
DLSYM_PROTOTYPE(bpf_object__detach_skeleton);
DLSYM_PROTOTYPE(bpf_object__destroy_skeleton);
DLSYM_PROTOTYPE(bpf_program__name);
DLSYM_PROTOTYPE(libbpf_set_print);
DLSYM_PROTOTYPE(libbpf_get_error);

#endif

int dlopen_bpf(void);
