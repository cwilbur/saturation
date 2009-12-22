//
//  BGSListViewController.h
//  Saturation
//
//  Created by Shawn Roske on 12/19/09.
//  Copyright 2009 Bitgun. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface BGSListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> 
{
	UIImageView *background;
	
	UIButton *closeButton;
	UITableView *tableView;
}

@property (nonatomic, retain) UIImageView *background;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, retain) UITableView *tableView;

@end
