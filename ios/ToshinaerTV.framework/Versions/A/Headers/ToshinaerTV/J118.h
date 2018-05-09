//
//  ToshinaerTV.h
//  Pods-ToshinaerTV_Tests
//
//  Created by AMMA on 2018/4/27.
//

#import <Foundation/Foundation.h>
#import "TCPClient.h"

enum FunMode{
    C_MUTE ,
    C_AUTO ,
    C_LIGHT ,
    C_H1 ,
    C_H2 ,
    C_H3 ,
    C_A2 ,
    C_A3 ,
    C_A4 ,
    C_P1 ,
    C_P2 ,
    C_P3 ,
    C_R1 ,
    C_R2 ,
    C_R3 ,
    C_A1 ,
    C_POWER ,
    C_DS ,
    C_LEFT ,
    C_RIGHT ,
    C_MENU ,
    C_UP ,
    C_DOWN ,
    C_GAS
};

typedef void(^FailedBlock)(void);
typedef void(^SucceedBlock)(void);

@protocol RefreshDelegate <NSObject>
- (void) refreshStatus;
@end

@interface J118: NSObject <TCPClientDelegate>{
    int fID;
    BOOL fItem[24];
}
@property (nonatomic,assign)id <RefreshDelegate> delegate ;
@property (nonatomic,strong) NSMutableString *buff;
@property int Temp;
@property int Humidity;
@property (nonatomic, copy)FailedBlock failedBlock;
@property (nonatomic, copy)SucceedBlock succeedBlock;

#pragma mark public
+(instancetype)share;
-(void)setID:(int)theID;
-(void)setIP:(NSString *)theIP Port:(UInt16)thePort;
//-(int)loadConfig;
-(void)sendDataFromIndex:(int)theIndex;
-(void)connect;
-(BOOL)getStatus:(int)index;

@end
