/** @file CaoProvCommand.h
 *
 *  @brief CCaoProvCommand �̐錾
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVCOMMAND_H_
#define __CAOPROVCOMMAND_H_

#include "CaoProvCommandImpl.h"

/**	CAO�v���o�C�_��Command�N���X
 *
 *	�f���A���C���^�[�t�F�[�X������COM�̃N���X�D�ڍׂ�ICaoProvCommand���Q�ƁD<br>
 *	CaoProvCommand�N���X����Ăяo�����N���X�D�O������C���X�^���X�̍쐬�͕s�\�D<br>
 *  �C���^�[�t�F�[�X��ICaoProvCommandImpl�N���X�Ŏ�������Ă���D
 *
 */
class ATL_NO_VTABLE CCaoProvCommand : 
	public ICaoProvCommandImpl<CCaoProvCommand>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalExecute(/*[in]*/ long lMode, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalCancel();

//	HRESULT FinalGetAttribute(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetParameters(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutParameters(/*[in]*/ VARIANT newVal);
//	HRESULT FinalGetState(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetTimeout(/*[out, retval]*/ long *pVal);
//	HRESULT FinalPutTimeout(/*[in]*/ long newVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

private:
// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========


};

#endif //__CAOPROVCOMMAND_H_
