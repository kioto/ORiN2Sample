/** @file CaoProvVariable.h
 *
 *  @brief CCaoProvVariable �̐錾
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVVARIABLE_H_
#define __CAOPROVVARIABLE_H_

#include "CaoProvVariableImpl.h"

/**	CAO�v���o�C�_��Variable�N���X
 *
 *	�f���A���C���^�[�t�F�[�X������COM�̃N���X�D�ڍׂ�ICaoProvVariable���Q�ƁD<br>
 *	CaoProvController�N���X�CCaoProvExtension�N���X�CCaoProvFile�N���X�CCaoProvRobot�N���X<br>
 *  �y��CaoProvTask�N���X����Ăяo�����N���X�D<br>
 *  �O������C���X�^���X�̍쐬�͕s�\�D<br>
 *  �C���^�[�t�F�[�X��ICaoProvVariableImpl�N���X�Ŏ�������Ă���D
 *
 */
class ATL_NO_VTABLE CCaoProvVariable : 
	public ICaoProvVariableImpl<CCaoProvVariable>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalGetAttribute( /*[out, retval ]*/ long *pVal );
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetDateTime(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetValue(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutValue(/*[in]*/ VARIANT newVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);
//	HRESULT FinalGetMicrosecond(/*[out, retval]*/ long *pVal);

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========
	HRESULT InitMapTable();

private:
// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========
	HRESULT FinalGetCtrlSysValue(VARIANT *pVal);
	HRESULT FinalPutCtrlSysValue(VARIANT newVal);
	HRESULT FinalGetCtrlUserValue(VARIANT *pVal);
	HRESULT FinalPutCtrlUserValue(VARIANT newVal);

private:
// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

	// �ϐ������X�g
	static bool m_bInitializedMap;
	static var_map m_cs_map;

	long m_lUSysId;					// �V�X�e���ϐ��ԍ�

};

#endif //__CAOPROVTASKVARIABLE_H_
