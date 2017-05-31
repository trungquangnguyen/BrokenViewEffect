//
//  CommenterCell.h
//  ExpandingCollectionView2
//
//  Created by Quang Tran on 5/25/17.
//  Copyright © 2017 Quang Tran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Commenter.h"
#import "MGSwipeTableCell.h"

@interface CommenterCell : MGSwipeTableCell

@property(nonatomic, strong) Commenter* commenter;

@end
