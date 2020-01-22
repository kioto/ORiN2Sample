/** @file CaoProvRobot.h
 *
 *  @brief CCaoProvRobot �̐錾
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVROBOT_H_
#define __CAOPROVROBOT_H_

#include "CaoProvRobotImpl.h"

/**	CAO�v���o�C�_��Robot�N���X
 *
 *	�f���A���C���^�[�t�F�[�X������COM�̃N���X�D�ڍׂ�ICaoProvRobot���Q�ƁD<br>
 *	CaoProvCtrl�N���X����Ăяo�����N���X�D�O������C���X�^���X�̍쐬�͕s�\�D<br>
 *  �C���^�[�t�F�[�X��ICaoProvRobotImpl�N���X�Ŏ�������Ă���D
 *
 */
class ATL_NO_VTABLE CCaoProvRobot : 
	public ICaoProvRobotImpl<CCaoProvRobot, CCaoProvVariable>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalAccelerate(/*[in]*/ long lAxis, /*[in]*/ float fAccel, /*[in]*/ float fDecel);
//	HRESULT FinalChange(/*[in]*/ BSTR bstrName);
//	HRESULT FinalChuck(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalDrive(/*[in]*/ long lNo, /*[in]*/ float fMov, /*[in]*/ BSTR bstrOpt);
//	HRESULT FinalGoHome();
//	HRESULT FinalHalt(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalHold(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalMove(/*[in]*/ long lComp, /*[in]*/ VARIANT vntPose, /*[in]*/ BSTR bstrOpt);
//	HRESULT FinalRotate(/*[in]*/ VARIANT vntRotSuf, /*[in]*/ float fDeg, /*[in]*/ VARIANT vntPivot, /*[in]*/ BSTR bstrOpt);
//	HRESULT FinalSpeed(/*[in]*/ long lAxis, /*[in]*/ float fSpeed);
//	HRESULT FinalUnchuck(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalUnhold(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalExecute(/*[in]*/ BSTR bstrCommand, /*[in]*/ VARIANT vntParam, /*[out, retval]*/ VARIANT *pVal);

//	HRESULT FinalGetAttribute(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetVariableNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

private:
// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

};

#endif //__CAOPROVROBOT_H_
