#SYNavigationDropdownMenu

A lightweight dropdown menu drops underneath navigation bar.

##Screen Shot

![](https://raw.githubusercontent.com/Sunnyyoung/SYNavigationDropdownMenu/master/Screenshot/ScreenShot.gif)

##Requirments

1. iOS 7.0 and above.

##Installation

Recommended way

1. Edit your `Podfile`, add one line code `pod 'SYNavigationDropdownMenu`
2. Run 'pod update'
3. `#import <SYNavigationDropdownMenu/SYNavigationDropdownMenu.h>`

Manually way

1. Dragging `SYNavigationDropdownMenu.h` and `SYNavigationDropdownMenu.m` to your project
2. `#import "SYNavigationDropdownMenu.h"`

##Quickstart

###Setup the NavigationDropdownMenu

```objc
SYNavigationDropdownMenu *menu = [[SYNavigationDropdownMenu alloc] initWithNavigationController:self.navigationController];
menu.dataSource = self;
menu.delegate = self;
self.navigationItem.titleView = menu;
```

###Configure the NavigationDropdownMenu

####Required

**Return the title array for the NavigationDropdownMenu:**

`- (NSArray<NSString *> *)titleArrayForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;`

**The delegate action when select a cell:**

`- (void)navigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu didSelectTitleAtIndex:(NSUInteger)index;`

####Optional

**The font of the title text label:**

`- (UIFont *)titleFontForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is [UIFont systemFontSize:17.0]**

**The color of the title text label:**

`- (UIColor *)titleColorForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is [UIColor blackColor]**

**The arrow image of the menu:**

`- (UIImage *)arrowImageForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is nil**

**The padding between the title label and the arrow imageview:**

`- (CGFloat)arrowPaddingForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is 0.0**

**The animation duration of the menu:**

`- (NSTimeInterval)animationDurationForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is 0.25**

**Whether keep cell selected state after menu hide:**

`- (BOOL)keepCellSelectionForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is YES**

**The height of the cell:**

`- (CGFloat)cellHeightForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is 45.0**

**The insets of the tableview separator:**

`- (UIEdgeInsets)cellSeparatorInsetsForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is UIEdgeInsetsMake(0.0, 0.0, 0.0, 0.0)**

**The text alignment of cell:**

`- (NSTextAlignment)cellTextAlignmentForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is NSTextAlignmentCenter**

**The text font of cell:**

`- (UIFont *)cellTextFontForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is [UIFont systemFontSize:16.0]**

**The text color of cell:**

`- (UIColor *)cellTextColorForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is [UIColor blackColor]**

**The background color of cell:**

`- (UIColor *)cellBackgroundColorForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is [UIColor whiteColor]**

**The selection color of cell:**

`- (UIColor *)cellSelectionColorForNavigationDropdownMenu:(SYNavigationDropdownMenu *)navigationDropdownMenu;` - **Default is nil**

##License
The [MIT License](LICENSE).