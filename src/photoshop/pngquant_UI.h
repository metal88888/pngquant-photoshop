///////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2013, Brendan Bolles
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// *	   Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// *	   Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
///////////////////////////////////////////////////////////////////////////

// ------------------------------------------------------------------------
//
// pngquant Photoshop plug-in
//
// by Kornel Lesinski <kornel@pngquant.org>
// based on code by Brendan Bolles <brendan@fnordware.com>
//
// ------------------------------------------------------------------------

#ifndef pngquant_UI_H
#define pngquant_UI_H

typedef struct {
	int					quality;
	bool				save_metadata;
} pngquant_OutUI_Data;

// pngquant UI
//
// return true if user hit OK
// if user hit OK, params block will have been modified
//
// plugHndl is bundle identifier string on Mac, hInstance on win
// mwnd is the main window for Windows


bool
pngquant_OutUI(
	pngquant_OutUI_Data		*params,
	bool				have_transparency,
	const char			*alpha_name,
	const void			*plugHndl,
	const void			*mwnd);

void
pngquant_About(
	const char		*pngquant_version_string,
	const void		*plugHndl,
	const void		*mwnd);

void MyLog(const char *str);

// Mac prefs keys
#define pngquant_PREFS_ID		"org.pngquant.photoshop"
#define pngquant_PREFS_AUTO		"Auto"


// Windows registry keys
#define pngquant_PREFIX		 "Software\\pngquant\\photoshopplugin"
#define pngquant_ALPHA_KEY	"Alpha"
#define pngquant_MULT_KEY	"Mult"
#define pngquant_AUTO_KEY	"Auto"


#endif // pngquant_UI_H
