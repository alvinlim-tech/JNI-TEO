# JNI
Integrative Programming Assignment
Tolong Teo Buat Part 2 Question 2

gcc -Wall -D_JNI_IMPLEMENTATION_ -Wl,--kill-at -I "C:/Program Files/Java/jdk1.8.0_251/include" -I "C:/Program Files/Java/jdk1.8.0_251/include/win32" -shared Cnativedua.c -o Cnativedua.dll

gcc -Wall -D_JNI_IMPLEMENTATION_ -Wl,--kill-at -I "C:/Program Files/Java/jdk1.8.0_251/include" -I "C:/Program Files/Java/jdk1.8.0_251/include/win32" -shared Cnativetiga.c -o Cnativetiga.dll

gcc -Wall -D_JNI_IMPLEMENTATION_ -Wl,--kill-at -I "C:/Program Files/Java/jdk1.8.0_251/include" -I "C:/Program Files/Java/jdk1.8.0_251/include/win32" -shared CTest.c -o CTest.dll
