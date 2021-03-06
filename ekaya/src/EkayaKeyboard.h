/*
 * Copyright (C) 2009 ThanLwinSoft.org
 *
 * The Ekaya library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * The KMFL library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with the Ekaya library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 *
 */
#ifndef EkayaKeyboard_h
#define EkayaKeyboard_h

typedef unsigned long Utf32;
#include <vector>
#include <string>
#include "Ekaya.h"

namespace EKAYA_NS {

class EkayaKeyboard
{
public:
	virtual ~EkayaKeyboard(){};
	/** Process a key according to context
	* @param keyId of key pressed
	* @param array of context information
	* @param position in context for insertino
	* @return new context position, length of insertion
	*/
	virtual std::pair<size_t, size_t> processKey(long keyId, std::basic_string<Utf32> &context, size_t contextPos) = 0;

	virtual std::basic_string<Utf32> getDescription() = 0;
	virtual std::basic_string<Utf32> getIconFileName() = 0;
	virtual std::basic_string<Utf32> getHelpFileName() = 0;
};

}

#endif
