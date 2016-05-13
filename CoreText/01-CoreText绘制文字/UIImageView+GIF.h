//
//  UIImageView+GIF.h
//  01-CoreText绘制文字


#import <UIKit/UIKit.h>
#import "SXTAttributedImage.h"

@interface NSString (imageType)

/**
 * 判断图片类型
 */
+ (SXTImageTppe)contentTypeForImageName:(NSString *)imageName;

@end

@interface UIImageView (GIF)

/**
 * 加载指定GIF图片并创建UIImageView
 * ->imageName一定要加上.gif
 */
+ (UIImageView *)imageViewWithGIFName:(NSString *)imageName
                                frame:(CGRect)frame;

@end
