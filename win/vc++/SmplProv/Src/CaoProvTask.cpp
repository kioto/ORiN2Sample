/** @file CaoProvTask.cpp
 *
 *  @brief CCaoProvTask �̎���
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvTask.h"


/**	����������
 *
 *�@CaoProvTask�I�u�W�F�N�g���쐬����čŏ��ɌĂ΂��֐��ł���D
 *
 *	@param	pObj	:	[in] �e�I�u�W�F�N�g
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvTask::FinalInitialize(PVOID pObj)
{

	// CaoProvRobot�I�u�W�F�N�g���ʂ̏����������Ȃǂ��s���D
	return E_NOTIMPL; // ���̃N���X����������Ȃ�� S_OK �ɂ��ĉ������D
}
*/

/**	�ŏI����
 *
 *�@CaoProvTask�I�u�W�F�N�g�����ł���Ƃ��ɂP�x�����Ă΂��D
 *
 *	@retval	HRESULT
 *
 */ 
/*
void CCaoProvTask::FinalTerminate()
{
	// CaoProvTask�I�u�W�F�N�g�̉���O����������D
}
*/
  
/**	�^�X�N�i�v���O�����j�̍폜
 *
 *�@ICaoTask::Delete()���\�b�h�̎��̂ƂȂ�D
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvTask::FinalDelete(BSTR bstrOption)
{
	// �^�X�N�i�v���O�����j�����S�ɍ폜����D
	return E_NOTIMPL;
}
*/

/**	�^�X�N�i�v���O�����j�̊J�n
 *
 *�@ICaoTask::Start()���\�b�h�̎��̂ƂȂ�D
 *
 *	@param	lMode	:	[in] �J�n���[�h
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvTask::FinalStart(long lMode, BSTR bstrOption)
{
	// �^�X�N�i�v���O�����j���J�n������D
	// �J�n���[�h�́C�P�F�P�T�C�N�����s�C�Q�F�A�����s�C�R�F�P�X�e�b�v ����C�S�F�P�X�e�b�v �߂�
	return E_NOTIMPL;
}
*/

/**	�^�X�N�i�v���O�����j�̒�~
 *
 *�@ICaoTask::Stop()���\�b�h�̎��̂ƂȂ�D
 *
 *	@param	lMode	:	[in] ��~���[�h
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvTask::FinalStop(long lMode, BSTR bstrOption)
{
	// �^�X�N�i�v���O�����j���~������D
	// ��~���[�h�́C�O�F�f�t�H���g��~�C�P�F�u����~�C�Q�F�X�e�b�v��~�C�R�F�T�C�N����~�C�S�F��������~
	return E_NOTIMPL;
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
HRESULT CCaoProvTask::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
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
HRESULT CCaoProvTask::FinalGetAttribute(long *pVal)
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
HRESULT  CCaoProvTask::FinalGetHelp(BSTR *pVal)
{
	// �C�ӂ̃w���v�������Ԃ��D
	return E_NOTIMPL;
}
*/

/**	�Ή��t�@�C�����̎擾
 *
 *	@param	pVal	:	[out] �t�@�C����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvTask::FinalGetFileName(BSTR *pVal)
{
	// �^�X�N���쐬�������t�@�C������Ԃ��D
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
HRESULT CCaoProvTask::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
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
HRESULT CCaoProvTask::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvTask::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========
