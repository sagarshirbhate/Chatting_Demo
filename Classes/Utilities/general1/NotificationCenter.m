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

#import "NotificationCenter.h"

@implementation NotificationCenter

//-------------------------------------------------------------------------------------------------------------------------------------------------
+ (void)addObserver:(id)target selector:(SEL)selector name:(NSString *)name
//-------------------------------------------------------------------------------------------------------------------------------------------------
{
	[[NSNotificationCenter defaultCenter] addObserver:target selector:selector name:name object:nil];
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
+ (void)removeObserver:(id)target
//-------------------------------------------------------------------------------------------------------------------------------------------------
{
	[[NSNotificationCenter defaultCenter] removeObserver:target];
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
+ (void)post:(NSString *)notification
//-------------------------------------------------------------------------------------------------------------------------------------------------
{
	[[NSNotificationCenter defaultCenter] postNotificationName:notification object:nil];
}

@end

