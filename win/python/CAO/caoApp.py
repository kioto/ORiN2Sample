# -*- coding:utf-8 -*-

# Install
# pip install pywin32

import inspect
import tkinter as tk
import win32com.client

# CAOエンジンの作成
eng = win32com.client.Dispatch('CAO.CaoEngine')
caoWS = eng.Workspaces(0)
# CAOコントローラの作成
caoCtrl = caoWS.AddController('smpl1', 'CaoProv.Vdr.Smpl')

# 変数取り出し
var_maker_name = caoCtrl.AddVariable('@MAKER_NAME')
print('@MAKER_NAME:', var_maker_name)
# 変数@STATUSを取り出し、値をセットする
var_status = caoCtrl.AddVariable('@STATUS')
print('@STATUS:', var_status)

print()

# 変数COMMANDを取り出し、値をセットする
var_command = caoCtrl.AddVariable('@COMMAND')
print('@COMMAND RUN')
var_command.Value = 'RUN'
print('@STATUS:', var_status)

print('@COMMAND STOP')
var_command.Value = 'STOP'
print('@STATUS:', var_status)

print('done')
