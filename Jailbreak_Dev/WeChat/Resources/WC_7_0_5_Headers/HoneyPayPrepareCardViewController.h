//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HoneyPayBaseViewController.h"

#import "HoneyPayPrepareCardViewDelegate.h"
#import "ILinkEventExt.h"
#import "UITextFieldDelegate.h"

@class HoneyPayPrepareCardView, NSString, RichTextView, UIButton, UITextField, WCPayNavigationBarBottomBanner;

@interface HoneyPayPrepareCardViewController : HoneyPayBaseViewController <HoneyPayPrepareCardViewDelegate, ILinkEventExt, UITextFieldDelegate>
{
    id <HoneyPayPrepareCardViewControllerDelegate> _delegate;
    UIButton *_confirmButton;
    NSString *_amount;
    RichTextView *_inputWishing;
    WCPayNavigationBarBottomBanner *_alertBanner;
    HoneyPayPrepareCardView *_prepareCardView;
    UITextField *_textFiled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNavigationBarBottomBanner *alertBanner; // @synthesize alertBanner=_alertBanner;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
- (void)checkAmount;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (id)createStatusHeaderView;
@property(nonatomic) __weak id <HoneyPayPrepareCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)done;
- (void)honeyPayPrepareCardView:(id)arg1 didchangeAmount:(id)arg2;
- (void)honeyPaykeyboardDidHide:(id)arg1;
@property(retain, nonatomic) RichTextView *inputWishing; // @synthesize inputWishing=_inputWishing;
- (void)keyboardDidShow:(id)arg1;
- (double)max;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
@property(retain, nonatomic) HoneyPayPrepareCardView *prepareCardView; // @synthesize prepareCardView=_prepareCardView;
- (void)relaodTableView;
@property(retain, nonatomic) UITextField *textFiled; // @synthesize textFiled=_textFiled;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
