//
//  FileTXT.h
//  HowToWorks
//
//  Created by h on 17/3/16.
//  Copyright © 2017年 bill. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol FileTxtDelegate <NSObject>

@optional

-(void)TXT_Write:(NSString *)content Path:(NSString *)path;

@end

@interface FileTXT : NSObject

@property(nonatomic,assign)id delegate;

+(instancetype) shareInstance;
-(BOOL)TXT_Open:(NSString*)name;
-(void)TXT_Write:(NSString*)line;
-(NSString*)TXT_Read;
@end
