#include "jni.h"
#include "stdio.h"
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
JNIEXPORT jcharArray JNICALL Java_Test_getNativeDua(JNIEnv *env, jobject obj, jint size){
  int i=0;
  char sementara[size];
  char ambil[size];
  jchar arraybudak[size];
  printf("\nEnter Characters :");
  gets(ambil);
  strcpy(sementara,ambil);

 do{
   arraybudak[i] = sementara[i];
   i++;
 }while(i<size);


 jcharArray hasil = (*env)->NewCharArray(env, size);
 (*env)->SetCharArrayRegion(env, hasil, 0, size, arraybudak);

 return hasil;


}
