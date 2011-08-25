#import <Foundation/Foundation.h>

@protocol CustomStatusItemDelegate
- (void)toggleShowWindowFromPoint:(NSPoint)point;
@end

@interface CustomStatusItem : NSView

@property (assign) NSPoint mouseLocation;
@property (retain) id <CustomStatusItemDelegate> delegate;
@property (assign) long long freeMemory;

- (NSPoint)getAnchorPoint;

@end