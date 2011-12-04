//
//  iziViewController.h
//  iziPro
//
//  Created by Man Lee on 12/4/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iziViewController : UIViewController{
    NSString *userName;
}
- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (nonatomic, copy) NSString *userName;

@end
