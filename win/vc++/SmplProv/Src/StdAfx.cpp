/** @file StdAfx.cpp
 *
 *  @brief �W���C���N���[�h�t�@�C�����܂ރ\�[�X�t�@�C��
 *
 *	stdafx.pch ���������v���R���p�C���σw�b�_�[
 *	stdafx.obj ���������v���R���p�C���σ^�C�v���
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

/**	BSTR����std::string��������쐬����
 *
 *�@delete�R�[�h���璷�I�ɂȂ邽�ߊ֐���
 *
 *	@param	bstr	:	[in] BSTR������
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

/**	char����CComBSTR��������쐬����
 *
 *�@BSTR����R�[�h���璷�I�ɂȂ邽�ߊ֐���
 *
 *	@param	psz	:	[in] char������
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
