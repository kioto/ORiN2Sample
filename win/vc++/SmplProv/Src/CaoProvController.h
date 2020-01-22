/** @file CaoProvController.h
 *
 *  @brief CCaoProvController �̐錾
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVCONTROLLER_H_
#define __CAOPROVCONTROLLER_H_

#include "resource.h"       // ���C�� �V���{��
#include "CAOPROVCP.h"
#include "CaoProvCommand.h"
#include "CaoProvVariable.h"
#include "CaoProvRobot.h"
#include "CaoProvFile.h"
#include "CaoProvTask.h"
#include "CaoProvExtension.h"
#include "CaoProvControllerImpl.h"

#include "FuncExecMap.h" // ORiN2/CAO/Include

/**	CAO�v���o�C�_��Controller�N���X
 *
 *	�f���A���C���^�[�t�F�[�X������COM�̃N���X�D�ڍׂ�ICaoProvController���Q�ƁD<br>
 *	CAO�v���o�C�_�ɂ�����COM�N���C�A���g���B��C���X�^���X�쐬�\�ȃN���X�D<br>
 *  �C���^�[�t�F�[�X��ICaoProvControllerImpl�N���X�Ŏ�������Ă���D
 *
 */
class ATL_NO_VTABLE CCaoProvController : 
	public ICaoProvControllerImpl<CCaoProvController, CCaoProvExtension, CCaoProvFile, CCaoProvRobot, CCaoProvTask, CCaoProvVariable, CCaoProvCommand, CCaoProvMessage>,
	public CFuncExecMap<CCaoProvController>
{
protected:
	HRESULT FinalInitialize();
//	void FinalTerminate();

	HRESULT FinalConnect();
	HRESULT FinalDisconnect();
//	HRESULT FinalExecute(/*[in]*/ BSTR bstrCommand, /*[in]*/ VARIANT vntParam, /*[out, retval]*/ VARIANT *pVal);

//	HRESULT FinalGetAttribute(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetCommandNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetExtensionNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetFileNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetRobotNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetTaskNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
	HRESULT FinalGetVariableNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);

public:
#if CAOP_TIMER_INTERVAL > 0
	void OnTimer();
#endif

#ifdef CAOP_CANCEL_SUPPORT
	HRESULT GetProviderCancelStatus();
	HANDLE GetProviderCancelHandle();
#endif

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

private:
#ifdef CAOP_CANCEL_SUPPORT
	// Execute�̃R�}���h
	HRESULT ExecProviderClear(VARIANT vntParam, VARIANT *pVal);
	HRESULT ExecProviderCancel(VARIANT vntParam, VARIANT *pVal);
	// �v���o�C�_�L�����Z���Ή��T���v��
	HRESULT ExecProviderCancelSampleMethod(VARIANT vntParam, VARIANT *pVal);
#endif

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========
	HRESULT ParseConnectionString();

private:
#ifdef CAOP_CANCEL_SUPPORT
	// ProviderCancel��ʒm����C�x���g
	HANDLE m_hProviderCancelEvent;	
#endif
};

#endif //__CAOPROVCONTROLLER_H_
