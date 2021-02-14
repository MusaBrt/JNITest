#include <stdio.h>
#include "Main.h"

JNIEXPORT jintArray JNICALL Java_Main_getIntegers(JNIEnv *env, jobject jobj, jint intParam) {
    printf("Hello World from C!\n");

    jintArray jarray = (*env)->NewIntArray(env, intParam);
    printf("\n");

    for (int i = 0; i<intParam; i++) {
        int num;
        printf("Lutfen bir sayi girin: ");
        scanf("%i", &num);

        /*
        jclass boxedInteger = (*env)->FindClass(env, "java/lang/Integer");
        jmethodID integerValueOf = (*env)->GetStaticMethodID(env, boxedInteger, "valueOf", "(I)Ljava/lang/Integer;");
        jobject boxedNum = (*env)->CallStaticObjectMethod(env, boxedInteger, integerValueOf, num);

        (*env)->SetObjectArrayElement(env, jarray, (jsize) i, boxedNum);

        jintArray jobject'den üzerinden typedef olmasına rağmen yapısal olarak primitive array olduğu
        için üstteki kullanım segmentation fault yaratıyor
        */

        
        (*env)->SetIntArrayRegion(env, jarray, i, 1, &num);
        
    }

    return jarray;
}

JNIEXPORT jint JNICALL Java_Main_sum (JNIEnv *env, jobject jobj, jint a, jint b) {
    return a+b;
}
