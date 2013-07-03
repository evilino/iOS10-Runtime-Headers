/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface MPUsageStatistics : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_domain;
    NSString *_lastAggregateStatisticsDisplayCountKey;
    double _lastAggregateStatisticsDisplayCountTime;
}

+ (id)sharedStatistics;

- (void)setAggregateStatisticsDomain:(id)arg1;
- (void)incrementViewDisplayCountForKey:(id)arg1;
- (void)incrementViewDisplayCountForViewController:(id)arg1;
- (id)init;
- (id)domain;
- (void).cxx_destruct;

@end