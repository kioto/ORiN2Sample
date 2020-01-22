/** @file CaoProvRobot.cpp
 *
 *  @brief CCaoProvRobot �̎���
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvRobot.h"


/**	����������
 *
 *�@CaoProvRobot�I�u�W�F�N�g���쐬����čŏ��ɌĂ΂��֐��ł���D
 *
 *	@param	pObj	:	[in] �e�I�u�W�F�N�g
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvRobot::FinalInitialize(PVOID pObj)
{
	// CaoProvRobot�I�u�W�F�N�g���ʂ̏����������Ȃǂ��s���D
	return E_NOTIMPL; // ���̃N���X����������Ȃ�� S_OK �ɂ��ĉ������D
}
*/

/**	�ŏI����
 *
 *�@CaoProvRobot�I�u�W�F�N�g�����ł���Ƃ��ɂP�x�����Ă΂��D
 *
 *	@retval	HRESULT
 *
 */ 
/*
void CCaoProvRobot::FinalTerminate()
{
	// CaoProvRobot�I�u�W�F�N�g�̉���O����������D
}
*/

/**	ACCEL���̎��s
 *
 *�@ICaoRobot::Accelerate()�̎��̂ƂȂ�D
 *	SLIM��ACCEL���̎d�l�Q��
 *
 *	@param	lAxis	:	[in] ���ԍ�
 *	@param	fAccel	:	[in] �����x
 *	@param	fDecel	:	[in] �����x
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalAccelerate(long lAxis, float fAccel, float fDecel)
{
	return E_NOTIMPL;
}
*/

/**	CHANGE���̎��s
 *
 *�@ICaoRobot::Change()�̎��̂ƂȂ�D
 *	SLIM��CHANGE���̎d�l�Q��
 *
 *	@param	bstrName	:	[in] �n���h��
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalChange(BSTR bstrName)
{
	return E_NOTIMPL;
}
*/

/**	GRASP���̎��s
 *
 *�@ICaoRobot::Chuck()�̎��̂ƂȂ�D
 *	SLIM��GRASP���̎d�l�Q��
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalChuck(BSTR bstrOption)
{
	return E_NOTIMPL;
}
*/

/**	DRIVE���̎��s
 *
 *�@ICaoRobot::Drive()�̎��̂ƂȂ�D
 *	SLIM��DRIVE���̎d�l�Q��
 *
 *	@param	lNo	:	[in] ���ԍ�
 *	@param	fMov	:	[in] �ړ���
 *	@param	bstrOpt	:	[in] ����I�v�V����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalDrive(long lNo, float fMov, BSTR bstrOpt)
{
	return E_NOTIMPL;
}
*/

/**	GOHOME���̎��s
 *
 *�@ICaoRobot::GoHome()�̎��̂ƂȂ�D
 *	SLIM��GOHOME���̎d�l�Q��
 *
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalGoHome()
{
	return E_NOTIMPL;
}
*/

/**	������~
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalHalt(BSTR bstrOption)
{
	return E_NOTIMPL;
}
*/

/**	�ꎞ��~
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalHold(BSTR bstrOption)
{
	return E_NOTIMPL;
}
*/

/**	MOVE���̎��s
 *
 *�@ICaoRobot::Move()�̎��̂ƂȂ�D
 *	SLIM��MOVE���̎d�l�Q�ƁD
 *
 *	@param	lComp	:	[in] �⊮�w��
 *	@param	vntPose	:	[in] �|�[�Y��
 *	@param	bstrOpt	:	[in] ����I�v�V����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalMove(long lComp, VARIANT vntPose, BSTR bstrOpt )
{
	return E_NOTIMPL;
}
*/

/**	ROTATE���̎��s
 *
 *�@ICaoRobot::Rotate()�̎��̂ƂȂ�D
 *	SLIM��ROTATE���̎d�l�Q�ƁD
 *
 *	@param	vntRotSuf	:	[in] ��]��
 *	@param	fDeg	:	[in] �p�x
 *	@param	vntPivot	:	[in] ��]���S
 *	@param	bstrOpt	:	[in] ����I�v�V����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalRotate(VARIANT vntRotSuf, float fDeg, VARIANT vntPivot, BSTR bstrOpt )
{
	return E_NOTIMPL;
}
*/

/**	SPEED/JSPEED���̎��s
 *
 *�@ICaoRobot::Speed()�̎��̂ƂȂ�D
 *	SLIM��SPEED/JSPEED���̎d�l�Q��
 *
 *	@param	lAxis	:	[in] ���ԍ�
 *	@param	fSpeed	:	[in] ���x
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalSpeed(long lAxis, float fSpeed)
{
	return E_NOTIMPL;
}
*/

/**	RELEASE���̎��s
 *
 *�@ICaoRobot::Unchuck()�̎��̂ƂȂ�D
 *	SLIM��RELEASE���̎d�l�Q��<br>
 *�@SLIM��Release�͗\���Ŏg���Ȃ�����Chuck/Unchuck�ɕύX�D
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalUnchuck(BSTR bstrOption)
{
	return E_NOTIMPL;
}
*/

/**	�ꎞ��~�̉���
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalUnhold(BSTR bstrOption)
{
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
HRESULT CCaoProvRobot::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
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
HRESULT CCaoProvRobot::FinalGetAttribute(long *pVal)
{
    // ���{�b�g�̑����� LONG�^ �Ŏ擾����D
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
HRESULT CCaoProvRobot::FinalGetHelp(BSTR *pVal)
{
	// �C�ӂ̃w���v�������Ԃ��D
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
HRESULT CCaoProvRobot::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
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
HRESULT CCaoProvRobot::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvRobot::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========
