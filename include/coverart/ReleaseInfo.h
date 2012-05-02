/* --------------------------------------------------------------------------

   libcoverart - Client library to access CoverArtArchive

   Copyright (C) 2012 Andrew Hawkins

   This file is part of libcoverart.

   This library is free software; you can redistribute it and/or
   modify it under the terms of v2 of the GNU Lesser General Public
   License as published by the Free Software Foundation.

   libcoverart is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this library.  If not, see <http://www.gnu.org/licenses/>.

     $Id$

----------------------------------------------------------------------------*/

#ifndef _COVERARTARCHIVE_RELEASE_INFO_
#define _COVERARTARCHIVE_RELEASE_INFO_

#include <iostream>

namespace CoverArtArchive
{
	class CReleaseInfoPrivate;
	class CImages;

	class CReleaseInfo
	{
		public:
			CReleaseInfo(const std::string& JSON="");
			CReleaseInfo(const CReleaseInfo& Other);
			CReleaseInfo& operator =(const CReleaseInfo& Other);
			virtual ~CReleaseInfo();

			std::string Release() const;
			CoverArtArchive::CImages *Images() const;

		private:
			CReleaseInfoPrivate * const m_d;

			void Cleanup();
	};
}

std::ostream& operator << (std::ostream& os, const CoverArtArchive::CReleaseInfo& ReleaseInfo);

#endif

