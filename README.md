# OpenGL_Basic using freeglut.lib
Download freeglut 3.0.0 MSVC Package from https://www.transmissionzero.co.uk/software/freeglut-devel/
Create OpenGL project, such as OpenGLIntroduction 
Extract "freeglut 3.0.0 MSVC Package" to Dependencies folder inside the OpenGl project which is the same root of OpenGLIntroduction.sln

Dependencies -> freeglut -> bin + include + lib
Inside: bin: Win32(freeglut.dll) + x64(freeglut.dll)
Inside: include -> GL folder ->  (greeglut.h + greeglut_ext.h + greeglut_std.h + glut.h)
Inside: lib: Win32(freeglut.lib) + x64(freeglut.lib)

For file.h
•	or C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.15.26726\include
1.	AntTweakBar.h(16KB)
2.	freeglut.h(1KB)
3.	freeglut_ext.h(9KB)
4.	freeglut_std.h(26KB)

For lib X86:
•	or: C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\lib\x86
1.	AntTweakBar.lib(15KB)
2.	freeglu.lib(35KB)
3.	glut32.lib(29KB)

For lib X64:
•	C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\lib\amd64
•	C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\lib\x64
1.	AntTweakBar64.lib(14KB)
2.	freeglut.lib(33KB)
3.	glut32.lib(29KB)

For gl folder
•	C:\Program Files (x86)\Windows Kits\8.1\Include\um\gl
•	or C:\Program Files (x86)\Windows Kits\10\Include\10.0.17763.0\um\gl
1.	GL.h(68KB)
2.	GLU.h(19KB)
3.	glut.h
4.	AntTweakBar.h(16KB)

C:\Windows\System32
1.	AntTweakBar64.dll(757KB)
2.	freeglut.dll(212KB)

C:\Windows\SysWOW64
1.	AntTweakBar.dll(628KB)
2.	freeglut.dll(267KB)

