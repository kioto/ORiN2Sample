/** @file CaoProvCommand.cpp
 *
 *  @brief CCaoProvCommand �̎���
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvCommand.h"


/**	����������
 *
 *�@CaoProvCommand�I�u�W�F�N�g���쐬����čŏ��ɌĂ΂��֐��ł���D
 *
 *	@param	pObj	:	[in] �e�I�u�W�F�N�g
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvCommand::FinalInitialize(PVOID pObj)
{

	// CaoProvRobot�I�u�W�F�N�g���ʂ̏����������Ȃǂ��s���D
	return E_NOTIMPL; // ���̃N���X����������Ȃ�� S_OK �ɂ��ĉ������D
}
*/

/**	�ŏI����
 *
 *�@CaoProvCommand�I�u�W�F�N�g�����ł���Ƃ��ɂP�x�����Ă΂��D
 *
 *	@retval	HRESULT
 *
 */ 
/*
void CCaoProvCommand::FinalTerminate()
{
	// CaoProvCommand�I�u�W�F�N�g�̉���O����������D
}
*/

/**	�R�}���h�̎��s
 *
 *�@ICaoCommand::Execute()���\�b�h�̎��̂ƂȂ�D<br>
 *	���[�h�̂Pbit�ڂ̓R�}���h�̓����E�񓯊����s���[�h�̐؂�ւ��Ƃ��Ďg�p����Ă���D<br>
 *	�@�@�@�O�F�������s
 *	�@�@�@�P�F�񓯊����s
 *
 *	@param	lMode	:	[in] ���[�h
 *	@param	pVal	:	[out] ���s����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvCommand::FinalExecute(long lMode, VARIANT *pVal)
{
	// �R�}���h�̎��s����
	return E_NOTIMPL;
}
*/

/**	���s���R�}���h�̃L�����Z��
 *
 *�@ICaoCommand::Cancel()���\�b�h�̎��̂ƂȂ�D
 *
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvCommand::FinalCancel()
{
	// �R�}���h�̃L�����Z������
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
HRESULT CCaoProvCommand::FinalGetAttribute(long *pVal)
{
    // �^�X�N�̑����� LONG�^ �Ŏ擾����D
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
HRESULT  CCaoProvCommand::FinalGetHelp(BSTR *pVal)
{
	// �C�ӂ̃w���v�������Ԃ��D
	return E_NOTIMPL;
}
*/

/**	�p�����[�^�̎擾
 *
 *	@param	pVal	:	[out] �p�����[�^�z��
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalGetParameters(VARIANT *pVal)
{
	// �p�����[�^�z���Ԃ��D
	return E_NOTIMPL;
}
*/

/**	�p�����[�^�̐ݒ�
 *
 *	@param	newVal	:	[out] �p�����[�^�z��
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalPutParameters(VARIANT newVal)
{
	// �p�����[�^��ݒ肷��D
	return E_NOTIMPL;
}
*/

/**	��Ԃ̎擾
 *
 *	@param	pVal	:	[out] ���
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalGetState(long *pVal)
{
	// ��Ԃ��擾����B
	// 1bit�ڂ̓R�}���h���s��Ԃ̃t���O�Ƃ��Ďg�p���܂��B(1:�R�}���h���s���A0:�R�}���h����s���j
	return E_NOTIMPL;
}
*/

/**	�^�C���A�E�g�̎擾
 *
 *	@param	pVal	:	[out] �^�C���A�E�g����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalGetTimeout(long *pVal)
{
	// �^�C���A�E�g���Ԃ�Ԃ��D
	return E_NOTIMPL;
}
*/

/**	�^�C���A�E�g�̐ݒ�
 *
 *	@param	newVal	:	[out] �^�C���A�E�g����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalPutTimeout(long newVal)
{
	// �^�C���A�E�g���Ԃ�ݒ肷��D
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
HRESULT CCaoProvCommand::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvCommand::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========
