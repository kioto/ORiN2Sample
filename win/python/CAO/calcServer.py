import win32com.client
import time


class CalcServer(object):

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

        # 変数の初期化
        self._var_cmd.Value = ''
        self._var_val1.Value = 0
        self._var_val2.Value = 0
        self._var_res.Value = 0
        self._var_ack.Value = False

    def run(self):
        print('running...')
        while True:
            cmd = self._var_cmd.Value
            if cmd:
                # コマンドを受け取ったらクリアする
                self._var_cmd.Value = ''

                # 計算に使用する値を取得
                val1 = self._var_val1.Value
                val2 = self._var_val2.Value

                res = 0
                if cmd == 'ADD':
                    res = val1 + val2
                elif cmd == 'SUB':
                    res = val1 - val2
                elif cmd == 'MUL':
                    res = val1 * val2
                elif cmd == 'DIV':
                    res = val1 / val2

                self._var_res.Value = res

                # 1秒間だけACKをTrueにする
                self._var_ack.Value = True
                time.sleep(1)
                self._var_ack.Value = False

            time.sleep(1)


if __name__ == '__main__':
    cs = CalcServer()
    cs.run()