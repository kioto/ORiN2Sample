/** @file CaoProvTask.h
 *
 *  @brief CCaoProvTask �̐錾
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVTASK_H_
#define __CAOPROVTASK_H_

#include "CaoProvTaskImpl.h"

/**	CAO�v���o�C�_��Task�N���X
 *
 *	�f���A���C���^�[�t�F�[�X������COM�̃N���X�D�ڍׂ�ICaoProvTask���Q�ƁD<br>
 *	CaoProvCtrl�N���X����Ăяo�����N���X�D�O������C���X�^���X�̍쐬�͕s�\�D<br>
 *  �C���^�[�t�F�[�X��ICaoProvTaskImpl�N���X�Ŏ�������Ă���D
 *
 */
class ATL_NO_VTABLE CCaoProvTask : 
	public ICaoProvTaskImpl<CCaoProvTask, CCaoProvVariable>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalDelete(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalStart(/*[in]*/ long lMode, /*[in]*/ BSTR bstrOption);
//	HRESULT FinalStop(/*[in]*/ long lMode, /*[in]*/ BSTR bstrOption);
//	HRESULT FinalExecute(/*[in]*/ BSTR bstrCommand, /*[in]*/ VARIANT vntParam, /*[out, retval]*/ VARIANT *pVal);

//	HRESULT FinalGetAttribute(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetFileName(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetVariableNames(/*[in]*/BSTR bstrOption, /*[out, retval]*/VARIANT *pVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

private:
// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========


};

#endif //__CAOPROVTASK_H_
