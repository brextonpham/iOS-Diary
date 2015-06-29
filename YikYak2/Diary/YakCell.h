//
//  YakCell.h
//  YikYak2
//
//  Created by Brexton Pham on 6/25/15.
//

#import <UIKit/UIKit.h>

@class THDiaryEntry;

@interface YakCell : UITableViewCell

+ (CGFloat)heightForEntry:(THDiaryEntry *)entry;

- (void)configureCellForEntry:(THDiaryEntry *)entry;

@end
