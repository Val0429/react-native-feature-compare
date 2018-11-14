
# react-native-feature-compare

## Getting started

`$ npm install react-native-feature-compare --save`

### Mostly automatic installation

`$ react-native link react-native-feature-compare`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-feature-compare` and add `RNFeatureCompare.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNFeatureCompare.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.isap.featurecompare.RNFeatureComparePackage;` to the imports at the top of the file
  - Add `new RNFeatureComparePackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-feature-compare'
  	project(':react-native-feature-compare').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-feature-compare/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-feature-compare')
  	```


## Usage
```javascript
import RNFeatureCompare from 'react-native-feature-compare';

// TODO: What to do with the module?
RNFeatureCompare;
```
  