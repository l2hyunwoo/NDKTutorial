#include <jni.h>
#include <string>
#include "Calculator.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_hyunwoo_ndktutorial_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_hyunwoo_ndktutorial_MainActivity_stringFromHyunwooCustomizing(
        JNIEnv *env,
        jobject) {
    Calculator ex = Calculator(5);
    std::string answer = "5+6 = " + std::to_string(ex.getAdd(6));
    return env->NewStringUTF(answer.c_str());
}