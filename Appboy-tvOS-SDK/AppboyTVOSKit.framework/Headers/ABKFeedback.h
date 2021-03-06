#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum {
  ABKValidFeedback,
  ABKInvalidEmailAddressFeedback,
  ABKEmptyFeedbackMessageFeedback
} ABKFeedbackValidation;

@interface ABKFeedback : NSObject

@property (copy) NSString *message;
@property (copy) NSString *email;
@property BOOL isBug;

- (instancetype)initWithFeedbackMessage:(NSString *)message email:(NSString *)email isBug:(BOOL)isBug __deprecated_msg("The feedback feature is disabled for new accounts, and will be removed in a future SDK release.");

/*!
 * This method checks the validation of the feedback object and returns the result.
 *
 * Before submiting a feedback please make sure to call this method to check the validation of the
 * feedback object.
 * A feedback is only valid when it satisfies both of following conditions:
 * - feedback message isn't empty;
 * - the email is a valid email address.
*/
- (ABKFeedbackValidation)feedbackValidation __deprecated_msg("The feedback feature is disabled for new accounts, and will be removed in a future SDK release.");

@end
NS_ASSUME_NONNULL_END
