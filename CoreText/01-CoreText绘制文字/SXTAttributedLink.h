//
//  SXTAttributedLink.h
//  01-CoreText绘制文字


#import <Foundation/Foundation.h>

@interface SXTAttributedLink : NSObject

/**
 * 超链接文本内容
 */
@property (nonatomic, copy) NSString *text;

/**
 * 超文本内容在字符串中所在的位置
 */
@property (nonatomic, assign) NSRange range;

@end
