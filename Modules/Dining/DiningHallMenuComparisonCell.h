//
//  DiningHallMenuComparisonCell.h
//  MIT Mobile
//
//  Created by Austin Emmons on 4/23/13.
//
//

#import "PSTCollectionViewCell.h"

@interface DiningHallMenuComparisonCell : PSTCollectionViewCell

@property (nonatomic, readonly, strong) UILabel   * primaryLabel;
@property (nonatomic, readonly, strong) UILabel   * secondaryLabel;
@property (nonatomic, strong) NSArray   * dietaryTypes;



+ (CGFloat) heightForComparisonCellOfWidth:(CGFloat)cellWidth withPrimaryText:(NSString *)primary secondaryText:(NSString *)secondary numDietaryTypes:(NSInteger )numDietaryTypes;
@end
