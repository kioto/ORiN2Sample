# ORiN2Sample

ORiN2のサンプルプログラム

## 1. 準備

pip install pywin32

を実行しておくいこと。

## 2. CAOプロバイダサンプルについて

### 2-1. 構成

CAOプロバイダサンプルプログラムは、ORiN2 SDKがインストールされたWindows10の環境で動作する。<br>
Visual Studio 2015以降と、公式版Python(Windows版)で動作確認を行っている。

CAOプロバイダサンプルは、以下の２つのプログラムで構成されている。

```
win/vc++/SmplProv/          CAOプロバイダ本体プロジェクト(Visual C++)
win/python/CAO/caoApp.py    CAOアプリケーション
```

### 2-2. インストール

1. CAOプロバイダ本体を、Visual Studioでビルドする
2. ビルド後のコマンド実行`regsrv32`でエラーが発生するので、管理者コマンドでコマンドプロンプト、あるいはPowerShellを起動して、以下のコマンドを実行する

```
> refsvr32 <install_path>¥win¥vc++¥SmplPrev¥Bin¥SmplProv.dll
```

### 2-3. 動作確認

コマンドプロンプト、あるいはPowerShellから以下のコマンドを実行し、メッセージが表示されることを確認する。

```
> python <install_path>\win\python\CAO¥caoApp.py
@MAKER_NAME: Maker Name ???
@STATUS: initialized

@COMMAND RUN
@STATUS: running
@COMMAND STOP
@STATUS: standby
done
```
