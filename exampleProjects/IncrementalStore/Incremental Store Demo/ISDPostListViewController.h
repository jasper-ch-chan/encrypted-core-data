//
//  ISDPostListViewController.h
//  Incremental Store Demo
//
// Copyright 2012 - 2014 The MITRE Corporation, All Rights Reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface ISDPostListViewController : UITableViewController

@property (nonatomic, strong) NSManagedObject *user;

@end
