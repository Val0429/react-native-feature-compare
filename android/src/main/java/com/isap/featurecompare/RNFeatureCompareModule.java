
package com.isap.featurecompare;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.Callback;

public class RNFeatureCompareModule extends ReactContextBaseJavaModule {

  private final ReactApplicationContext reactContext;

  public RNFeatureCompareModule(ReactApplicationContext reactContext) {
    super(reactContext);
    this.reactContext = reactContext;
  }

  @Override
  public String getName() {
    return "RNFeatureCompare";
  }
}