//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UISearchBarDelegate.h"

@class NSArray, NSDictionary, NSString, UISearchBar, UIView;

@interface FLEXHierarchyTableViewController : UITableViewController <UISearchBarDelegate>
{
    id <FLEXHierarchyTableViewControllerDelegate> _delegate;
    NSArray *_allViews;
    NSDictionary *_depthsForViews;
    NSArray *_viewsAtTap;
    UIView *_selectedView;
    NSArray *_displayedViews;
    UISearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allViews; // @synthesize allViews=_allViews;
@property(nonatomic) __weak id <FLEXHierarchyTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *depthsForViews; // @synthesize depthsForViews=_depthsForViews;
@property(retain, nonatomic) NSArray *displayedViews; // @synthesize displayedViews=_displayedViews;
- (void)donePressed:(id)arg1;
- (id)initWithViews:(id)arg1 viewsAtTap:(id)arg2 selectedView:(id)arg3 depths:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) NSArray *viewsAtTap; // @synthesize viewsAtTap=_viewsAtTap;
- (_Bool)showScopeBar;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)trySelectCellForSelectedViewWithScrollPosition:(long long)arg1;
- (void)updateDisplayedViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
