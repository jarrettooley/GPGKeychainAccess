/*
 Copyright © Roman Zechmeister, 2014
 
 Diese Datei ist Teil von GPG Keychain Access.
 
 GPG Keychain Access ist freie Software. Sie können es unter den Bedingungen 
 der GNU General Public License, wie von der Free Software Foundation 
 veröffentlicht, weitergeben und/oder modifizieren, entweder gemäß 
 Version 3 der Lizenz oder (nach Ihrer Option) jeder späteren Version.
 
 Die Veröffentlichung von GPG Keychain Access erfolgt in der Hoffnung, daß es Ihnen 
 von Nutzen sein wird, aber ohne irgendeine Garantie, sogar ohne die implizite 
 Garantie der Marktreife oder der Verwendbarkeit für einen bestimmten Zweck. 
 Details finden Sie in der GNU General Public License.
 
 Sie sollten ein Exemplar der GNU General Public License zusammen mit diesem 
 Programm erhalten haben. Falls nicht, siehe <http://www.gnu.org/licenses/>.
*/

#import <Sparkle/Sparkle.h>
#import "GKOutlineView.h"

@interface GPGKeychainAccessAppDelegate : NSObject <NSWindowDelegate, NSApplicationDelegate, NSDrawerDelegate> {
	GKOutlineView *__weak keyTable;
	NSTableView *__weak userIDTable, *__weak subkeyTable, *__weak signatureTable;
	NSDrawer *__weak drawer;
	NSWindow *__weak inspectorWindow;
	NSView *__weak inspectorView;
	
	BOOL rowWasSelected;
	SUUpdater *__weak updater;
}

@property (weak) IBOutlet NSWindow *window, *inspectorWindow;
@property (weak) IBOutlet NSView *inspectorView;
@property (weak) IBOutlet GKOutlineView *keyTable;
@property (weak) IBOutlet NSTableView *userIDTable, *subkeyTable, *signatureTable;
@property (weak) IBOutlet NSDrawer *drawer;
@property (weak) IBOutlet SUUpdater *updater;
@property (nonatomic) BOOL inspectorVisible;


- (IBAction)toggleInspector:(id)sender;





- (void)generateContextMenuForTable:(NSTableView *)table;

- (IBAction)selectHeaderVisibility:(NSMenuItem *)sender;
- (IBAction)showPreferences:(id)sender;
- (IBAction)showSupport:(id)sender;
- (IBAction)showKeyDetails:(id)sender;

@end
