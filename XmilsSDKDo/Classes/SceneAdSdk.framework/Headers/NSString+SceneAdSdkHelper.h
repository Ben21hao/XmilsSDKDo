//
//  NSString+helper.h
//  VipGift
//
//  Created by XBingo on 2017/11/17.
//  Copyright © 2017年 小迈科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (SceneAdSdkHelper)

//@property (nonatomic, assign) CGSize textStrSize;

- (NSString *)VGPriceFormat;

- (NSString*)SceneAdSdk_getmd5WithString;
- (void)drawTextInRect:(CGRect)rect withFont:(UIFont *)font color:(UIColor *)color ;
- (CGSize)textSizeWithFont:(UIFont *)font;
- (CGSize)textLabelSizeWithFont:(UIFont *)font;
- (CGSize)textSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;
- (CGSize)textSizeByUILabelWithFont:(UIFont *)font constrainedToSize:(CGSize)size;
- (CGSize)textSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineSpace:(CGFloat)lineSpace;
- (NSString *)stringWithoutEmoji;
- (BOOL)isContainEmoji;
- (BOOL)match:(NSString *)expression;

- (NSString *)urlEncodeString;
- (NSString *)urlDecodeString;

- (NSData*) hexToBytes;

- (NSString *)limitChineseAndEnglishLengthWithNeedLength:(NSInteger)needLength;

+ (NSString *)numberToChinese:(NSInteger)number;

//URL转译
- (NSString *)URLEncodedString;





@end
