/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_github_sviengine_glsurface_SVIGLSurface */

#ifndef _Included_com_github_sviengine_glsurface_SVIGLSurface
#define _Included_com_github_sviengine_glsurface_SVIGLSurface
#ifdef __cplusplus
extern "C" {
#endif
#undef com_github_sviengine_glsurface_SVIGLSurface_DEBUG
#define com_github_sviengine_glsurface_SVIGLSurface_DEBUG 1L

void requestRenderGLSurface(jobject);
void nativeUpdate(jobject);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeGetHandle
 * Signature: ()V
 */
JNIEXPORT jint JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeGetHandle
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeInitSVIGLSurface
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeInitSVIGLSurface
  (JNIEnv *, jclass, jint, jint);

JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeDeInitSVIGLSurface
(JNIEnv*, jclass, jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeResizeSVIGLSurface
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeResizeSVIGLSurface
  (JNIEnv *, jclass, jint, jint, jint,jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeRenderSVIGLSurface
 * Signature: (IZ)V
 * @param updateMsg - The update message.
 * @param isGlContextChanged - true if gl context has changed.
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeRenderSVIGLSurface
  (JNIEnv *, jclass, jint updateMsg, jboolean isGlContextChanged,jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeResumeSVIGLSurface
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeResumeSVIGLSurface
  (JNIEnv *, jclass,jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativePauseSVIGLSurface
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativePauseSVIGLSurface
  (JNIEnv *, jclass,jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeForceEndAllAnimationSVIGLSurface
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeForceEndAllAnimationSVIGLSurface
  (JNIEnv *, jclass,jint);

/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeSetAssetManager
 * Signature: (Landroid/content/res/AssetManager,I)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeSetAssetManager
  (JNIEnv *, jclass, jobject,jint);


JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeSwapAnimationSVIGLSurface
	(JNIEnv *, jclass,jint);

//2012-01-02 masterkeaton27@gmail.com
//display & log fps info.
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeEnableShowFPS
	(JNIEnv *, jclass, jboolean,jint);

JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeEnableLogFPS
	(JNIEnv *, jclass, jboolean,jint);

//2012-12-17 masterkeaton27@gmail.com
//post effect flag
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeEnablePostEffect
    (JNIEnv *, jclass, jboolean,jint);

//2013-02-01 masterkeaton27@gmail.com
//post ripple effect flag
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeEnablePostRippleEffect
    (JNIEnv *, jclass, jboolean,jint);

//2012-01-13 masterkeaton27@gmail.com
//enable translucent
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeEnableTranslucent
	(JNIEnv *, jclass, jboolean,jint);

//2012/04/03 rareboy0112@facebook.com
//enable update listener
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeEnableUpdateListener
	(JNIEnv *, jclass, jboolean,jint);


//2012-03-30 masterkeaton27@gmail.com
/*
 * Class:     com_github_sviengine_slide_SVIGLSurface
 * Method:    nativeGetFPS
 * Signature: (I)F
 */
JNIEXPORT jboolean JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeGetFirstLoadFinished
	(JNIEnv *, jclass,jint);

//2012-06-22 masterkeaton27@gmail.com
/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativeClearRemainTexture
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativeClearRemainTexture
  (JNIEnv *, jclass,jint);

//2013-01-31 masterkeaton27@gmail.com
/*
 * Class:     com_github_sviengine_glsurface_SVIGLSurface
 * Method:    nativePostDropRipple
 * Signature: (FFFI)V
 */
JNIEXPORT void JNICALL Java_com_github_sviengine_glsurface_SVIGLSurface_nativePostDropRipple
    (JNIEnv *, jclass, jfloat, jfloat, jfloat,jint);

#ifdef __cplusplus
}
#endif
#endif

