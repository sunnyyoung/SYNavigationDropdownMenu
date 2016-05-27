//
//  SYNavigationDropdownMenu.h
//  SYNavigationDropdownMenu
//
//  Created by Sunnyyoung on 16/5/26.
//  Copyright © 2016年 Sunnyyoung. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SYNavigationDropdownMenu;

@protocol SYNavigationDropdownMenuDataSource <NSObject>

@required
- (NSArray<NSString *> *)titleArrayForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;

@optional
- (UIFont *)titleFontForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;                  // Default is [UIFont systemFontOfSize:17.0]
- (UIColor *)titleColorForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;                // Default is [UIColor blackColor]
- (UIImage *)arrowImageForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;                // Default is nil
- (CGFloat)arrowPaddingForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;                // Default is 0.0
- (NSTimeInterval)animationDurationForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;    // Default is 0.25
- (BOOL)keepCellSelectionForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;              // Default is YES
- (CGFloat)cellHeightForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;                  // Default is 45.0
- (UIEdgeInsets)cellSeparatorInsetsForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;    // Default is UIEdgeInsetsMake(0.0, 0.0, 0.0, 0.0)
- (NSTextAlignment)cellTextAlignmentForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;   // Default is NSTextAlignmentCenter
- (UIFont *)cellTextFontForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;               // Default is [UIFont systemFontOfSize:16.0]
- (UIColor *)cellTextColorForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;             // Default is [UIColor blackColor]
- (UIColor *)cellBackgroundColorForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;       // Default is [UIColor whiteColor]
- (UIColor *)cellSelectionColorForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;        // Default is nil

@end

@protocol SYNavigationDropdownMenuDelegate <NSObject>

@required
- (void)navigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu didSelectTitleAtIndex:(NSUInteger)index;

@end

@interface SYNavigationDropdownMenu : UIButton

@property (nonatomic, weak) id <SYNavigationDropdownMenuDataSource> dataSource;
@property (nonatomic, weak) id <SYNavigationDropdownMenuDelegate> delegate;

- (instancetype)initWithNavigationController:(UINavigationController *)navigationController;

- (void)show;
- (void)hide;

@end
