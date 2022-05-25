import win32com.client
import time


class CalcClient(object):

    def __init__(self):
        # CAOエンジンの作成
        self._eng = win32com.client.Dispatch('CAO.CaoEngine')
        self._ws = self._eng.Workspaces(0)
        self._ctrl = self._ws.AddController('bb1', 'CaoProv.Blackboard')

        # 変数の追加
        self._var_cmd = self._ctrl.AddVariable('cmd')
        self._var_val1 = self._ctrl.AddVariable('val1')
        self._var_val2 = self._ctrl.AddVariable('val2')
        self._var_res = self._ctrl.AddVariable('res')
        self._var_ack = self._ctrl.AddVariable('ack')

    def calc(self, cmd_str, val1, val2):
        print(f'calc({cmd_str}, {val1}, {val2})')
        self._var_val1.Value = val1
        self._var_val2.Value = val2
        self._var_cmd.Value = cmd_str  # ここで計算が実行

        # 計算の終了待ち
        while True:
            if self._var_ack.Value is True:
                break
            time.sleep(0.1)
        
        res = self._var_res.Value
        print(' = ', res)
        time.sleep(1)

if __name__ == '__main__':
    cc = CalcClient()
    cc.calc('ADD', 123, 567)
    cc.calc('SUB', 123, 567)
    cc.calc('MUL', 123, 567)
    cc.calc('DIV', 123, 567)