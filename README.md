# CoreText-
=======
要使用图文混排，首先要导入SXTAttributedLabel.h，该文件是封装好的代码块，使用起来也很简单！
首先要进行初始化，需要用到超链接点击事件和图片点击时间还要遵循代理，实现两个方法即可，控件的背景颜色可以自设置，默认为透明的。
SXTAttributedLabel属性介绍
font            显示字体大小       默认是16
linkFont        超链接文本字体大小  默认是16
textColor       显示文字颜色       默认是黑色
linkColor       超链接文本字体颜色  默认是蓝色
highlightColor  选中超连接背景颜色  默认是灰色
numberOfLines   显示文字行数       默认是0，自动换行
imageSize       设置显示图片大小    如未做设置，图片大小为文字高度的正方形
setText：        设置普通文本
setAttributedText:  设置属性文本
- (void)addCustomLink:(NSString *)link;
- (void)addCustomLink:(NSString *)link
linkColor:(UIColor *)linkColor
linkFont:(UIFont *)linkFont;    添加自定义链接