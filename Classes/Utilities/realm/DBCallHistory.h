//
// Copyright (c) 2016 Related Code - http://relatedcode.com
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Realm/Realm.h>

//-------------------------------------------------------------------------------------------------------------------------------------------------
@interface DBCallHistory : RLMObject
//-------------------------------------------------------------------------------------------------------------------------------------------------

@property NSString *objectId;

@property NSString *initiatorId;
@property NSString *recipientId;
@property NSString *phoneNumber;

@property NSString *type;
@property NSString *text;

@property NSString *status;
@property NSInteger duration;

@property NSTimeInterval startedAt;
@property NSTimeInterval establishedAt;
@property NSTimeInterval endedAt;

@property BOOL isDeleted;

@property NSTimeInterval createdAt;
@property NSTimeInterval updatedAt;

@end

