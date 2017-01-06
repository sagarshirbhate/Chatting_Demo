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

#import <Foundation/Foundation.h>

#import "DBUser.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------
@interface CallHistory : NSObject
//-------------------------------------------------------------------------------------------------------------------------------------------------

+ (void)createItem:(NSString *)userId recipientId:(NSString *)recipientId text:(NSString *)text details:(id<SINCallDetails>)details;

+ (void)deleteItem:(NSString *)objectId;

@end

