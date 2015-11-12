//
//  ViewController.h
//  ToDo List
//
//  Created by Vitaliy on 9/28/15.
//  Copyright (c) 2015 Horodeckyy Vitaliy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
@property (strong, nonatomic) NSDate* eventDate;
@property (strong, nonatomic) NSString* eventInfo;
@property (assign, nonatomic) BOOL isDetail;

@end

