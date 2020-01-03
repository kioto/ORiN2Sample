# -*- coding:utf-8 -*-

# Install
# pip install pywin32

import tkinter as tk
import win32com.client


class OrinCaoVariableApp(object):

    def __init__(self):
        # CAOエンジンの作成
        self.eng = win32com.client.Dispatch('CAO.CaoEngine')
        self.caoWS = self.eng.Workspaces(0)
        # CAOコントローラの作成
        self.caoCtrl = self.caoWS.AddController('bb1', 'CaoProv.Blackboard')
        # 変数の追加
        self.var1 = self.caoCtrl.AddVariable('var1')
        # tkinter初期化
        self.root = tk.Tk()
        self.root.title('ORiN Blackboard')
        self.set_value = tk.StringVar()
        self.get_value = tk.StringVar()

    def set_variable(self):
        self.var1.Value = self.set_value.get()
        self.get_variable()

    def get_variable(self):
        self.get_value.set(self.var1.Value)

    def run(self):
        # Set
        frame_set = tk.Frame(self.root, padx=5, pady=5)
        frame_set.pack()
        label_set = tk.Label(frame_set, text='Set variable')
        label_set.pack(side=tk.LEFT)
        set_value_entry = tk.Entry(frame_set, textvariable=self.set_value,
                                   width=20)
        set_value_entry.pack(side=tk.LEFT)
        button_set = tk.Button(frame_set, text='Set', width=7,
                               command=self.set_variable)
        button_set.pack(side=tk.LEFT)

        # Get
        frame_get = tk.Frame(self.root, padx=5, pady=5)
        frame_get.pack()
        label_get = tk.Label(frame_get, text='Get variable')
        label_get.pack(side=tk.LEFT)
        get_value_entry = tk.Entry(frame_get, textvariable=self.get_value,
                                   width=20)
        get_value_entry.pack(side=tk.LEFT)
        button_get = tk.Button(frame_get, text='Get', width=7,
                               command=self.get_variable)
        button_get.pack(side=tk.LEFT)

        # Quit
        button_quit = tk.Button(self.root, text='Quit', command=quit)
        button_quit.pack(fill=tk.BOTH)

        # Update Get entry
        self.get_variable()
        
        self.root.mainloop()

if __name__ == '__main__':
    app = OrinCaoVariableApp()
    app.run()
