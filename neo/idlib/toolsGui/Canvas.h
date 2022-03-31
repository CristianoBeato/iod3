/*
===========================================================================

Beato idTech 4 Source Code
Copyright (C) 2016-2022 Cristiano B. Santos <cristianobeato_dm@hotmail.com>.

This file is part of the Beato idTech 4  GPL Source Code (?Beato idTech 4  Source Code?).

Beato idTech 4  Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Beato idTech 4  Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Beato idTech 4  Source Code.  If not, see <http://www.gnu.org/licenses/>.

===========================================================================
*/

#ifndef _CANVAS_H_
#define _CANVAS_H_

class btCanvas : public btBaseGui
{
public:
	btCanvas( const char *name );
	~btCanvas( void );

	void	SetBorder( const bool hasBorder );
	void	SetColor( const Uint8 r, const Uint8 g, const Uint8 b, const Uint8 a );
	void	SetBorderColor( const Uint8 r, const Uint8 g, const Uint8 b, const Uint8 a );

protected:
	void	Update( void );
	void	Render( void );

	virtual void	ReMesh( void );

private:
	bool	m_border;
	guiColori8	m_rectColor;
	guiColori8	m_borderColor;
	Uint32		m_borderOffsets;
	Uint32		m_rectOffset;
};

#endif // !_CANVAS_H_
