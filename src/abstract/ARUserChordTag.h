#ifndef ARUserChordTag_H
#define ARUserChordTag_H

/*
	GUIDO Library
	Copyright (C) 2002  Holger Hoos, Juergen Kilian, Kai Renz

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

#include "ARMTParameter.h"
#include "ARPositionTag.h"

class TagParameterString;
class TagParameterInt;

/** \brief not yet documented
*/
class ARUserChordTag : 
	// public ARMusicalObject,
	public ARMTParameter,
	public ARPositionTag
{
public:


	ARUserChordTag(const ARUserChordTag * uct);
	ARUserChordTag() 
	{
		rangesetting = ONLY;
		labels = NULL;
		labeli = NULL;
		labelistr = NULL;
	}
	virtual ~ARUserChordTag();

	virtual ARMusicalObject * Copy() const;
	virtual void print() const { }

			const char* getLabelValue() const;
	virtual void PrintName(std::ostream &os) const;
	virtual void PrintParameters(std::ostream & os) const;

	virtual void setTagParameterList(TagParameterList & tpl);

protected:

	static ListOfTPLs ltpls;

	TagParameterString *labels;
	TagParameterInt *labeli;
	NVstring * labelistr;
};


#endif
