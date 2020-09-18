#include "jni.h"
#include "stdio.h"
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
JNIEXPORT jcharArray JNICALL Java_Test_alphabet(JNIEnv *env, jobject obj, jint size){

  //Generate Random Character Based on User input Size
  srand(time(NULL));
  int i;
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  jchar password[size];
  for( i=0; i < size; i++){
    password[i]   = alphabet[rand() % strlen(alphabet)];
    //printf("%c", password[i]);
  }
  // create new array with the given length
  jcharArray result = (*env)->NewCharArray(env, size);

  // update the new created array result
  (*env)->SetCharArrayRegion(env, result, 0, size, password);
  return result;
}
