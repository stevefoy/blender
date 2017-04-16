
// Gawain vertex attribute binding
//
// This code is part of the Gawain library, with modifications
// specific to integration with Blender.
//
// Copyright 2016 Mike Erwin
//
// This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of
// the MPL was not distributed with this file, You can obtain one at https://mozilla.org/MPL/2.0/.

#pragma once

#include "vertex_format.h"
#include "shader_interface.h"

typedef struct {
	uint64_t loc_bits; // store 4 bits for each of the 16 attribs
	uint16_t enabled_bits; // 1 bit for each attrib
} AttribBinding;

void AttribBinding_clear(AttribBinding*);

void get_attrib_locations(const VertexFormat*, AttribBinding*, const ShaderInterface*);
unsigned read_attrib_location(const AttribBinding*, unsigned a_idx);
