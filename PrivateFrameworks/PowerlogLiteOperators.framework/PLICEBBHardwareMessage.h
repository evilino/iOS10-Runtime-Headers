/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLICEBBHardwareMessage : NSObject {
    NSDate * _bbMonotonic;
    NSNumber * _bbtimestamp;
    NSData * _data;
    PLAgent * _logAgent;
    NSString * _metricData;
    NSMutableArray * _metricDataArr;
    NSNumber * _metricId;
    NSMutableArray * _metricIdArr;
    PBCodable * _pbc;
    NSNumber * _triggerCnt;
    NSNumber * _triggerId;
}

@property (retain) NSDate *bbMonotonic;
@property (retain) NSNumber *bbtimestamp;
@property (retain) NSData *data;
@property (retain) PLAgent *logAgent;
@property (retain) NSString *metricData;
@property (retain) NSMutableArray *metricDataArr;
@property (retain) NSNumber *metricId;
@property (retain) NSMutableArray *metricIdArr;
@property (retain) PBCodable *pbc;
@property (retain) NSNumber *triggerCnt;
@property (retain) NSNumber *triggerId;

+ (id)entryEventBackwardDefinitionBBIceAnyHwStats;
+ (id)entryEventBackwardDefinitionBBIceEventMetrics;
+ (id)entryEventBackwardDefinitionBBIcePeriodicMetrics;

- (void).cxx_destruct;
- (void)addToListMetric:(id)arg1 payload:(id)arg2;
- (id)bbMonotonic;
- (id)bbtimestamp;
- (void)componentCarrierForClass:(id)arg1 forEntry:(id)arg2;
- (void)cpcStatsForClass:(id)arg1 forEntry:(id)arg2;
- (id)data;
- (id)decodeEventPayload:(id)arg1 forMetricId:(id)arg2;
- (id)decodePayload:(id)arg1 forMetricId:(id)arg2;
- (void)duplexModeForClass:(id)arg1 forEntry:(id)arg2;
- (id)init;
- (id)initEntryWithBBTS:(id)arg1 triggerId:(id)arg2 seqnum:(id)arg3 payload:(id)arg4 logAgent:(id)arg5;
- (id)logAgent;
- (void)logBBIceAperiodicMetrics;
- (void)logBBIcePeriodicMetrics;
- (id)metricData;
- (id)metricDataArr;
- (id)metricId;
- (id)metricIdArr;
- (id)pbc;
- (void)protocolHistForClass:(id)arg1 forEntry:(id)arg2;
- (void)rrcModeHistForClass:(id)arg1 forEntry:(id)arg2;
- (void)setBbMonotonic:(id)arg1;
- (void)setBbtimestamp:(id)arg1;
- (void)setData:(id)arg1;
- (void)setLogAgent:(id)arg1;
- (void)setMetricData:(id)arg1;
- (void)setMetricDataArr:(id)arg1;
- (void)setMetricId:(id)arg1;
- (void)setMetricIdArr:(id)arg1;
- (void)setPbc:(id)arg1;
- (void)setTriggerCnt:(id)arg1;
- (void)setTriggerId:(id)arg1;
- (id)triggerCnt;
- (id)triggerId;

@end