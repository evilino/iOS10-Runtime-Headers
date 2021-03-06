/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFSafariViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _entersReaderIfAvailable;
    UIColor * _preferredBarTintColor;
}

@property (nonatomic) bool entersReaderIfAvailable;
@property (nonatomic, retain) UIColor *preferredBarTintColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)entersReaderIfAvailable;
- (id)initWithCoder:(id)arg1;
- (id)preferredBarTintColor;
- (void)setEntersReaderIfAvailable:(bool)arg1;
- (void)setPreferredBarTintColor:(id)arg1;

@end
