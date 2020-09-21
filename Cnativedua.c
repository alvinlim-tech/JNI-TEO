#include "jni.h"
#include "stdio.h"
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
JNIEXPORT jcharArray JNICALL Java_Test_getNativeDua(JNIEnv *env, jobject obj, jint size){
  int i;
  char sementara;
  jchar arraybudak[size];
  printf("\n\n###Enter Character For Your Array###\n");
  for(i=0;i<size;i++){
  printf("Enter Character:");
  scanf("%c",&sementara);
  fflush(stdin);
  arraybudak[i] = sementara;
  }

 // create new array with the given length
 jcharArray hasil = (*env)->NewCharArray(env, size);
 // update the new created array result
 (*env)->SetCharArrayRegion(env, hasil, 0, size, arraybudak);

 return hasil;

}
//Other Method To Retrieve User Input For Characters single line input
/*
printf("\n\nEnter Characters :");
gets(ambil);
strcpy(sementara,ambil);

do{
 arraybudak[i] = sementara[i];
 i++;
}while(
*/
