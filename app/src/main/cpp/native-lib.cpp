#include <jni.h>
#include <string>

extern "C" JNIEXPORT void JNICALL
//NAZWA PAKIETU/NAZWA KLASY/NAZWA FUNKCJI
Java_com_example_seekbarckotlin_MainActivity_onProgressChanged(
        JNIEnv *env,
        jobject,
        jint progress,
        jobject textView) {
    std::string progressStr = std::to_string(progress);
    jclass textViewClass = env->GetObjectClass(textView);
    jmethodID setTextMethod = env->GetMethodID(textViewClass, "setText", "(Ljava/lang/CharSequence;)V");
    jstring progressJString = env->NewStringUTF(progressStr.c_str());
    env->CallVoidMethod(textView, setTextMethod, progressJString);
    env->DeleteLocalRef(progressJString);
}
