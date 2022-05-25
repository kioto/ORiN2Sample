/** @file CaoProvExtension.cpp
 *
 *  @brief CCaoProvExtension �̎���
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvExtension.h"

/**	����������
 *
 *�@CaoProvExtension�I�u�W�F�N�g���쐬����čŏ��ɌĂ΂��֐��ł���D
 *
 *	@param	pObj	:	[in] �e�I�u�W�F�N�g
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvExtension::FinalInitialize(PVOID pObj)
{
	// CaoProvExtension�I�u�W�F�N�g���ʂ̏����������Ȃǂ��s���D
	return E_NOTIMPL; // ���̃N���X����������Ȃ�� S_OK �ɂ��ĉ������D
}
*/

/**	�ŏI����
 *
 *�@CaoProvExtension�I�u�W�F�N�g�����ł���Ƃ��ɂP�x�����Ă΂��D
 *
 *	@retval	HRESULT
 *
 */ 
/*
void CCaoProvExtension::FinalTerminate()
{
	// CaoProvExtension�I�u�W�F�N�g�̉���O����������D
}
*/

/**	�g���R�}���h�̎��s
 *
 *	@param	bstrCmd	:	[in] �R�}���h��
 *	@param	vntPara	:	[in] �p�����[�^
 *	@param	pVal	:	[out] ���s����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvExtension::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
{
	// �e�ЃR�}���h�����߁C���s���C���s���ʂ�Ԃ��D
	// ���s���ʂ́C�e�Ж��ɁiVARIANT���Łj���R�ł���D
	return E_NOTIMPL;
}
*/

/**	�����̎擾
 *
 *	@param	pVal	:	[out] ����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvExtension::FinalGetAttribute(long *pVal)
{
    // �t�@�C���̑����� LONG�^ �Ŏ擾����D
	return E_NOTIMPL;
}
*/

/**	�w���v������̎擾
 *
 *	@param	pVal	:	[out] �w���v
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvExtension::FinalGetHelp(BSTR *pVal)
{
	// �C�ӂ̃w���v�������Ԃ��D
	return E_NOTIMPL;
}
*/

/**	�ϐ������X�g�̎擾
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@param	pVal	:	[out] �ϐ������X�g
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvExtension::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
{
	// �ϐ������X�g�𕶎����SAFEARRAY�Ƃ��č쐬�D
    // ���̃|�C���^��VARIANT(pVal->vt = VT_BSTR|VT_ARRAY�CpVal->parray = xxx)�Ɋi�[����D
	return E_NOTIMPL;
}
*/

/**	ID�̎擾
 *
 *	@param	pVal	:	[out] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvExtension::FinalGetID(VARIANT *pVal)
{
	return E_NOTIMPL;
}
*/

/**	ID�̐ݒ�
 *
 *	@param	newVal	:	[in] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvExtension::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========
