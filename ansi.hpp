#include <iostream>
using namespace std;

#define SUCCESS 0
#define ERR 1 

#define CDEF "\033[0m"		// 0: Default
#define CRED "\033[91m"		// 1: Red
#define CGREEN "\033[32m"	// 2: Green (files)
#define CCYAN "\033[36m"	// 3: Cyan (folders)
#define CHIGH "\033[33m"	// 4: Highlight
#define CUND "\033[4m"		// 5: Underline
#define CBOLD "\033[1m"		// 6: Bold


int help();
int typeIdentifier(string fsname);
string houndIco = 
"\033[1;91m"
"        :.^^~^^:....                                        \n"
"      .^777777777777!~^.                                    \n"
" ^:  .!77777777777777777!^.                                 \n"
" YJ.^77777777777777777777777!:                              \n"
" ?Y5J7777777777777777777!!!!!77~:                           \n"
" ~YY?!!7777?777777777777!!!!!!7777~.                        \n"
" ^777!777J?:^^~7777777~~7777??7!!777^                       \n"
" .J!!~~!7.     ..:7777~~!:..:~7!!77777~:                    \n"
"  ^~^?P^.       .!?!:..~.      ^777777!7:                   \n"
"    :JG^       ^7^.    .^.     ^777777~~~                   \n"
"    :!J.      !~          ..  ~777777~~~~~^^:.              \n"
"              ^^^!~^.       .!777!!!~^^^~~^!~^^~~:..        \n"
"                           .7777!~^:~~~~^~.:^~~~~~~~~^:     \n"
"                           :?777~~. :!!~^~:  .:^^~~~~~~^.   \n"
"                            .~!!!7!  :77!^^      ^~~~~~~~:  \n"
"                                .^!7^::^7!~       :~~~~~~^: \n"
"                                   ^?7.  ~7^       .~~~~~~: \n"
"                                   7!     .7~.     .~~~~~~^.\n"
"                                 :!!       .77:     :~~~~~. \n"
"                                ~~:         !!      ~~::~:  \n"
"                                :..         ?!      :~.     \n"
"                                           .7~              \n"
"                                           :^.              \n"
"                                            :               "
"\033[1;0m\n\n";
