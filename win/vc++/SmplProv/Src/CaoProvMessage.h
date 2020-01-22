/** @file CaoProvMessage.h
 *
 *  @brief CCaoProvMessage �̐錾
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVMESSAGE_H_
#define __CAOPROVMESSAGE_H_

#include "CaoProvMessageImpl.h"

/**	CAO�v���o�C�_��Message�N���X
 *
 *	�f���A���C���^�[�t�F�[�X������COM�̃N���X�D�ڍׂ�ICaoProvFile���Q�ƁD<br>
 *	CaoProvController�N���X����Ăяo�����N���X�D�O������C���X�^���X�̍쐬�͕s�\�D<br>
 *  �C���^�[�t�F�[�X��ICaoProvMessageImpl�N���X�Ŏ�������Ă���D
 *	OnMessage�C�x���g��Cao�G���W���ɑ�����N���X�D
 *
 */
class ATL_NO_VTABLE CCaoProvMessage : 
	public ICaoProvMessageImpl
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalReply(/*[in]*/ VARIANT vntData);
//	HRESULT FinalClear();

//	HRESULT FinalGetDateTime(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetDescription(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetDestination(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetNumber(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetSource(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetValue(/*[out, retval]*/ VARIANT *pVal);

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

private:
// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

};

#endif //__CAOPROVMESSAGE_H_
