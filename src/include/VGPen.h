#ifndef VGPen_H
#define VGPen_H


/*
	GUIDO Library
	Copyright (C) 2006	Grame
	
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

class VGColor;

/*!
\addtogroup VGSys Virtual Graphic System
@{
*/

// --------------------------------------------------------------
// 		VGPen class
// --------------------------------------------------------------
/** \brief Generic class to manipulate device independant pens. 
*/				
class VGPen
{
	public:
				VGPen() : mWidth( 1 ) { }
		void	Set( const VGColor & inColor, float inWidth )	{ mColor = inColor; mWidth = inWidth; }
		void	Set( const VGColor & inColor )					{ mColor = inColor; }
		void	Set( float inWidth )							{ mWidth = inWidth; }
				
		VGColor mColor;
		float mWidth;
};	

/*! @} */

#endif /* VGPen_H */
