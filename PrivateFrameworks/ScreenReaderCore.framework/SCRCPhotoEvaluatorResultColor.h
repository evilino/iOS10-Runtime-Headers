/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult  {
    float _redLevel;
    float _blueLevel;
    float _greenLevel;
}

@property(readonly) float redLevel;
@property(readonly) float blueLevel;
@property(readonly) float greenLevel;


- (id)humanReadableResult;
- (float)greenLevel;
- (float)blueLevel;
- (float)redLevel;
- (id)initWithRedLevel:(float)arg1 blueLevel:(float)arg2 greenLevel:(float)arg3;

@end