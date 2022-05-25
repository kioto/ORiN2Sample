import win32com.client
import time

PICTFILE = 'picture.png'


class WebCamera(object):

    def __init__(self):
        self._eng = win32com.client.Dispatch('CAO.CaoEngine')
        self._ws = self._eng.Workspaces(0)

    def run(self):
        # カウントダウン
        for count in range(3, 0, -1):
            print(count)
            time.sleep(1)
        print('snap')

        # 撮影
        self._ctrl = self._ws.AddController('Cam1', 'CaoProv.Directshow', '', 'ImageType=2')
        time.sleep(1)  # 画像データ転送のため
        picture = self._ctrl.AddFile('Picture')
        with open(PICTFILE, 'wb') as f:
            f.write(picture.Value)

        print('Save a picture file', PICTFILE)


if __name__ == '__main__':
    wc = WebCamera()
    wc.run()
