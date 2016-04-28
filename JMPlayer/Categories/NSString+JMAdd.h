//
//  NSString+JMAdd.h
//  JMPlayerDemo
//
//  Created by 毛朝龙 on 16/4/28.
//  Copyright © 2016年 jjj2mdd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (JMAdd)

/**
 Returns the size of the string if it were rendered with the specified constraints.

 @param font          The font to use for computing the string size.

 @param size          The maximum acceptable size for the string. This value is
 used to calculate where line breaks and wrapping would occur.

 @param lineBreakMode The line break options for computing the size of the string.
 For a list of possible values, see NSLineBreakMode.

 @return              The width and height of the resulting string's bounding box.
 These values may be rounded up to the nearest whole number.
 */
- (CGSize)sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;

/**
 Returns the width of the string if it were to be rendered with the specified
 font on a single line.

 @param font  The font to use for computing the string width.

 @return      The width of the resulting string's bounding box. These values may be
 rounded up to the nearest whole number.
 */
- (CGFloat)widthForFont:(UIFont *)font;

/**
 Returns the height of the string if it were rendered with the specified constraints.

 @param font   The font to use for computing the string size.

 @param width  The maximum acceptable width for the string. This value is used
 to calculate where line breaks and wrapping would occur.

 @return       The height of the resulting string's bounding box. These values
 may be rounded up to the nearest whole number.
 */
- (CGFloat)heightForFont:(UIFont *)font width:(CGFloat)width;

@end
