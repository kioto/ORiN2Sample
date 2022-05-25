/** @file StdAfx.cpp
 *
 *  @brief 標準インクルードファイルを含むソースファイル
 *
 *	stdafx.pch 生成されるプリコンパイル済ヘッダー
 *	stdafx.obj 生成されるプリコンパイル済タイプ情報
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"

//--------------------------//
// Convertion char * - BSTR //
//--------------------------//

/**	BSTRからstd::string文字列を作成する
 *
 *　deleteコードが冗長的になるため関数化
 *
 *	@param	bstr	:	[in] BSTR文字列
 *	@retval	std::string
 *
 */
std::string ConvertBSTRToString(BSTR bstr)
{
	//[BSTR => char*]
	int size = ::WideCharToMultiByte(CP_ACP, 0, bstr, -1, NULL, 0, NULL, NULL) - 1;
	char *psz = new char[size + 1];
	::WideCharToMultiByte(CP_ACP, 0, bstr, -1, psz, size + 1, NULL, NULL);
	std::string str = psz;
	delete [] psz;

	return str;
}

/**	charからCComBSTR文字列を作成する
 *
 *　BSTR解放コードが冗長的になるため関数化
 *
 *	@param	psz	:	[in] char文字列
 *	@retval	CComBSTR
 *
 */
CComBSTR ConvertStringToBSTR(const char *psz)
{
	CComBSTR bstr;

	//[char* => BSTR]
	int size = ::MultiByteToWideChar(CP_ACP, 0, psz, -1, NULL, 0) - 1;
	BSTR pwsz = ::SysAllocStringByteLen(NULL, size * sizeof(OLECHAR));
	::MultiByteToWideChar(CP_ACP, 0, psz, -1, pwsz, size);
	bstr.Attach( pwsz );

	return bstr;
}
