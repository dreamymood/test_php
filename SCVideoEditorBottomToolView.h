//
//  SCVideoEditorBottomToolView.h
//  OwnCommunity
//
//  Created by Daniel on 2019/7/18.
//  Copyright © 2019 Daniel. All rights reserved.
//

#import "MyRelativeLayout.h"
#import "SCVideoEditorBottomView.h"


@interface SCVideoEditorBottomToolView : MyRelativeLayout

@property (nonatomic, assign) NSInteger selectedType;

@property (nonatomic, copy) void (^didSelectToolTypeBlock)(SCVideoEditorBottomToolView *toolView, SCVideoEditorBottomType type);

@end
