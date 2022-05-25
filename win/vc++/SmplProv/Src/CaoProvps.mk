
CAOPROVps.dll: dlldata.obj CAOPROV_p.obj CAOPROV_i.obj
	link /dll /out:CAOPROVps.dll /def:CAOPROVps.def /entry:DllMain dlldata.obj CAOPROV_p.obj CAOPROV_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del CAOPROVps.dll
	@del CAOPROVps.lib
	@del CAOPROVps.exp
	@del dlldata.obj
	@del CAOPROV_p.obj
	@del CAOPROV_i.obj
