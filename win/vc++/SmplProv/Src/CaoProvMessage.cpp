/** @file CaoProvMessage.cpp
 *
 *  @brief CCaoProvMessage �̎���
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvMessage.h"

/**	����������
 *
 *�@CCaoProvMessage�I�u�W�F�N�g���쐬����čŏ��ɌĂ΂��֐��ł���D
 *
 *	@param	pObj	:	[in] �e�I�u�W�F�N�g
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalInitialize(PVOID pObj)
{
	// CaoProvMessage�I�u�W�F�N�g���ʂ̏����������Ȃǂ��s���D
	return E_NOTIMPL; // ���̃N���X����������Ȃ�� S_OK �ɂ��ĉ������D
}
*/

/**	�ŏI����
 *
 *�@CaoProvMessage�I�u�W�F�N�g�����ł���Ƃ��ɂP�x�����Ă΂��D
 *
 */ 
/*
void CCaoProvMessage::FinalTerminate()
{
	// CaoProvMessage�I�u�W�F�N�g�̉���O����������D
}
*/

/**	���b�Z�[�W�̕ԐM
 *
 *�@ICaoMessage::Reply()�̎��̂ƂȂ�D
 *
 *	@param	vntData	:	[out] �ԐM�f�[�^
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvMessage::FinalReply(VARIANT vntData) 
{
	return E_NOTIMPL;
}
*/

/**	���b�Z�[�W�̃N���A
 *
 *�@ICaoMessage::Clear()�̎��̂ƂȂ�D
 *
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvMessage::FinalClear()
{
	return E_NOTIMPL;
}
*/

/**	���b�Z�[�W�쐬�����̎擾
 *
 *�@ICaoMessage::DateTime()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �쐬����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetDateTime(VARIANT *pVal)
{
    // VARIANT(pVal->vt = VT_DATE�CpVal->date = xxx)�Ɏ��Ԃ��i�[����D
	return E_NOTIMPL;
}
*/

/**	���b�Z�[�W�̐����̎擾
 *
 *�@ICaoMessage::Description()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] ����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetDescription(BSTR *pVal)
{
	return E_NOTIMPL;
}
*/

/**	�����̎擾
 *
 *�@ICaoMessage::Destination()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetDestination(BSTR *pVal)
{
	return E_NOTIMPL;
}
*/

/**	���b�Z�[�W�ԍ��̎擾
 *
 *�@ICaoMessage::Number()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] ���b�Z�[�W�ԍ�
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetNumber(long *pVal)
{
	return E_NOTIMPL;
}
*/

/**	���茳�̎擾
 *
 *�@ICaoMessage::Source()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] ���茳
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetSource(BSTR *pVal)
{
	return E_NOTIMPL;
}
*/

/**	���b�Z�[�W�{���̎擾
 *
 *�@ICaoMessage::Value()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] ���b�Z�[�W�{��
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetValue(VARIANT *pVal)
{
	return E_NOTIMPL;
}
*/

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========
