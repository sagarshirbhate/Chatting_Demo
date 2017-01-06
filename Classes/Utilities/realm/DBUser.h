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
@interface DBUser : RLMObject
//-------------------------------------------------------------------------------------------------------------------------------------------------

@property NSString *objectId;

@property NSString *email;
@property NSString *firstname;
@property NSString *lastname;
@property NSString *fullname;
@property NSString *country;
@property NSString *location;
@property NSString *status;
@property NSString *loginMethod;
@property NSString *oneSignalId;

@property NSString *picture;
@property NSString *thumbnail;

@property NSInteger keepMedia;
@property NSInteger networkImage;
@property NSInteger networkVideo;
@property NSInteger networkAudio;

@property BOOL autoSaveMedia;

@property NSTimeInterval createdAt;
@property NSTimeInterval updatedAt;

- (NSString *)initials;

@end

