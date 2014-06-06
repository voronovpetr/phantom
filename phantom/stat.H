// This file is part of the phantom program.
// Copyright (C) 2013, 2014, Eugene Mamchits <mamchits@yandex-team.ru>.
// Copyright (C) 2013, 2014, YANDEX LLC.
// This program may be distributed under the terms of the GNU LGPL 2.1.
// See the file ‘COPYING’ or ‘http://www.gnu.org/licenses/lgpl-2.1.html’.

#pragma once

#include <phantom/pd.H>

#include <stddef.h>

#pragma GCC visibility push(default)

namespace phantom {

struct stat_id_t {
	size_t res_no;

#ifdef __amd64__
	inline stat_id_t() throw() : res_no(~0ULL) { }
	inline operator bool() const { return res_no != ~0ULL; }
#else
	inline stat_id_t() throw() : res_no(~0UL) { }
	inline operator bool() const { return res_no != ~0UL; }
#endif
};

} // namespace phantom

#pragma GCC visibility pop
