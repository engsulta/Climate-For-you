//
//  AppDelegate.h
//  MyWetherApp
//
//  Created by Ahmed Sultan on 11/1/19.
//  Copyright © 2019 Ahmed Sultan Hamza. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

