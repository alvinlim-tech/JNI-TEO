#include "jni.h"
#include "stdio.h"
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
JNIEXPORT jintArray JNICALL Java_Test_getNativeTiga(JNIEnv *env, jobject obj,jintArray satu,jcharArray dua, jint size){

  //Set Array Variable
  jchar   arraysatu[size];
  jchar   arraydua[size];
  char    sementara1[size];
  char    sementara2[size];
  int     cuba[size];
  int     i=0;

  jsize len = (*env)->GetArrayLength(env, satu);
  (*env) -> GetCharArrayRegion(env, satu, 0, len, arraysatu);
  (*env) -> GetCharArrayRegion(env, dua, 0, len, arraydua);

  do{
    sementara1[i] = arraysatu[i];
    sementara2[i] = arraydua[i];
    if(sementara1[i]==sementara2[i]){
      cuba[i] = 0;
    }
    else{
      cuba[i] = 1;
    }
    i++;
  }while(i<size);

  jintArray hasil = (*env)->NewIntArray(env, size);
  (*env)->SetIntArrayRegion(env, hasil, 0, size, (jint *)cuba);

  return hasil;
}
