/** @file CaoProvFile.cpp
 *
 *  @brief CCaoProvFile �̎���
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvFile.h"


/**	����������
 *
 *�@CaoProvFile�I�u�W�F�N�g���쐬����čŏ��ɌĂ΂��֐��ł���D
 *
 *	@param	pObj	:	[in] �e�I�u�W�F�N�g
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvFile::FinalInitialize(PVOID pObj)
{
	CCaoProvController* pCaopCtrl = NULL;
	CCaoProvFile* pCaopFile = NULL;


	// �e�I�u�W�F�N�g�̔���
	switch (m_ulParentType) {
	case SYS_CLS_CONTROLLER:
		pCaopCtrl = (CCaoProvController*)pObj;
		break;
	case SYS_CLS_FILE:
		pCaopFile = (CCaoProvFile*)pObj;
		break;
	}

	// CaoProvVariable�I�u�W�F�N�g���ʂ̏����������Ȃǂ��s���D
	return E_NOTIMPL; // ���̃N���X����������Ȃ�� S_OK �ɂ��ĉ������D
}
*/

/**	�ŏI����
 *
 *�@CaoProvFile�I�u�W�F�N�g�����ł���Ƃ��ɂP�x�����Ă΂��D
 *
 */ 
/*
void CCaoProvFile::FinalTerminate()
{
	// CaoProvFile�I�u�W�F�N�g�̉���O����������D
}
*/

/**	�t�@�C���̕���
 *
 *�@ICaoFile::Copy()���\�b�h�̎��̂ƂȂ�D
 *
 *	@param	bstrName	:	[in] ���ʐ�p�X�i���ʐ�t�@�C���j���i������j
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvFile::FinalCopy(BSTR bstrName, BSTR bstrOption)
{
	// �t�@�C���̕��ʂ�����D
	return E_NOTIMPL;
}
*/

/**	�t�@�C���̈ړ�
 *
 *	@param	bstrName	:	[in] �ړ���t�@�C�����i������j
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalMove(BSTR bstrName, BSTR bstrOption)
{
	// �t�@�C���̈ړ�������D
	// ICaoFile::Path()�v���p�e�B�̒l���ύX���Ă����D
	return E_NOTIMPL;
}
*/

/**	�t�@�C���̍폜
 *
 *�@ICaoFile::Delete()���\�b�h�̎��̂ƂȂ�D
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvFile::FinalDelete(BSTR bstrOption)
{
	// �t�@�C���̍폜������D
	// CaoProvFile�I�u�W�F�N�g�͎c���Ă���D
	return E_NOTIMPL;
}
*/
 
/**	�^�X�N�̐���
 *
 *�@�^�X�N�𐶐����C�^�X�N�����擾����D
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@param	pVal	:	[out] �^�X�N��
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvFile::FinalRun(BSTR bstrOption, BSTR *pVal)
{
	// �v���O���������s���^�X�N�𐶐�����D
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
HRESULT CCaoProvFile::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
{
	// �e�ЃR�}���h�����߁C���s���C���s���ʂ�Ԃ��D
	// ���s���ʂ́C�e�Ж��ɁiVARIANT���Łj���R�ł���D
	return E_NOTIMPL;
}
*/

/**	�t�@�C�������̎擾
 *
 *�@ICaoFile::Attribute()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �t�@�C������
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetAttribute(long *pVal)
{
    // �t�@�C���̑����� LONG�^ �Ŏ擾����D
	return E_NOTIMPL;
}
*/

/**	�t�@�C���쐬�����̎擾
 *
 *�@ICaoFile::DateCreated()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �t�@�C���쐬����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetDateCreated(VARIANT *pVal)
{
    // VARIANT(pVal->vt = VT_DATE�CpVal->date = xxx)�Ɏ��Ԃ��i�[����D
	return E_NOTIMPL;
}
*/
  
/**	�t�H���_�ŏI�A�N�Z�X�����̎擾
 *
 *�@ICaoFile::DateLastAccessed()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �t�@�C���ŏI�A�N�Z�X����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetDateLastAccessed(VARIANT *pVal)
{
    // VARIANT(pVal->vt = VT_DATE�CpVal->date = xxx)�Ɏ��Ԃ��i�[����D
	return E_NOTIMPL;
}
*/

/**	�t�@�C���X�V�������擾
 *
 *�@ICaoFile::DateLastModified()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �t�@�C���X�V����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetDateLastModified(VARIANT *pVal)
{
    // VARIANT(pVal->vt = VT_DATE�CpVal->date = xxx)�Ɏ��Ԃ��i�[����D
	return E_NOTIMPL;
}
*/

/**	�w���v�̎擾
 *
 *�@�R�����g�����i�[���Ă����D
 *�@ICaoFile::Help()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �w���v������
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetHelp(BSTR *pVal)
{
	// �C�ӂ̃w���v�������Ԃ��D
	return E_NOTIMPL;
}
*/

/**	�p�X�̎擾
 *
 *�@�t�@�C���̃t���p�X���擾����D
 *�@ICaoFile::Path()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �t�@�C���̃t���p�X���i������j
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetPath(BSTR *pVal)
{
	// �t�@�C���̃t���p�X�����擾����D
	return E_NOTIMPL;
}
*/

/**	�T�C�Y�̎擾
 *
 *�@ICaoFile::Size()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �T�C�Y�i�o�C�g���j
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetSize(long *pVal)
{
	// �T�u�t�H���_���܂ރo�C�g�T�C�Y���擾����D
	return E_NOTIMPL;
}
*/

/**	�^�C�v�i�g���q�j�̎擾
 *
 *�@�^�C�v�i�g���q�j�𕶎���Ŏ擾����D
 *�@ICaoFile::Type()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �^�C�v�i�g���q�j�f�[�^������
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetType(BSTR *pVal)
{
	// �g���q�𕶎���ŕԂ��D
	return E_NOTIMPL;
}
*/

/**	�t�@�C���̓��e�̎擾
 *
 *	@param	pVal	:	[in] �t�@�C�����e
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetValue(VARIANT *pVal)
{
	// �t�@�C�����f�[�^�𕶎���Ƃ��Ĉꊇ�ŕԂ��D
	// �e�L�X�g�f�[�^�̏ꍇ pVal->vt = VT_BSTR�Ƃ��ăf�[�^��߂�
	// �o�C�i���f�[�^�̏ꍇ pVal->vt = VT_UI1 | VT_ARRAY�Ƃ��ăf�[�^��߂�
	return E_NOTIMPL;
}
*/

/**	�t�@�C���̓��e�̐ݒ�
 *
 *	@param	newVal	:	[in] �t�@�C�����e
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalPutValue(VARIANT newVal)
{
	// �e�L�X�g�f�[�^�iVT_BSTR�j���o�C�i���f�[�^�iVT_UI1|VT_ARRAY�j���𔻕�
	if (newVal.vt == VT_BSTR) {		// �e�L�X�g�f�[�^
		// �f�[�^�̓]������
	}
	else {						// �o�C�i���f�[�^
		// �󂯎��p�����[�^���Q�ƌ^���m�F����
		SAFEARRAY* pSa;
		if (newVal.vt & VT_BYREF) {
			pSa = *(newVal.pparray);
		}
		else {
			pSa = newVal.parray;
		}
		// �f�[�^�̓]������
	}

	return E_NOTIMPL;
}
*/

/**	�t�@�C�������X�g�̎擾
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@param	pVal	:	[out] �t�@�C�������X�g
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetFileNames(BSTR bstrOption, VARIANT *pVal)
{
	// �t�@�C�������X�g�𕶎����SAFEARRAY�Ƃ��č쐬�D
    // ���̃|�C���^��VARIANT(pVal->vt = VT_BSTR|VT_ARRAY�CpVal->parray = xxx)�Ɋi�[����D
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
HRESULT CCaoProvFile::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
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
HRESULT CCaoProvFile::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvFile::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========
