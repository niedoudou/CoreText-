//
//  NSMutableAttributedString+Link.h
//  01-CoreText绘制文字


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSMutableAttributedString (Link)

/**
 * 设置link的字体和颜色
 */
- (NSArray *)setLinkWithLinkColor:(UIColor *)linkColor
                         linkFont:(UIFont *)linkFont;

/**
 * 添加自定义链接
 */
- (NSArray *)setCustomLink:(NSString *)link
                 linkColor:(UIColor *)linkColor
                  linkFont:(UIFont *)linkFont;

@end
