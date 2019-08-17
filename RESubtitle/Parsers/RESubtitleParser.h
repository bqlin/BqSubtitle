//
//  RESubtitleParser.h
//  SubtitleDemo
//
//  Created by Bq Lin on 2019/8/17.
//  Copyright © 2019 RTE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RESubtitleItem.h"

@protocol RESubtitleParser <NSObject>

- (NSArray *)praseWithFileContent:(NSString *)fileContent error:(NSError **)error;

@end

@interface RESubtitleParser : NSObject <RESubtitleParser>

@end
