//
//  XMFCUUID.h
//
//  Created by Fabio Caccamo on 26/06/14.
//  Copyright © 2016 Fabio Caccamo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const XMFCUUIDsOfUserDevicesDidChangeNotification;

@interface XMFCUUID : NSObject
{
    NSMutableDictionary *_xm_uuidForKey;
    NSString *_xm_uuidForSession;
    NSString *_xm_uuidForInstallation;
    NSString *_xm_uuidForVendor;
    NSString *_xm_uuidForDevice;
    NSString *_xm_uuidsOfUserDevices;
    BOOL _xm_uuidsOfUserDevices_iCloudAvailable;
}

+(NSString *)uuid;
+(NSString *)uuidForKey:(id<NSCopying>)key;
+(NSString *)uuidForSession;
+(NSString *)uuidForInstallation;
+(NSString *)uuidForVendor;
+(NSString *)uuidForDevice;
+(NSString *)uuidForDeviceMigratingValue:(NSString *)value commitMigration:(BOOL)commitMigration;
+(NSString *)uuidForDeviceMigratingValueForKey:(NSString *)key commitMigration:(BOOL)commitMigration;
+(NSString *)uuidForDeviceMigratingValueForKey:(NSString *)key service:(NSString *)service commitMigration:(BOOL)commitMigration;
+(NSString *)uuidForDeviceMigratingValueForKey:(NSString *)key service:(NSString *)service accessGroup:(NSString *)accessGroup commitMigration:(BOOL)commitMigration;
+(NSArray *)uuidsOfUserDevices;
+(NSArray *)uuidsOfUserDevicesExcludingCurrentDevice;

+(BOOL)uuidValueIsValid:(NSString *)uuidValue;

@end
NS_ASSUME_NONNULL_END
