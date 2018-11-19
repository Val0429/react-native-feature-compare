#include <jni.h>
#include <string>

extern char* faceFeatureCompare(const char *source, int sourceLen, const char *target, int targetLen);

extern "C"
JNIEXPORT int JNICALL
Java_com_isap_utility_FeatureCompare_faceFeatureCompare(
        JNIEnv *env,
        jobject /* this */,
        jbyteArray srcArray,
        jint srcSize,
        jbyteArray tarArray,
        jint tarSize,
        jbyteArray output) {

    jbyte* imgS =  env->GetByteArrayElements(srcArray, 0 );
    jbyte* imgT =  env->GetByteArrayElements(tarArray, 0 );
    jbyte* out  =  env->GetByteArrayElements(output, NULL);

    char* value = faceFeatureCompare((const char*)imgS, srcSize, (const char*)imgT, tarSize);
    int size = strlen(value);

    memcpy(out, value, size);

    env->ReleaseByteArrayElements(output, out, 0);
    env->ReleaseByteArrayElements(tarArray, imgT, 0);
    env->ReleaseByteArrayElements(srcArray, imgS, 0);

    return size;
}