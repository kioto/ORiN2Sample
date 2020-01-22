/** @file CaoProvVariable.cpp
 *
 *  @brief CCaoProvVariable �̎���
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvVariable.h"

/**	����������
 *
 *�@CaoProvVariable�I�u�W�F�N�g���쐬����čŏ��ɌĂ΂��֐��ł���D
 *
 *	@param	pObj	:	[in] �e�I�u�W�F�N�g
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvVariable::FinalInitialize(PVOID pObj)
{
	HRESULT hr = E_INVALIDARG;

	// MapTable�̏�����
	InitMapTable();

	CCaoProvController* pCaopCtrl = NULL;
	CCaoProvExtension* pCaopExp = NULL;
	CCaoProvFile* pCaopFile = NULL;
	CCaoProvRobot* pCaopRobot = NULL;
	CCaoProvTask* pCaopTask = NULL;

	// �f�[�^�����o�[�̏�����
	m_lUSysId = 0;

	// �e�I�u�W�F�N�g�̔���
	switch (m_ulParentType) {
	case SYS_CLS_CONTROLLER:
		pCaopCtrl = (CCaoProvController*)pObj;
		if (m_bSystem) {
			// �V�X�e���ϐ�
			// �ϐ�������ID����
			var_map::iterator it;
			it = m_cs_map.find(m_bstrName);
			if (it != m_cs_map.end()){
				m_lUSysId = (it->second);
				hr = S_OK;
			} else {
				hr = E_INVALIDARG;
			}
		}
		else {
			// ���[�U�[�ϐ�
			hr = E_INVALIDARG;
		}
		break;
	case SYS_CLS_EXTENSION:
		pCaopExp = (CCaoProvExtension*)pObj;
		break;
	case SYS_CLS_FILE:
		pCaopFile = (CCaoProvFile*)pObj;
		break;
	case SYS_CLS_ROBOT:
		pCaopRobot = (CCaoProvRobot*)pObj;
		break;
	case SYS_CLS_TASK:
		pCaopTask = (CCaoProvTask*)pObj;
		break;
	}

	return hr;
}
*/

/**	�ŏI����
 *
 *�@CaoProvVariable�I�u�W�F�N�g�����ł���Ƃ��ɂP�x�����Ă΂��D
 *
 */ 
/*
void CCaoProvVariable::FinalTerminate()
{
	// CaoProvVariable�I�u�W�F�N�g�̉���O����������D
}
*/

/**	�����̎擾
 *
 *�@ICaoVariable::Attribute()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] ����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvVariable::FinalGetAttribute(long *pVal)
{
	// �ϐ��̑������擾����D
	return E_NOTIMPL;
}
*/

/**	�w���v�̎擾
 *
 *�@�R�����g�����i�[���Ă����D
 *�@ICaoVariable::Help()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out] �w���v������
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvVariable::FinalGetHelp(BSTR *pVal)
{
	// �C�ӂ̃w���v�������Ԃ��D
	return E_NOTIMPL;
}
*/

/**	�l�̃^�C���X�^���v�̎擾
 *
 *�@ICaoVariable::DateTime()�v���p�e�B�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[out]  �����f�[�^
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvVariable::FinalGetDateTime(VARIANT *pVal)
{
	// �R���g���[���̕ϐ��ɃA�N�Z�X�������Ԃ��擾����D
	// �f�t�H���g�����̂܂܂ł���΁Cm_vntDateTime����l���擾����D
	return E_NOTIMPL;
}
*/

/**	�ϐ��̒l�̎擾
 *
 *�@ICaoVariable::get_Value()�̎��̂ƂȂ�D
 *
 *	@param	pVal	:	[in]  �ϐ��l
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvVariable::FinalGetValue(VARIANT *pVal)
{
	HRESULT hr = E_ACCESSDENIED;

	if (m_bSystem) {
		switch (m_ulParentType) {
		case SYS_CLS_CONTROLLER:
			hr = FinalGetCtrlSysValue(pVal);
			break;
		}
	}
	else {
		switch (m_ulParentType) {
		case SYS_CLS_CONTROLLER:
			hr = FinalGetCtrlUserValue(pVal);
			break;
		}
	}

	return hr;
}
*/

/**	�ϐ��̒l�̕ύX
 *
 *�@ICaoVariable::put_Value()�̎��̂ƂȂ�D
 *
 *	@param	newVal	:	[in]  �ϐ��l
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvVariable::FinalPutValue(VARIANT newVal)
{
	HRESULT hr = E_ACCESSDENIED;

	if (m_bSystem) {
		switch (m_ulParentType) {
		case SYS_CLS_CONTROLLER:
			hr = FinalPutCtrlSysValue(newVal);
			break;
		}
	}
	else {
		switch (m_ulParentType) {
		case SYS_CLS_CONTROLLER:
			hr = FinalPutCtrlUserValue(newVal);
			break;
		}
	}
	return hr;
}
*/

/**	ID�̎擾
 *
 *	@param	pVal	:	[out] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvVariable::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvVariable::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

/**	�}�C�N���b�̃^�C���X�^���v�̎擾
 *
 *	@param	pVal	:	[out] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvVariable::FinalGetMicrosecond(long *pVal)
{
	return E_NOTIMPL;
}
*/

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

// �ϐ������X�g�̎���
var_map CCaoProvVariable::m_cs_map;
bool CCaoProvVariable::m_bInitializedMap = false;


/**	�ϐ����e�[�u���̏�����
 *
 *	@retval	HRESULT
 *
 */  
HRESULT  CCaoProvVariable::InitMapTable()
{
	if (m_bInitializedMap) return S_FALSE;

	// �ϐ����}�b�v�̏�����
	const var_map_entry var_cs_map[] = { 
		MAP_ENTRY( CS_MAKER_NAME	),
		MAP_ENTRY( CS_VERSION	),
		// :

		};
	m_cs_map.insert( var_cs_map, var_cs_map +sizeof(var_cs_map)/sizeof(var_cs_map[0]) );

	m_bInitializedMap = true;

	return S_OK;
}

/**	�R���g���[���N���X�V�X�e���ϐ��̒l�̎擾
 *
 *	@param	pVal	:	[out]  �ϐ��l
 *	@retval	HRESULT
 *
 */  
HRESULT CCaoProvVariable::FinalGetCtrlSysValue(VARIANT *pVal)
{
	HRESULT hr = S_OK;

	switch (m_lUSysId) {
	case CS_MAKER_NAME:
		pVal->vt = VT_BSTR;
		pVal->bstrVal = SysAllocString(L"Maker Name ???");
		break;

	case CS_VERSION:
		pVal->vt = VT_BSTR;
		pVal->bstrVal = SysAllocString(L"0.0.0");
		break;
	default:
		hr = E_ACCESSDENIED;
		break;
	}

	return hr;
}

/**	�R���g���[���N���X�V�X�e���ϐ��̒l�̐ݒ�
 *
 *	@param	newVal	:	[in]  �ϐ��l
 *	@retval	HRESULT
 *
 */  
HRESULT CCaoProvVariable::FinalPutCtrlSysValue(VARIANT newVal)
{
	HRESULT hr = E_ACCESSDENIED;

	return hr;
}

/**	�R���g���[�����[�U�[�ϐ��̒l�̎擾
 *
 *	@param	pVal	:	[in]  �ϐ��l
 *	@retval	HRESULT
 *
 */  
HRESULT CCaoProvVariable::FinalGetCtrlUserValue(VARIANT *pVal)
{
	return E_NOTIMPL;
}

/**	�R���g���[�����[�U�[�ϐ��̒l�̕ύX
 *
 *	@param	newVal	:	[in]  �ϐ��l
 *	@retval	HRESULT
 *
 */  
HRESULT CCaoProvVariable::FinalPutCtrlUserValue(VARIANT newVal)
{
	return E_NOTIMPL;
}

