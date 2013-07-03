/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDate, NSArray, ICSUserAddress, NSString, ICSDuration;

@interface ICSFreeBusy : ICSComponent  {
}

@property(retain) NSArray * attendee;
@property(retain) ICSDate * created;
@property(retain) ICSDate * dtend;
@property(retain) ICSDate * dtstamp;
@property(retain) ICSDate * dtstart;
@property(retain) ICSDuration * duration;
@property(retain) NSArray * freebusy;
@property(retain) ICSUserAddress * organizer;
@property(retain) NSString * summary;
@property(retain) NSString * uid;
@property(retain) NSString * x_calendarserver_mask_uid;
@property(retain) NSString * x_calendarserver_extended_freebusy;

+ (id)name;

- (void)setX_calendarserver_extended_freebusy:(id)arg1;
- (void)setX_calendarserver_mask_uid:(id)arg1;
- (id)x_calendarserver_extended_freebusy;
- (id)x_calendarserver_mask_uid;
- (void)setFreebusy:(id)arg1;
- (id)freebusy;

@end