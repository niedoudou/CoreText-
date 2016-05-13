//
//  SXTAttributedLabel+Utils.h
//  01-CoreText绘制文字


#import "SXTAttributedLabel.h"
#import <CoreText/CoreText.h>
@class SXTAttributedLink;

@interface SXTAttributedLabel (Utils)

/*************************只读属性*************************/
/**
 * frameRef
 */
@property (nonatomic, assign, readonly) CTFrameRef frameRef;

/**
 * 存放link数据模型的数组
 */
@property (nonatomic, strong, readonly) NSMutableArray *linkArr;

/**
 * 存放图片数据模型的数组
 */
@property (nonatomic, strong, readonly) NSMutableArray *imageArr;


/*************************共有方法*************************/

/**
 * 检测点击位置是否在链接上
 * ->若在链接上，返回SXTAttributedLink 
 *   包含超文本内容和range
 * ->如果没点中反回nil
 */
- (SXTAttributedLink *)touchLinkWithPosition:(CGPoint)position;

/**
 * 监测点击的位置是否在图片上
 * ->若在链接上，返回SXTAttributedImage
 * ->如果没点中反回nil
 */
- (SXTAttributedImage *)touchContentOffWithPosition:(CGPoint)position;

@end
