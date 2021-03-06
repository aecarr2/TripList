//
//  CheckedGroceryItem.h
//  TripListP1
//
//  Created by Armand Roelens on 4/2/15.
//  Copyright (c) 2015 CSE 394. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GroceryItem.h"

//This class is used to represent check items in the AddStoreViewController
@interface CheckedGroceryItem : NSObject

@property NSString* groceryItemString; //Used in AddStoreViewController
@property UITextField* quantityField;

@end
