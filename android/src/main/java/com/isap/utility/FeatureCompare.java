package com.isap.utility;

/**
 * Created by Neo on 2018/10/4.
 */

public class FeatureCompare {

    static {
        System.loadLibrary("FeatureCompareInterface");
    }

    public static native int faceFeatureCompare(byte[] src, int src_size, byte[] target, int target_size, byte[] output);
}
