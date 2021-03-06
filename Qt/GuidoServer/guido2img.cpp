/*

  Copyright (C) 2012 Grame

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
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

  Grame Research Laboratory, 9 rue du Garet, 69001 Lyon - France
  research@grame.fr

*/

#include <QBuffer>

#include "guido2img.h"
#include "Guido2Image.h"

using namespace std;
namespace guidohttpd
{

//--------------------------------------------------------------------------
Guido2ImageErrorCodes guido2img::convert (const char* gmn, int page, int width, int height, float zoom)
{
	Guido2Image::Params p;
	p.input  = gmn;	
	p.output = 0;
	p.format = GUIDO_2_IMAGE_PNG;
	p.layout = 0;
	p.pageIndex = page;
	p.sizeConstraints = QSize (width, height);
	p.zoom = zoom;

	fBuffer.reset();
	p.device = &fBuffer;
	return Guido2Image::gmnString2Image (p);
}

} // end namespoace
