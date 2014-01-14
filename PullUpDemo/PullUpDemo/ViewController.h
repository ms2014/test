//
//  ViewController.h
//  PullUpDemo
//
//  Created by _hyr on 13-12-9.
//  Copyright (c) 2013年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableFooterView.h"

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,EGORefreshTableDelegate>{
    
    UITableView *myTableView;
    NSMutableArray *dataSourceArray;

    EGORefreshTableFooterView *_refreshFooterView;
    BOOL _reloading;

    
}

@end
