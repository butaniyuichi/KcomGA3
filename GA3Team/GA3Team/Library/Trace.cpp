#include <windows.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#pragma warning(push)
#pragma warning(disable:4996)

// Visual C++ �̃f�o�b�K�̏o�̓E�B���h�E�ɕ�������o�͂���
//   �g������ printf() �Ɠ���
void TRACE( LPCTSTR lpszFormat, ... )
{
	va_list args;
	va_start( args, lpszFormat );

	int nBuf;
	TCHAR szBuffer[512];

//	nBuf = _vsnprintf( szBuffer, _countof(szBuffer), lpszFormat, args );
	nBuf = _vsnprintf( szBuffer, sizeof(szBuffer)/sizeof(TCHAR), lpszFormat, args );
//	ASSERT(nBuf >= 0);
	OutputDebugString( szBuffer );

	va_end(args);
}

#pragma warning(pop)