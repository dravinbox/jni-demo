#include "com_qjl_nativee_HelloNative.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_com_qjl_nativee_HelloNative_sayHello
(JNIEnv * env, jobject jo)
{
  printf("hello,my JNI!!!");
}
