# -*- coding:utf-8 -*-

# Install
# pip install pywin32

from tkinter import *
from tkinter import ttk
import win32com.client

DEFAULT_IP_ADDRESS = '192.168.0.1'


class OrinCaoPingApp(object):

    def __init__(self):
        # CAOエンジンの作成
        self.eng = win32com.client.Dispatch('CAO.CaoEngine')
        self.caoWS = self.eng.Workspaces(0)

    def ping(self):
        # CAOコントローラの作成
        icmpCtrl = None
        try:
            icmpCtrl = self.caoWS.AddController('Sample', 'CaoProv.ICMP', '',
                                                'Host='+self.ip_addr.get())
            icmpVar = icmpCtrl.AddVariable('@ERROR_CODE')
            if int(icmpVar) == 0:
                msg = 'SUCCESS'
            else:
                msg = icmpVar
            self.res_msg.set(msg)
        except:
            self.res_msg.set('ERROR')

        if icmpCtrl:
            self.caoWS.Controllers.Remove(icmpCtrl.Index)

    def run(self):
        # GUIの生成
        root = Tk()
        root.title('ORiN ping')
        root.geometry('290x100')

        root.resizable(False, False)
        frame1 = ttk.Frame(root, padding=10)
        frame1.grid()

        label1 = ttk.Label(frame1, text='IP Address', padding=(5, 5))
        label1.grid(row=0, column=0, sticky=E)
        label2 = ttk.Label(frame1, text='Result', padding=(5, 5))
        label2.grid(row=1, column=0, sticky=E)

        # IP Address
        self.ip_addr = StringVar(value=DEFAULT_IP_ADDRESS)
        ip_addr_entry = ttk.Entry(frame1, textvariable=self.ip_addr, width=20)
        ip_addr_entry.grid(row=0, column=1)

        # ping button
        ping_button = ttk.Button(frame1, text='ping', width=7, command=self.ping)
        ping_button.grid(row=0, column=2)

        # Result message
        self.res_msg = StringVar()
        res_msg_entry = ttk.Entry(frame1, textvariable=self.res_msg, width=30)
        res_msg_entry.grid(row=1, column=1, columnspan=2)

        # Quit button
        button_quit = ttk.Button(frame1, text='Quit', width=43, command=quit)
        button_quit.grid(row=2, column=0, columnspan=3)

        root.mainloop()


if __name__ == '__main__':
    app = OrinCaoPingApp()
    app.run()
