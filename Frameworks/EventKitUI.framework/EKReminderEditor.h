/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKReminderEditor : EKCalendarItemEditor {
    <EKReminderEditorDelegate> *_reminderEditorDelegate;
    <EKStyleProvider> *_styleProvider;
}

@property (nonatomic, retain) EKReminder *reminder;
@property (nonatomic) <EKReminderEditorDelegate> *reminderEditorDelegate;
@property (nonatomic, retain) <EKStyleProvider> *styleProvider;

- (void).cxx_destruct;
- (BOOL)_canDetachSingleOccurrence;
- (void)_copyEventForPossibleRevert;
- (id)_editItems;
- (id)_nameForDeleteButton;
- (void)_revertEvent;
- (id)_viewForSheet;
- (BOOL)allowsDeletingFutureOccurrences;
- (void)customizeActionSheet:(id)arg1;
- (id)defaultAlertTitle;
- (id)defaultTitleForCalendarItem;
- (void)editItem:(id)arg1 didCommitFromDetailViewController:(BOOL)arg2;
- (void)editItem:(id)arg1 didEndDatePickingAnimated:(BOOL)arg2;
- (void)editItem:(id)arg1 willBeginDatePickingWithDate:(id)arg2 action:(SEL)arg3 animated:(BOOL)arg4 forSubitem:(unsigned int)arg5;
- (void)editItemTextChanged:(id)arg1;
- (unsigned int)entityType;
- (void)loadView;
- (float)marginForTableView:(id)arg1;
- (id)notificationNamesForLocaleChange;
- (id)preferredTitle;
- (void)prepareEditItems;
- (id)reminder;
- (id)reminderEditorDelegate;
- (BOOL)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setReminder:(id)arg1;
- (void)setReminderEditorDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setupDeleteButton;
- (BOOL)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;
- (id)styleProvider;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;

@end