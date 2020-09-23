javac Test.java
gcc -Wall -D_JNI_IMPLEMENTATION_ -Wl,--kill-at -I "C:/Program Files/Java/jdk1.8.0_251/include" -I "C:/Program Files/Java/jdk1.8.0_251/include/win32" -shared CTest.c -o CTest.dll
java Test
pause
:: start cmd.exe