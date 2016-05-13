//
//  NSMutableAttributedString+Image.h
//  01-CoreText绘制文字


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSMutableAttributedString (Image)

/**
 * 检查内容中所带的图片，并处理图片相关内容
 * ->返回存放图片对象（SXTAttributedImage）的数组
 */
- (NSArray *)setImageWithImageSize:(CGSize)imageSize
                              font:(UIFont *)font;

@end
