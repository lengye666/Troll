#import <Foundation/Foundation.h>

@interface LSApplicationWorkspace : NSObject
+ (instancetype)defaultWorkspace;
- (NSArray *)allInstalledApplications;
@end

@interface LSApplicationProxy : NSObject
@property (nonatomic, readonly) NSString *bundleType;
@property (nonatomic, readonly) BOOL installed;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundlePath;
@property (nonatomic, readonly) NSString *localizedName;
@end
