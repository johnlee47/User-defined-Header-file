#include <jni.h>
#include "user.h"
#include <stdio.h>

JNIEXPORT void JNICALL 
Java_HelloWorld_displayHelloWorld(JNIEnv *env, jobject obj) 
{
  printf("Hello world!\n");
  return;
}
