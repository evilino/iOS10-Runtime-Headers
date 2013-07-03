/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString, GKPlayer;

@interface GKJavascriptAccount : NSObject  {
    NSString *_authToken;
    GKPlayer *_player;
}

@property(readonly) NSString * playerId;
@property(readonly) NSString * alias;
@property(retain) NSString * authToken;
@property(retain) GKPlayer * player;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;

- (id)playerId;
- (id)initWithPlayer:(id)arg1 authToken:(id)arg2;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (id)alias;
- (void)setPlayer:(id)arg1;
- (id)player;
- (id)attributeKeys;
- (void)dealloc;

@end