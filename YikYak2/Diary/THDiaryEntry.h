//
//  THDiaryEntry.h
//  YikYak2
//
//  Created by Brexton Pham on 6/25/15.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ENUM(int16_t, YakMood) {
    YakMoodGood = 0,
    YakMoodAverage = 1,
    YakMoodBad = 2
};

@interface THDiaryEntry : NSManagedObject

@property (nonatomic) NSTimeInterval date;
@property (nonatomic, retain) NSString * body;
@property (nonatomic, retain) NSData * imageData;
@property (nonatomic) int16_t mood;
@property (nonatomic, retain) NSString * location;

@property (nonatomic, readonly) NSString *sectionName;

@end