// DATA MODULE 
// Lynux Ansay S18 -- Compro 2 -- PLAYBOY MEN

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

#define MAXC 10
#define MAXF 50

/*****
Function: fscrn
Description: Pang full screen ng exe eto copy pasta lang dre
Returns: Doesnt return a value since void
*****/

void fscrn()
{
	//full screen mode
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

/*****
Function: music
Description: delay na may sound palitan yung comment out if gusto mo mag super mario theme repa purely aesthetix shoutouts sa 
   			 https://www.youtube.com/watch?v=3WSHpqPBCcY
Returns: Doesnt return a value since void
*****/

void music(int tmr)
{
//if(tmr == 1)
//{
// Beep(932,575);
// Beep(932,125);
// Beep(932,125);
// Beep(932,125);
// Beep(1046,500);	
//}
//if(tmr == 2)
//{
// Beep(622,575);
// Beep(233,125);
// Beep(294,125);
// Beep(349,125);
// Beep(466,125);
// Beep(587,125);
// Beep(698,125);	
//}
//if(tmr == 3)
//{
// Beep(311,125);
// Beep(415,125);
// Beep(523,125);
// Beep(622,125);
// Beep(830,575);	
//}
//if(tmr == 4)
//{
// Beep(660,125);
// Beep(784,575);
// Beep(660,575);
// Beep(207,125);
// Beep(262,125);	
//}
//if(tmr == 5)
//{
// Beep(196,700);
// Beep(196,125);
// Beep(262,125);
// Beep(330,125);
// Beep(392,125);
// Beep(523,125);	
//}
//if(tmr == 6)
//{
// Beep(330,100);
// Beep(330,300);
// Beep(330,300);
// Beep(262,100);
// Beep(330,300);
// Beep(392,700);	
//}
//if(tmr == 7)
//{
// Beep(262,100);
// Beep(262,300);
// Beep(262,300);
// Beep(262,100);
// Beep(294,300);
// Beep(330,50);
// Beep(262,50);
// Beep(220,50);
// Beep(196,700);	
//}
//if(tmr == 8)
//{
// Beep(330,700);
// Beep(440,300);
// Beep(392,500);	
//}
//if(tmr == 9)
//{
// Beep(196,700);
// Beep(262,100);
// Beep(262,300);
// Beep(262,300);
// Beep(262,100);
// Beep(294,100);	
//}
//if(tmr == 10)
//{
// Beep(262,100);
// Beep(262,300);
// Beep(262,300);
// Beep(262,100);
// Beep(294,300);
// Beep(330,50);
// Beep(262,50);
// Beep(220,50);	
//}
//if(tmr == 11)
//{
// Beep(294,500);
// Beep(311,300);
// Beep(296,300);
// Beep(262,1300);	
//}
//if(tmr == 12)
//{
// Beep(392,100);
// Beep(370,100);
// Beep(349,100);
// Beep(311,300);
// Beep(330,300);
// Beep(207,100);
// Beep(220,100);
// Beep(262,300);
// Beep(220,100);
// Beep(262,100);	
//}
//if(tmr == 13)
//{
// Beep(330,300);
// Beep(523,300);
// Beep(523,100);
// Beep(523,1100);	
//}
//if(tmr == 14)
//{
// Beep(207,100);
// Beep(220,100);
// Beep(262,300);
// Beep(220,100);
// Beep(262,100);
// Beep(294,500);
// Beep(392,100);
// Beep(370,100);
// Beep(349,100);
// Beep(311,300);	
//}
//if(tmr == 15)
//{
// Beep(247,900);
// Beep(392,100);
// Beep(370,100);
// Beep(349,100);
// Beep(311,300);
// Beep(330,300);	
//}
//if(tmr == 16)
//{
// Beep(440,300);
// Beep(349,100);
// Beep(392,300);
// Beep(330,300);
// Beep(262,100);
// Beep(294,100);	
//}
//if(tmr == 17)
//{
// Beep(246,300);
// Beep(233,500);
// Beep(220,300);
// Beep(196,150);
// Beep(330,150);
// Beep(392,150);	
//}
//if(tmr == 18)
//{
// Beep(247,500);
// Beep(262,300);
// Beep(196,300);
// Beep(164,300);
// Beep(220,100);	
//}
//if(tmr == 19)
//{
// Beep(392,150);
// Beep(440,300);
// Beep(349,100);
// Beep(392,300);
// Beep(330,300);
// Beep(262,100);
// Beep(294,100);	
//}
//if(tmr == 20)
//{
// Beep(220,100);
// Beep(246,300);
// Beep(233,500);
// Beep(220,300);
// Beep(196,150);
// Beep(330,150);	
//}
//if(tmr == 21)
//{
// Beep(196,700);
// Beep(262,300);
// Beep(196,300);
// Beep(164,300);
//}
//if(tmr == 22)
//{
// Beep(330,100);
// Beep(330,300);
// Beep(330,300);
// Beep(262,100);
// Beep(330,300);
// Beep(392,700);	
//}

if(tmr == 3)
{
 Beep(1046, 500);	
}
if(tmr == 4)
{
 Beep(932,125);
}
if(tmr == 5)
{
 Beep(932,125);
 Beep(932,125);	
}
if(tmr == 6)
{
 Beep(932,575);	
}
if(tmr == 7)
{
 Beep(587,125);
 Beep(698,125);
}
if(tmr == 8)
{
 Beep(349,125);
 Beep(466,125);	
}
if(tmr == 9)
{
 Beep(233,125);
 Beep(294,125);
}
if(tmr == 10)
{
 Beep(622,575);
}
if(tmr == 11)
{
 Beep(311,125);
 Beep(415,125);
}
if(tmr == 12)
{
 Beep(207,125);
 Beep(262,125);
}
if(tmr == 13)
{
 Beep(660,575);
}
if(tmr == 14)
{
 Beep(784,575);	
}
if(tmr == 15)
{
 Beep(523,125);
 Beep(660,125);	
}
if(tmr == 16)
{
 Beep(330,125);
 Beep(392,125);
}
if(tmr == 17)
{
 Beep(196,125);
 Beep(262,125);	
}

 return;
}

/*****
Function: line
Description: hindi ko alam pota sobrang mysterious
Returns: wala parang yung ex ko wait lang di pala naging kami
*****/
void line(void)
{
	printf("___________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n");
}

/*****
Function: santillanairlines
Description: aesthetics
Returns: sobrang corny ko shet
*****/

void santillanairlines(int opt)
{
	int i;
	char message[24];
	
		printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\t\t\t $$$$$$     $$$    $$    $$ $$$$$$$$ $$$$ $$       $$          $$$    $$    $$\t       $$$    $$$$ $$$$$$$$  $$       $$$$ $$    $$ $$$$$$$$  $$$$$$ \n");
		printf("\t\t\t$$    $$   $$ $$   $$$   $$    $$     $$  $$       $$         $$ $$   $$$   $$\t      $$ $$    $$  $$     $$ $$        $$  $$$   $$ $$       $$    $$ \n");
		printf("\t\t\t$$        $$   $$  $$$$  $$    $$     $$  $$       $$        $$   $$  $$$$  $$\t     $$   $$   $$  $$     $$ $$        $$  $$$$  $$ $$       $$       \n");
	 	printf("\t\t\t $$$$$$  $$     $$ $$ $$ $$    $$     $$  $$       $$       $$     $$ $$ $$ $$\t    $$     $$  $$  $$$$$$$$  $$        $$  $$ $$ $$ $$$$$$    $$$$$$  \n");
	    printf("\t\t\t      $$ $$$$$$$$$ $$  $$$$    $$     $$  $$       $$       $$$$$$$$$ $$  $$$$\t    $$$$$$$$$  $$  $$   $$   $$        $$  $$  $$$$ $$             $$ \n");
		printf("\t\t\t$$    $$ $$     $$ $$   $$$    $$     $$  $$       $$       $$     $$ $$   $$$\t    $$     $$  $$  $$    $$  $$        $$  $$   $$$ $$       $$    $$ \n");
	 	printf("\t\t\t $$$$$$  $$     $$ $$    $$    $$    $$$$ $$$$$$$$ $$$$$$$$ $$     $$ $$    $$\t    $$     $$ $$$$ $$     $$ $$$$$$$$ $$$$ $$    $$ $$$$$$$$  $$$$$$ \n\t\t");
	 	if(opt == 0){printf("\t\t\t");for(i = 0; i < 5; i++)printf("DOLLA DOLLA BILLS Y\'ALL\t");}
	 	else if(opt == 1)printf("\t____________________________________________________________________MAIN MENU________________________________________________________________________\n");
	 	else if(opt == 2)printf("\t==============================================================FLIGHT BOOKING SYSTEM==================================================================\n");
	 	else if(opt == 3)printf("\t================================================================DATA MODULE SYSTEM===================================================================\n");
	 	else if(opt == 4)printf("\tSPONSORED BY: RED HORSE, GINEBRA, PATORJACK.COM, ABSENCE NG LOVE LIFE - SPECIAL THANKS TO: FRIENDS && FAMILY, SIR SANTI, ATE SHIRLEY, LSCS, GAUTAMA B.");
}

/*****
Function: forb
Description: aesthetics parang identifier kung ano pipiliin para malinawan ka na di ka niya pinili
Returns: void
*****/

/*****
Function: everything below tangina pang aesthetics lang comment na lang ako pag may saysay na ulit
Description: kailangan natin tumigil pag nakakapagod na. wag na natin pahirapan ang sarili kung
Returns: wala namang din ibig sabihin 
*****/

void forb(int i)
{

	printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ________                      _______\n");
	printf("\t\t\t\t\t\t\t\t	    /        |                    /       \\\n");
	printf("\t\t\t\t\t\t\t\t	    $$$$$$$$/                     $$$$$$$  |\n");
	printf("\t\t\t\t\t\t\t\t	    $$ |__                        $$ |  $$ |\n");
	printf("\t\t\t\t\t\t\t\t	    $$    |                       $$ |  $$ |\n");
	printf("\t\t\t\t\t\t\t\t	    $$$$$/                        $$ |  $$ |\n");
	printf("\t\t\t\t\t\t\t\t	    $$ |                          $$ |__$$ |\n");
	printf("\t\t\t\t\t\t\t\t	    $$ |                          $$    $$/\n");
	printf("\t\t\t\t\t\t\t\t	    $$/                           $$$$$$$/\n");
	printf("\t\t\t\t\t\t\t\t     Flight Booking System              Data Module System\n\n");
	if(i == 1)printf("\t\t\t\t "); printf("\t\t\t\t\t\t\t\t     ********SELECT*******\n");
	if(i == 1)printf("\t\t\t\t "); printf("\t\t\t\t\t\t\t\t     *********************\n");
	printf("\n\n\n\n\n");printf("\tUse LEFT and RIGHT ARROW KEYS to NAVIGATE. Use ENTER KEY to SELECT. Use ESCAPE KEY to QUIT");
}

void AddC(void)
{
	printf("    #                      #####\n");
	printf("   # #   #####  #####     #     # # ##### #   #\n");
	printf("  #   #  #    # #    #    #       #   #    # # \n");
	printf(" #     # #    # #    #    #       #   #     #  \n");
	printf(" ####### #    # #    #    #       #   #     #\n");
	printf(" #     # #    # #    #    #     # #   #     #\n");
	printf(" #     # #####  #####      #####  #   #     #\n");
	line();
}

void CAdded(char name[15])
{
	printf("\n\n\n                      %s Added Successfully!\n", name);
	printf("                                  _._\n");
	printf("                               .-~ | ~-.\n");
	printf("                               |   |   |\n");
	printf("                               |  _:_  |                    .-:~--.._\n");
	printf("                             .-\"~~ | ~~\"-.                .~  |      |\n");
	printf("            _.-~:.           |     |     |                |   |      |\n");
	printf("           |    | `.         |     |     |                |   |      |\n");
	printf("  _..--~:-.|    |  |         |     |     |                |   |      |\n");
	printf(" |      |  ~.   |  |         |  __.:.__  |                |   |      |\n");
	printf(" |      |   |   |  |       .-\"~~   |   ~~\"-.              |   |      |\n");
	printf(" |      |   |  _|.--~:-.   |       |       |         .:~-.|   |      |\n");
	printf(" |      |   | |      |  ~. |       |   _.-:~--._   .' |   |   |      |\n");
	printf(" |      |   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
	printf(" |      |   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
	printf(" |      |   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
	printf(" |      |   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
	printf(" |      |   | |      |   | |       |  |   |     |  |  |   |   |      |\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Press any key to continue . . . \n");

}

void FAdded(char code[5])
{
printf("\n\nFlight Added Successfully!                                         .____   __ _\n");
printf("     __o__   _______ _ _  _                                     /     /\n");
printf("     \\    ~\\                                                  /      /\n");
printf("       \\     '\\                                         ..../      .'\n");
printf("        . ' ' . ~\\                                      ' /       /\n");
printf("       .  _    .  ~ \\  .+~\\~ ~ ' ' \" \" ' ' ~ - - - - - -''_      /\n");
printf("      .  <#  .  - - -/' . ' \\  __                          '~ - \\\n");
printf("       .. -           ~-.._ / |__|  ( )  ( )  ( )  0  o    _ _    ~ .\n");
printf("     .-'                                               .- ~    '-.    -.\n");
printf("    <                      . ~ ' ' .             . - ~             ~ -.__~_. _ _\n");
printf("      ~- .       %s    .          . . . . ,- ~\n", code);
printf("            ' ~ - - - - =.   <#>    .         \\.._\n");
printf("                        .     ~      ____ _ .. ..  .- .\n");
printf("                         .         '        ~ -.        ~ -.\n");
printf("                           ' . . '               ~ - .       ~-.\n");
printf("                                                       ~ - .      ~ .\n");
printf("Press any key to continue . . .                                ~ -...0..~. ____\n");

}

void DeleteC(void)
{
	printf("######                                        #####\n");
	printf("#     # ###### #      ###### ##### ######    #     # # ##### #   #\n");
	printf("#     # #      #      #        #   #         #       #   #    # #\n");
	printf("#     # #####  #      #####    #   #####     #       #   #     #\n");
	printf("#     # #      #      #        #   #         #       #   #     #\n");
	printf("#     # #      #      #        #   #         #     # #   #     #\n");
	printf("######  ###### ###### ######   #   ######     #####  #   #     #\n");
	printf("Use UP and DOWN ARROW KEYS to navigate and ENTER KEY to SELECT. Use ESCAPE KEY to CANCEL.\n");line();
}

void ViewC(void)
{
	printf(" #     #                     #####\n");
	printf(" #     # # ###### #    #    #     # # ##### #   #\n");
	printf(" #     # # #      #    #    #       #   #    # #\n");
	printf(" #     # # #####  #    #    #       #   #     #\n");
	printf("  #   #  # #      # ## #    #       #   #     # \n");
	printf("   # #   # #      ##  ##    #     # #   #     #\n");
	printf("    #    # ###### #    #     #####  #   #     #\n");
	printf("Use LEFT and RIGHT ARROW KEYS to CHANGE SORT. Use ANY LETTER OF THE ALPHABET to SORT BY LETTER. Use ESCAPE KEY to GO BACK.\n");line();
}

void AddF(void)
{
	printf("    #                     ####### \n");
	printf("   # #   #####  #####     #       #      #  ####  #    # #####\n");
	printf("  #   #  #    # #    #    #       #      # #    # #    #   #\n");
	printf(" #     # #    # #    #    #####   #      # #      ######   #\n");
	printf(" ####### #    # #    #    #       #      # #  ### #    #   #\n");
	printf(" #     # #    # #    #    #       #      # #    # #    #   #\n");
	printf(" #     # #####  #####     #       ###### #  ####  #    #   #\n");
	printf("Use LEFT and RIGHT ARROW KEYS to select CITY SOURCE and DESTINATION.\n");line();
}

void DeleteF(void)
{
	printf("######                                       #######\n");
	printf("#     # ###### #      ###### ##### ######    #       #      #  ####  #    # #####\n");
	printf("#     # #      #      #        #   #         #       #      # #    # #    #   # \n");
	printf("#     # #####  #      #####    #   #####     #####   #      # #      ######   #\n");
	printf("#     # #      #      #        #   #         #       #      # #  ### #    #   #\n");
	printf("#     # #      #      #        #   #         #       #      # #    # #    #   #\n");
	printf("######  ###### ###### ######   #   ######    #       ###### #  ####  #    #   #\n");
	printf("Use UP and DOWN ARROW KEYS to navigate and ENTER KEY to SELECT. Use 'N' and 'P' to CHANGE CURRENT PAGE. Use ESCAPE KEY to CANCEL.\n");line();
	
}

void ViewF(void)
{
	printf(" #     #                    #######\n");
	printf(" #     # # ###### #    #    #       #      #  ####  #    # #####\n");
	printf(" #     # # #      #    #    #       #      # #    # #    #   #\n");
	printf(" #     # # #####  #    #    #####   #      # #      ######   #\n");
	printf("  #   #  # #      # ## #    #       #      # #  ### #    #   #\n");
	printf("   # #   # #      ##  ##    #       #      # #    # #    #   #\n");
	printf("    #    # ###### #    #    #       ###### #  ####  #    #   #\n");
	printf("Use LEFT and RIGHT ARROW KEYS to CHANGE SORT. Use 'N' and 'P' to CHANGE CURRENT PAGE. Use ESCAPE KEY to GO BACK.\n");line();
}

void Srch(void)
{
	printf("  #####\n");
	printf(" #     # ######   ##   #####   ####  #    #\n");
	printf(" #       #       #  #  #    # #    # #    #\n");
	printf("  #####  #####  #    # #    # #      ######\n");
	printf("       # #      ###### #####  #      #    #\n");
	printf(" #     # #      #    # #   #  #    # #    #\n");
	printf("  #####  ###### #    # #    #  ####  #    #\n");line();
}

void fbart(void)
{
printf("\n\n\n\t\t\t\t\t\t\t\t             Where Do You Want To Start Your Journey?\n");
printf("\t\t\t\t\t\t\t\t            ,_   .  ._. _.  .\n");
printf("\t\t\t\t\t\t\t\t           , _-\\','|~\\~      ~/      ;-'_   _-'     ,;_;_,    ~~-\n");
printf("\t\t\t\t\t\t\t\t   /~~-\\_/-'~'--' \\~~| ',    ,'      /  / ~|-_\\_/~/~      ~~--~~~~'--_\n");
printf("\t\t\t\t\t\t\t\t   /              ,/'-/~ '\\ ,' _  , '|,'|~                   ._/-, /~\n");
printf("\t\t\t\t\t\t\t\t   ~/-'~\\_,       '-,| '|. '   ~  ,\\ /'~                /    /_  /~\n");
printf("\t\t\t\t\t\t\t\t .-~      '|        '',\\~|\\       _\\~     ,_  ,               /|\n");
printf("\t\t\t\t\t\t\t\t           '\\        /'~          |_/~\\\\,-,~  \\ \"         ,_,/ |\n");
printf("\t\t\t\t\t\t\t\t            |       /            ._-~'\\_ _~|              \\ ) /\n");
printf("\t\t\t\t\t\t\t\t             \\   __-\\           '/      ~ |\\  \\_          /  ~\n");
printf("\t\t\t\t\t\t\t\t   .,         '\\ |,  ~-_      - |          \\\\_' ~|  /\\  \\~ ,\n");
printf("\t\t\t\t\t\t\t\t                ~-_'  _;       '\\           '-,   \\,' /\\/  |\n");
printf("\t\t\t\t\t\t\t\t                  '\\_,~'\\_       \\_ _,       /'    '  |, /|'\n");
printf("\t\t\t\t\t\t\t\t                    /     \\_       ~ |      /         \\  ~'; -,_.\n");
printf("\t\t\t\t\t\t\t\t                    |       ~\\        |    |  ,        '-_, ,; ~ ~\\\n");
printf("\t\t\t\t\t\t\t\t                     \\,      /        \\    / /|            ,-, ,   -,\n");
printf("\t\t\t\t\t\t\t\t                      |    ,/          |  |' |/          ,-   ~ \\   '.\n");
printf("\t\t\t\t\t\t\t\t                     ,|   ,/           \\ ,/              \\       |\n");
printf("\t\t\t\t\t\t\t\t                     /    |             ~                 -~~-, /   _\n");
printf("\t\t\t\t\t\t\t\t                     |  ,-'                                    ~    /\n");
printf("\t\t\t\t\t\t\t\t                     / ,'                                      ~\n");
printf("\t\t\t\t\t\t\t\t                     ',|  ~\n");
printf("\t\t\t\t\t\t\t\t                       ~'\n");
}

/*****
Function: mainmenu
Description: eto yung para sa flight or booking system men
Returns:  1 if data module; returns 0 if booking system module
*****/

int mainmenu()
{
	int ch = 1, f = 0, exit;
	system("cls");
	santillanairlines(1);
	forb(f);
	do
    {

        if (ch == 0 || ch == 224)
        {
        	ch = getch();
			if(ch == 75)// left
				f = 0;
				
			if(ch == 77)// right
				f = 1; 
		}
		
		else if(ch == 27)
			{
				f = 666;
				return f;
			}
			
		
		system("cls");
		santillanairlines(1);
		forb(f);
		
		ch = getch();
    }while (ch != 13); /* 13 = Enter Key | 27 = Escape*/

	return f;
}


void startmenu(void)
{
	int g = 14, i, n = 0, e, ch, ch1;
	char compro2[23] = {' ',' ',' ',' ',' ',' ','C',' ','O',' ','M',' ','P',' ','R',' ','O',' ','2',' ',' ',' ',' '};

	do{
		system("cls");
	 	santillanairlines(0);
	 	for(i = 0;i < g; i++)printf("\n");
	 	
		for(e = 0; e < n; e++){	printf("\t");}printf(" __  _\n");
		for(e = 0; e < n; e++){	printf("\t");}printf(" \\ `/ |\n");
		for(e = 0; e < n; e++){	printf("\t");}printf("  \\__`!\n");
		for(e = 0; e < n; e++){	printf("\t");}printf("/ ,' `-.____________________\n");
		for(e = 0; e < n; e++){	printf("\t");}printf(" '-'\\_____  ARROW KEYS    |__\\\n");
		for(e = 0; e < n; e++){ printf("%c", compro2[e]);	printf("\t");}printf("    <____()-=O=O=O=O=O=[]====-|)\n");
		for(e = 0; e < n; e++){	printf("\t");}printf("      `.___ ,-----,_______----'\n");
		for(e = 0; e < n; e++){	printf("\t");}printf("           /    .'\n");
		for(e = 0; e < n; e++){	printf("\t");}printf("          /   .'\n");
		for(e = 0; e < n; e++){	printf("\t");}printf("         /  .'\n");
		for(e = 0; e < n; e++){	printf("\t");}printf("         `-'\n");
		
		//ch = _getch();
    	ch1 = getch();
    	
		if(ch1 == 72)// up
			{
				g-=3;
				if(g < 0) g = 0;
			}
			
		else if(ch1 == 80)// down
			{
				g+=3;
				if(g > 20) g = 20;
			}
			
		else if(ch1 == 75)// left
			{
				n--;
				if(n < 0) n = 0;
			}
			
		else if(ch1 == 77)// right
				n+=2;

	}while(n < 22);

 	
}

void exitmenu(void)
{
	int g = 14, i, n = 0, e, b;
	char compro2[23] = {' ',' ','T','H','A','N','K',' ','Y','O','U',' ','F','O','R',' ','F','L','Y','I','N','G',' '};
	char compro3[23] = {' ',' ',' ',' ',' ',' ',' ','W','I','T','H',' ','U','S',' ','!','!',' ',' ',' ',' ',' ',' ',};

	 	for(i = 22;i >= 0; i--)
	 	{
	 		system("cls");
	 		santillanairlines(4);
	 		for(e = 0; e < 15; e++)printf("\n");
	 		for(e = 0; e < i; e++){	printf("\t");}printf("                          _  __\n");
			for(e = 0; e < i; e++){	printf("\t");}printf("                         | \\' /\n");
			for(e = 0; e < i; e++){	printf("\t");}printf("                         ! '_/\n");
			for(e = 0; e < i; e++){	printf("\t");}printf("    ___________________.-' ', \\\n");
			for(e = 0; e < i; e++){	printf("\t");}printf("   /__|  SOUND ON      _____/'-'\n");
			for(e = 0; e < i; e++){ printf("\t");}printf(" (|-====[]=O=O=O=O=O=-()____>"); for(e = i; e <= 22;e++)printf("%c\t", compro2[e]); printf("\n");
			for(e = 0; e < i; e++){	printf("\t");}printf("  '----_______,-----, ___.'  \n"); 
			for(e = 0; e < i; e++){	printf("\t");}printf("       '.     \\             "); for(e = i; e <= 22;e++)printf("%c\t", compro3[e]); printf("\n");
			for(e = 0; e < i; e++){	printf("\t");}printf("         '.    \\\n");
			for(e = 0; e < i; e++){	printf("\t");}printf("           '.   \\ \n");
			for(e = 0; e < i; e++){	printf("\t");}printf("              ' -'\n");
			music(i);
//			for(g=1; g<=1000;g++)
//			for(n=1;n<=3277;n++)
			{
			}
		}
}

/*****
Function: dmmenu
Description: Data module menu
Returns: rereturn niya kung saan nakaturo arrow nagtataka ako kung pag skwater documentation skwater din ba grade
*****/

int dmmenu(void)
{
	int ch, mmvc = 0;
		
	
	do
    {		
        if (ch == 0 || ch == 224)
        {
        	ch = getch();
        	
			if(ch == 72)
				mmvc = (mmvc - 1 + 9) % 9;
				
			if(ch == 80)
				mmvc = (mmvc + 1) % 9;				
		}
		system("cls");
		santillanairlines(3);
		printf("\n\n\n\t\t\t\t");
		if(mmvc == 0) printf("  --->> "); else printf("\t");
		printf("1. Add City\n");
		printf("\t\t\t\t");
		if(mmvc == 1) printf("  --->> "); else printf("\t");
		printf("2. Delete City\n");
		printf("\t\t\t\t");
		if(mmvc == 2) printf("  --->> "); else printf("\t");
		printf("3. View City\n");
		printf("\t\t\t\t");
		if(mmvc == 3) printf("  --->> "); else printf("\t");
		printf("4. Add Flight\n");
		printf("\t\t\t\t");
		if(mmvc == 4) printf("  --->> "); else printf("\t");
		printf("5. Delete Flight\n");
		printf("\t\t\t\t");
		if(mmvc == 5) printf("  --->> "); else printf("\t");
		printf("6. View Flights\n");
		printf("\t\t\t\t");
		if(mmvc == 6) printf("  --->> "); else printf("\t");
		printf("7. Search\n");
		printf("\t\t\t\t");
		if(mmvc == 7) printf("  --->> "); else printf("\t");
		printf("8. File\n");
		printf("\t\t\t\t");
		if(mmvc == 8) printf("  --->> "); else printf("\t");
		printf("9. Exit\n");
		
	ch = getch();
		
    }while (ch != 13); /* 13 = Enter Key*/

	return mmvc;

}

typedef struct
{
	char name[16]; // (at least 3 characters to a maximum of 15 characters)
	char code[4]; // 3 characters dapat pero na shi shit code ko pag 3 nilagay
}structcity;


typedef struct
{
	structcity cityarr[MAXC];
	
}structcityarr;

typedef struct
{
	char code[5]; // 2 alphabetic 2 number
	char source[4]; //city code
	char destination[4]; //city code
	int departuret; //military time
	int durationt; //military time
	int etat; //military time
	
}structflight;

typedef struct
{
	structflight flightarr[MAXF];
	
}structflightarr;

typedef struct
{
	structflight flight[MAXF];
	structcity city[MAXC];
}structDM;

struct fbnode
{
	structflight flight;
	struct fbnode *next;
}; 


/*****
Function: citynamechecker
Description: pabayaan niyo na ako sir wala naman akong partner kung corny yung description ko mej lonesome
Returns: may comment na sa baba haha para mas may sense
*****/

int citynamechecker(structcity cityarr[MAXC], int cityc)
{
	int i;
	
	if(strlen(cityarr[cityc].name) == 0)// if value entered is null return 0
	{
		return 0;
	}
	
	if(strlen(cityarr[cityc].name) > 15)
	{
		printf("Tangina dami ng characters");
		return 0;
	}
	
	for(i = cityc - 1; i >= 0; i--)
	{
		if(!(strcasecmp(cityarr[i].name,cityarr[cityc].name)))// if value entered has a duplicate return 1
			return 1;
	}
	
	return 2;// if value entered does not exist return 2
}

/*****
Function: citycodechecker
Description: checks city code if it follows the format for city code
Returns: may comment na sa baba haha para mas may sense
*****/

int citycodechecker(structcity cityarr[MAXC], int cityc)
{
	int i;
	
	if(strstr(cityarr[cityc].code," ") != 0)
	{
		printf("You cannot enter spaces in the city code.\n");
		return 0; // if value entered has spaces
	}
	
	if(strlen(cityarr[cityc].code) != 3)// if value entered is null return 0
	{
		printf("The number of characters in the city code is invalid\n");
		return 0;
	}
	
	for(i = 0; i < 3; i++)
	{
		if(cityarr[cityc].code[i] <= 'A' || cityarr[cityc].code[i] >= 'z')
		{
			printf("a");
			return 0;	
		}
	}
	
	for(i = cityc - 1; i >= 0; i--)
	{
		if(!(strcasecmp(cityarr[i].code,cityarr[cityc].code)))// if value entered has a duplicate return 1
			{
				printf("Code already exists.\n");
				return 1;
			}
			
	}
	
	return 2;// if value entered does not exist return 2
}

/*****
Function: addcity
Description: add a city to city arr depending on the parameter number of cities
Returns: void
*****/

void addcity(structcity cityarr[MAXC], int *cityc)
{
	int i;
	int valicity;
	int valicode;

	if(*cityc == 10)
	{
		system("cls");
		AddC();
		printf("Maximum number of cities reached. Squatter tong Airlines na to 10 cities lang kaya. Press Space to continue.\n");
		return;
	}
	
	do
	{
		system("cls");
		AddC();
		printf("Enter city name: ");
		gets(cityarr[*cityc].name);
		valicity = citynamechecker(cityarr, *cityc);
		if(valicity == 1)
			{
				system("cls");
				AddC();
				printf("City already exists. Enter Again\n");
			}	
	}while(valicity != 2);
	
		cityarr[*cityc].name[0] = toupper(cityarr[*cityc].name[0]);
	do
	{
		printf("Enter 3 character city code for <%s>: ", cityarr[*cityc].name);
		gets(cityarr[*cityc].code);
		valicode = citycodechecker(cityarr, *cityc);
	}while(valicode != 2);

	for(i = 0; i < 3; i++)
	{
		cityarr[*cityc].code[i] = toupper(cityarr[*cityc].code[i]);
	}
	
	CAdded(cityarr[*cityc].name);
	(*cityc)++;
}

/*****
Function: deletecity
Description: ano mas malaki sa city? ----> Utsu hehehe delet dis 
Returns: void
*****/

void deletecity(structcity cityarr[MAXC], int *cityc, structflight flightarr[MAXF], int *flightc)
{
	
	int i, d, g, ch = 1, mmvc = 0;
	
	if(*cityc == 0)
	{
    	system("cls");
		DeleteC();
		printf("Wala ka pang city na nilalagay pre.\n");
		system("pause");
		return;
	}
	
	do
    {

        if (ch == 0 || ch == 224)
        {
        	ch = getch();
        	
			if(ch == 72)
				g = (g - 1 + *cityc) % *cityc;
				
			if(ch == 80)
				g = (g + 1) % *cityc;
						
		}
	
		
		if(ch == 27)//escape
		
		return;
			
	system("cls");
	DeleteC();
	printf("\n\tCity Name\t\tCity Code\n\n");
	for(i = 0; i < *cityc; i++)
	{
		if(g == i) printf("  --->> "); else printf("\t");
		printf("%-15s",cityarr[i].name);
		printf("      \t");
		puts(cityarr[i].code);
	}
		ch = getch();
    }while (ch != 13); /* 13 = Enter Key*/
    
    printf("\n\n\n");
	for(i = 0; i <= *flightc; i++)
	{
		if(strcasecmp(cityarr[g].code,flightarr[i].destination) == 0 || strcasecmp(cityarr[g].code,flightarr[i].source) == 0)
		{
			printf("\tFlight %s is now cancelled.\n", flightarr[i].code);
			for(d = i; d < *flightc - 1; d++)
			{
				flightarr[d] = flightarr[d + 1];
			}
			
			(*flightc)--;
			i--;
		}

	}
	
	printf("\n\n");

		
	for(g; g < *cityc - 1; g++)
	{
		cityarr[g] = cityarr[g + 1];
	}
	
	(*cityc)--;
	
	
	printf("City Deleted Successfully. ");
	system("pause");
}

/*****
Function: stralp
Description: This acts like an < sign for strings
Returns: return 1 if less is less talaga (nauna sa alphabet) return 0 if less is greater so if 0 switch 
*****/

int stralp(char less[50], char greater[50]) 
{

	int i;
	
	for(i = 0; i < strlen(greater); i++)
	{
		if(less[i] < greater[i])
			return 1;
			
		if(less[i] > greater[i])
			return 0;
	}
	
	if(strlen(greater) < strlen(less))
		return 0;
		
	else
		return 1;
}
/*****
Function: lahat ng structciyarr
Description: ganito kasi parang ang ginagawa sa view city ko / flight parang may temporary struct so di nagagalaw yung order ng
             original na nainput, like yun lang dinidisplay tapos yung mga nasaibaba yung ibat ibang sort mej naiiba lang yung
             parang may alphabet na ewan kasi yun nasa viewer na mismo
Returns: yung arr ng struct kaya nag double typedef ko
*****/
structcityarr sortbyname(structcity cityarr[MAXC], int cityc)
{
	structcityarr sorted;
	structcity temp;
	int i, g;
	
	for(i = 0; i < cityc; i++)
	{
		sorted.cityarr[i] = cityarr[i];
	}
	
	for(i = 0; i < cityc - 1; i++)
	{
		for(g = i + 1; g < cityc; g++)
		{
			if(stralp(sorted.cityarr[i].name, sorted.cityarr[g].name) == 0)
			{
				temp = sorted.cityarr[i];
				sorted.cityarr[i] = sorted.cityarr[g];
				sorted.cityarr[g] = temp;
			}
		}
	}
	
	return sorted;
}

structcityarr sortbycode(structcity cityarr[MAXC], int cityc)
{
	structcityarr sorted;
	structcity temp;
	int i, g;
	
	for(i = 0; i < cityc; i++)
	{
		sorted.cityarr[i] = cityarr[i];
	}
	
	for(i = 0; i < cityc - 1; i++)
	{
		for(g = i + 1; g < cityc; g++)
		{
			if(stralp(sorted.cityarr[i].code, sorted.cityarr[g].code) == 0)
			{
				temp = sorted.cityarr[i];
				sorted.cityarr[i] = sorted.cityarr[g];
				sorted.cityarr[g] = temp;
			}
		}
	}
	
	return sorted;
}

structcityarr sortbyletter(structcity cityarr[10], int chara)
{
	int i, g = 0;
	structcityarr sorted;
	
	printf("VIEW CITY\n");
	printf("\n\tCity Name\t\tCity Code\n\n");
			
	for(i = 0; i < 10; i++)
	{
		if(cityarr[i].name[1] == chara)
			{
				sorted.cityarr[g] = cityarr[i];
				g++;
			}
	}
	
	if(g == 0)
		printf("No City starting with letter %c", chara);
	
	return sorted;
}
/*****
Function: sort city viewer
Description: city viewer hehe xd parang purely printing lang ng cities 
Returns: void
*****/
void sortcityviewer(structcity cityarr[MAXC], int cityc, int opt)
{
	// normal arrangement
	// alphabetical by city
	// alphabetical by city code

	int i;
	structcityarr sorted;
	
	for(i = 0; i < cityc; i++)
	{
		sorted.cityarr[i] = cityarr[i];
	}
	
	printf("Sorted by:\t Order Entered\t\tAlphabetical by City\t\tAlphabetical by Code\t\tby Letter Entered\n");
	if(opt == 0)
	{
		printf("           \t");for(i = 0; i < strlen("Order Entered"); i++)printf("=");
		printf("\n");
	}
		
	if(opt == 1)
	{
		printf("          \t");
		for(i = 0; i < strlen("Order Entered"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("Alphabetical by City"); i++)printf("=");
		printf("\n");
		sorted = sortbyname(cityarr, cityc); 
	}
	
	if(opt == 2)
	{											
		printf("          \t");
		for(i = 0; i < strlen("Order Entered"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("Alphabetical by City"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("Alphabetical by Code"); i++)printf("=");
		printf("\n");
		sorted = sortbycode(cityarr, cityc); 
	}
	    
	
	printf("\n\tCity Name\t\tCity Code\n\n");
	    
		for(i = 0; i < cityc; i++)
		{
			printf("\t");
			printf("%-15s",sorted.cityarr[i].name);
			printf("      \t");
			puts(sorted.cityarr[i].code);
		}	
}
/*****
Function: view city
Description: eto yung view city talaga na may menu na ewan 
Returns: void
*****/

void viewcity(structcity cityarr[MAXC], int cityc)
{
	// normal arrangement
	// alphabetical by city
	// alphabetical by city code
	// letter

	int i, g, opt = 0;
	char ch;
	
	do
	{
        if (ch == 0 || ch == -32)
        {
        	
        	ch = getch();
			if(ch == 75)
				opt = (opt - 1 + 3) % 3;
				
			if(ch == 77)
				opt = (opt + 1) % 3;
    	}
    	
    	system("cls");
		ViewC();
		sortcityviewer(cityarr, cityc, opt);
		
    	if(ch >= 97 && ch <= 122)
    	{
    		system("cls");
			ViewC();
			printf("Sorted by:\t Order Entered\t\tAlphabetical by City\t\tAlphabetical by Code\t\tby Letter Entered: %c\n", toupper(ch));
    		printf("          \t              \t\t                    \t\t                    \t\t======================\n");
			printf("\n\tCity Name\t\tCity Code\n\n");
			for(i = 0; i < cityc; i++)
			{
				if(toupper(ch) ==  cityarr[i].name[0])
				{
					printf("\t");
					printf("%-15s",cityarr[i].name);
					printf("      \t");
					printf("%s \n",cityarr[i].code);
				}
			}
		}
    
	}while((ch = _getch()) != 27); // Escape

	return;
	

		
}

/*****
Function: flight
Description: basically parehas lang to ng city mas marami lang tapos may pages lang yung view at delete so skip ko yung iba hehe
Returns: void
*****/

int fcodechecker(structflight flightarr[MAXF], int flightc)
{
	int i;
	
	if(strstr(flightarr[flightc].code," ") != 0)
	{
		system("cls");
		AddF();
		printf("You cannot enter spaces in the flight code.\n");
		return 0;
	}
	
	if(strlen(flightarr[flightc].code) != 4)// if value entered is null return 0
	{
		system("cls");
		AddF();
		return 0;
	}
	
	if(flightarr[flightc].code[0] > 'Z' || flightarr[flightc].code[0] < 'A' || flightarr[flightc].code[1] > 'Z' || flightarr[flightc].code[1] < 'A')
	{
		system("cls");
		AddF();
		printf("The flight code has 2 letters at the front");
		return 0;
	}
	
	if(flightarr[flightc].code[2] > '9' || flightarr[flightc].code[2] < '0' || flightarr[flightc].code[3] > '9' || flightarr[flightc].code[3] < '0')
	{
		system("cls");
		AddF();
		printf("The flight code has 2 numbers at back");
		return 0;
	}
	
	for(i = flightc - 1; i >= 0; i--)
	{
		if(!(strcasecmp(flightarr[flightc].code,flightarr[i].code)))// if value entered has a duplicate return 1
			{
				system("cls");
				AddF();
				printf("Code already exists.\n");
				return 1;
			}
			
	}
	
	return 2;// if value entered does not exist return 2
}
/*****
Function: mttimechecker
Description: kung valid ba military time
Returns: 0 if valid 1 if invalid
*****/
int mttimechecker(int time)
{
	if(time < 0 || time % 100 > 59 || time/100 > 23)
		return 1;
		
	else 
		return 0;
}
/*****
Function: mttimeadder
Description: nag aadd ng dalawang military time
Returns: added military time
*****/
int mttimeadder(int dept, int dura)
{
	int eta;
	int durh;
	int durm;
	int depm;
	int deph;
	int mins;
	
	durh = dura / 60 * 100;
	durm = dura % 60;
	
	depm = dept % 100;
	deph = dept - depm; 
	mins = durm + depm;
	
	if(mins > 59)
	{
		durh += 100;
		mins = mins % 60;
	}
		
	eta = deph + durh + mins;
	
	eta = eta % 2400;
	return eta;
}

void addflight(structflight flightarr[MAXF], structcity cityarr[MAXC], int *flightc, int cityc)
{
	int i, valicode, s = 0, d, eta, ch;
	
	system("cls");
	AddF();
	
	if(*flightc == 50)
	{
		printf("\n\nMay 50 flights na dito gago. Press Space to Continue.\n");
		return;
	}
	
	if(cityc < 2)
	{
		printf("\n\nNot Enough Cities. Press Any Key to Continue.");
		return;
	}
	
	do
	{
		printf("\n\nEnter 4 character flight code: ");
		gets(flightarr[*flightc].code);
		for(i = 0; i < 2; i++)
				flightarr[*flightc].code[i] = toupper(flightarr[*flightc].code[i]);
		valicode = fcodechecker(flightarr, *flightc);
	}while(valicode != 2);
	
	printf("\nEnter city source: ");
	
	while ((ch = _getch()) != 13) /* 13 = Enter Key | 27 = Escape*/
    {
	    if (ch == 0 || ch == 224)
        {
        	ch = getch();
			if(ch == 75)// left
				s = (s - 1 + cityc) % cityc;
				
			if(ch == 77)// right
				s = (s + 1) % cityc; 
		}
		system("cls");
		AddF();
		printf("\n\nEnter 4 character flight code: %s\n", flightarr[*flightc].code);
		printf("\nEnter city source: %s", cityarr[s].code);
    }
	
	strcpy(flightarr[*flightc].source,cityarr[s].code);
	
	system("cls");
	AddF();
	printf("\n\nEnter 4 character flight code: %s\n", flightarr[*flightc].code);
	printf("\nEnter city source: %s", cityarr[s].code);
	printf("\nEnter city destination: ");
	
	while ((ch = _getch()) != 13) /* 13 = Enter Key | 27 = Escape*/
    {
	    if (ch == 0 || ch == 224)
        {
        	ch = getch();
			if(ch == 75)// left
				d = (d - 1 + cityc) % cityc;
				
			if(ch == 77)// right
				d = (d + 1) % cityc;
				
			if(d == s) 
				d = (d + 1) % cityc;
		}
		system("cls");
		AddF();
		printf("\n\nEnter 4 character flight code: %s\n", flightarr[*flightc].code);
		printf("\nEnter city source: %s", cityarr[s].code);
		printf("\nEnter city destination: %s", cityarr[d].code);
    }
	
	strcpy(flightarr[*flightc].destination,cityarr[d].code);
	
	do{
		system("cls");
		AddF();
		printf("\n\nEnter 4 character flight code: %s\n", flightarr[*flightc].code);
		printf("\nEnter city source: %s", cityarr[s].code);
		printf("\nEnter city destination: %s", cityarr[d].code);
		printf("\n\nEnter departure time in Military time: ");
		scanf("%d", &flightarr[*flightc].departuret);
	}while(mttimechecker(flightarr[*flightc].departuret));
	
	printf("Enter duration of flight: ");
	scanf("%d", &flightarr[*flightc].durationt);
	
	flightarr[*flightc].etat = mttimeadder(flightarr[*flightc].departuret, flightarr[*flightc].durationt);
	

	printf("Estimated Time of Arrival: %04d\n\n", flightarr[*flightc].etat);
	
	FAdded(flightarr[*flightc].code);
	
	(*flightc)++;
	
	return;
	
}

void deleteflight(structflight flightarr[MAXF], int *flightc)
{
	int i, d, g = 0, ch = 1;
	int l;
	int nop = ((*flightc - 1) / 10) + 1; //number of pages 1 2 3 4 5
	int cp = 0;// current page 0 1 2 3 4
	system("cls");
	DeleteF();
	
		
	if(*flightc == 0)
	{
		printf("Wala ka pang flight na nilalagay pre.\n");
		system("pause");
		return;
	}
	

	do
    {
    	if(ch == 110) // 'n' 
	    	{
	    		cp = (cp + 1) % nop;
	    		g = cp * 10;
	    		ch = 1;
			}
	    		
	    if(ch == 112) // 'p' 
	    	{
	    		cp = (cp - 1 + nop) % nop;
	    		g = cp * 10;
	    		ch = 1;
			} 
			
    	if(ch == 27)//escape
		return;
		
    	if(cp + 1 == nop)
	    	l = *flightc;
	    	
    	else
			l = (cp + 1) * 10;
		

		
        if (ch == 0 || ch == 224)
        {
        	ch = getch();
        	
			if(ch == 72)
				g = (g - 1 + l) % l;
				
			if(ch == 80)
				g = (g + 1) % l;
			
			if(g < cp * 10)
				g = cp * 10;
						
		}
		
	
	system("cls");
	DeleteF();
//	printf("\n%d\n",g);
	printf("\n\tFlight Code\t\tSource\t\tDestination\t\tDeparture Time\t\tEstimated Arrival Time\n\n");
	
	for(i = 10 * cp; i < l; i++)
	{
		if(g == i) printf("  --->> "); else printf("\t");
		printf("%4s       \t\t%3s   \t\t%3s        \t\t%04d          \t\t%04d\n",flightarr[i].code, flightarr[i].source, 
																flightarr[i].destination,flightarr[i].departuret,
																flightarr[i].etat);
	}
	
	
	printf("\n\nPage %d of %d", cp + 1, nop);
	
	ch = getch();
	
    }while (ch != 13); /* 13 = Enter Key*/
    
		
	for(d = g; d < *flightc - 1; d++)
	{
		flightarr[d] = flightarr[d + 1];
	}
	
	(*flightc)--;
	
	printf("Flight Deleted Successfully. Press Space to Continue.\n");
	system("pause");
}

structflightarr sortbyfcode(structflight flightarr[MAXF], int flightc)
{
	structflightarr sorted;
	structflight temp;
	
	int i, g;
	
	for(i = 0; i < flightc; i++)
	{
		sorted.flightarr[i] = flightarr[i];
	}
	
	for(i = 0; i < flightc - 1; i++)
	{
		for(g = i + 1; g < flightc; g++)
		{
			if(stralp(sorted.flightarr[i].code, sorted.flightarr[g].code) == 0)
			{
				temp = sorted.flightarr[i];
				sorted.flightarr[i] = sorted.flightarr[g];
				sorted.flightarr[g] = temp;
			}
		}
	}
	
	return sorted;
}

structflightarr sortbydepartt(structflight flightarr[MAXF], int flightc)
{
	structflightarr sorted;
	structflight temp;
	
	int i, g;
	
	for(i = 0; i < flightc; i++)
	{
		sorted.flightarr[i] = flightarr[i];
	}
	
	for(i = 0; i < flightc - 1; i++)
	{
		for(g = i + 1; g < flightc; g++)
		{
			if(sorted.flightarr[i].departuret > sorted.flightarr[g].departuret)
			{
				temp = sorted.flightarr[i];
				sorted.flightarr[i] = sorted.flightarr[g];
				sorted.flightarr[g] = temp;
			}
		}
	}
	
	return sorted;
}


structflightarr sortbyetat(structflight flightarr[MAXF], int flightc)
{
	structflightarr sorted;
	structflight temp;
	
	int i, g;
	
	for(i = 0; i < flightc; i++)
	{
		sorted.flightarr[i] = flightarr[i];
	}
	
	for(i = 0; i < flightc - 1; i++)
	{
		for(g = i + 1; g < flightc; g++)
		{
			if(sorted.flightarr[i].etat > sorted.flightarr[g].etat)
			{
				temp = sorted.flightarr[i];
				sorted.flightarr[i] = sorted.flightarr[g];
				sorted.flightarr[g] = temp;
			}
		}
	}
	
	return sorted;
}

structflightarr sortbydurt(structflight flightarr[MAXF], int flightc)
{
	structflightarr sorted;
	structflight temp;
	
	int i, g;
	
	for(i = 0; i < flightc; i++)
	{
		sorted.flightarr[i] = flightarr[i];
	}
	
	for(i = 0; i < flightc - 1; i++)
	{
		for(g = i + 1; g < flightc; g++)
		{
			if(sorted.flightarr[i].durationt > sorted.flightarr[g].durationt)
			{
				temp = sorted.flightarr[i];
				sorted.flightarr[i] = sorted.flightarr[g];
				sorted.flightarr[g] = temp;
			}
		}
	}
	
	return sorted;
}


void sortflightviewer(structflight flightarr[MAXF], int flightc, int opt, int cp, int nop)
{
//	alphabetically by flight code
//	arranged chronological by departure time or 
//  arrival time
//	arranged in increasing order of duration.
//	by 10

	int i, l;
		
	structflightarr sorted;
	
	for(i = 0; i < flightc; i++)
	{
		sorted.flightarr[i] = flightarr[i];
	}
	
	printf("Sorted by:\tOrder Entered\t\tAlphabetical by Flight Code\t\tby Departure Time\t\tby Arrival Time\t\tby Duration\n");
	
	if(opt == 0)
	{
		printf("           \t");for(i = 0; i < strlen("Order Entered"); i++)printf("=");
		printf("\n");
	}
		
	if(opt == 1)
	{
		printf("          \t");
		for(i = 0; i < strlen("Order Entered"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("Alphabetical by Flight Code"); i++)printf("=");
		printf("\n");
		sorted = sortbyfcode(flightarr,flightc);
	}
	
	if(opt == 2)
	{											
		printf("          \t");
		for(i = 0; i < strlen("Order Entered"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("Alphabetical by Flight Code"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("by Departure Time"); i++)printf("=");
		printf("\n"); 
		sorted = sortbydepartt(flightarr, flightc);
	}

	if(opt == 3)
	{											
		printf("          \t");
		for(i = 0; i < strlen("Order Entered"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("Alphabetical by Flight Code"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("by Departure Time"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("by Arrival Time"); i++)printf("=");
		printf("\n");
		sorted = sortbyetat(flightarr, flightc);
	}
	
	if(opt == 4)
	{											
		printf("          \t");
		for(i = 0; i < strlen("Order Entered"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("Alphabetical by Flight Code"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("by Departure Time"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("by Arrival Time"); i++)printf(" ");
		printf("\t\t");
		for(i = 0; i < strlen("by Duration"); i++)printf("=");
		printf("\n");
		sorted = sortbydurt(flightarr, flightc);
	}
	    
	if(cp + 1 == nop)
		l = flightc;
	
	else
		l = (cp + 1) * 10;
		
	printf("\n\tFlight Code\t\tSource\t\tDestination\t\tDeparture Time\t\tEstimated Arrival Time\n\n");
	    
		for(i = 10 * cp; i < l; i++)
		{
			printf("\t%4s       \t\t%3s   \t\t%3s        \t\t%04d          \t\t%04d\n",sorted.flightarr[i].code, sorted.flightarr[i].source, 
																				sorted.flightarr[i].destination,sorted.flightarr[i].departuret,
																				sorted.flightarr[i].etat);
		}
		
		printf("\n\n Page %d of %d", cp + 1, nop);
}

void viewflight(structflight flightarr[MAXF], int flightc)
{
//	alphabetically by flight code
//	arranged chronological by departure time or 
//  arrival time
//	arranged in increasing order of duration.
//	by 10
	
	int ch, opt = 0,cp = 0, nop;
	
	nop = (flightc - 1)/10 + 1;
	
	ViewF();
	
	do
	{

        if (ch == 0 || ch == 224)
        {
        	ch = getch();
			if(ch == 75)
				opt = (opt - 1 + 5) % 5;
				
			if(ch == 77)
				opt = (opt + 1) % 5;
    	}
    	
    	if(ch == 110) // 'n'
    		cp = (cp + 1) % nop;
    		
    	if(ch == 112) // 'p'
    		cp = (cp - 1 + nop)% nop;
    	
    	system("cls");
		ViewF();
		sortflightviewer(flightarr, flightc, opt, cp, nop);
    
    	ch = getch();
    	
	}while(ch != 27); // Escape

	return;
}

int chartoint(char key[5])
{
	int multiplier = 1, ret = 0, i, g;
	for(i = 0; i < strlen(key); i++)
	{
		ret *= 10;
		switch(key[i])
		{
			case '1': g = 1; break;
			case '2': g = 2; break;
			case '3': g = 3; break;
			case '4': g = 4; break;
			case '5': g = 5; break;
			case '6': g = 6; break;
			case '7': g = 7; break;
			case '8': g = 8; break;
			case '9': g = 9; break;
			case '0': g = 0; break;
			default : return 69;
		}
		ret += g;
	}
	
	return ret;
}

/*****
Function: search
Description: so case insensitive na parang basta nandun yung part ng string sa kahit anong shit lalabas wow
Returns: printer lang boi
*****/
void search(structflight flightstr[MAXF], structcity cityarr[MAXC], int flightc, int cityc)
{
	system("cls");
	Srch();
	char key[5];
	int keyid;
	int i;
	int c = 0;
	char compare[16];
	
	printf("\n\nEnter key: ");
	gets(key);
	
	keyid = chartoint(key);
	
	printf("\n\tCITIES");
	printf("\n\tCity Name\t\tCity Code\n\n");

	for(i = 0; i < cityc; i++)
		{
			strcpy(compare,cityarr[i].name);
			
			if(strstr(strupr(compare),strupr(key)) != 0)
			{
				printf("\t");
				printf("%-15s",cityarr[i].name);
				printf("      \t");
				puts(cityarr[i].code);
				strcpy(key, cityarr[i].code);
			}
			
			else if(strcasecmp(key,cityarr[i].code) == 0)
			{
				printf("\t");
				printf("%-15s",cityarr[i].name);
				printf("      \t");
				puts(cityarr[i].code);
			}
		}

		
	printf("\n\n\tFLIGHTS");
	printf("\n\tFlight Code\t\tSource\t\tDestination\t\tDeparture Time\t\tEstimated Arrival Time\n\n");
	
	for(i = 0; i < flightc; i++)
	{
		if(strstr(flightstr[i].code, key) != 0)
		printf("\t%4s       \t\t%3s   \t\t%3s        \t\t%04d          \t\t%04d\n",flightstr[i].code, flightstr[i].source, 
																		flightstr[i].destination,flightstr[i].departuret,
																		flightstr[i].etat);
	}

	for(i = 0; i < flightc; i++)
	{
		if(strcasecmp(key, flightstr[i].source) == 0)
		printf("\t%4s       \t\t%3s   \t\t%3s        \t\t%04d          \t\t%04d\n",flightstr[i].code, flightstr[i].source, 
																		flightstr[i].destination,flightstr[i].departuret,
																		flightstr[i].etat);
	}
	
	for(i = 0; i < flightc; i++)
	{
		if(strcasecmp(key, flightstr[i].destination) == 0)
		printf("\t%4s       \t\t%3s   \t\t%3s        \t\t%04d          \t\t%04d\n",flightstr[i].code, flightstr[i].source, 
																		flightstr[i].destination,flightstr[i].departuret,
																		flightstr[i].etat);
	}
	
	for(i = 0; i < flightc; i++)
	{
		if(keyid == flightstr[i].departuret)
		printf("\t%4s       \t\t%3s   \t\t%3s        \t\t%04d          \t\t%04d\n",flightstr[i].code, flightstr[i].source, 
																		flightstr[i].destination,flightstr[i].departuret,
																		flightstr[i].etat);
	}
	
	printf("\n\nPress any key to continue . . .");
}
/*****
Function: initialize
Description: naglalagay lang ng 10 static cities tapos dynamic flights
Returns: void pero may future dito eto yung file hehe pero kami walang walang future
*****/
void initialize(structcity citystr[MAXC], int *cityc, structflight flightstr[MAXF], int *flightc, int fly)
{
	int i, g, r;
	*flightc = 0;
	
	strcpy(citystr[0].name, "Manila"); strcpy(citystr[0].code, "MNL");
	strcpy(citystr[1].name, "Taiwan"); strcpy(citystr[1].code, "TWN");
	strcpy(citystr[2].name, "Cebu"); strcpy(citystr[2].code, "CUU");
	strcpy(citystr[3].name, "China"); strcpy(citystr[3].code, "CHI");
	strcpy(citystr[4].name, "Las Pinas"); strcpy(citystr[4].code, "LPI");
	strcpy(citystr[5].name, "Tondo"); strcpy(citystr[5].code, "TND");
	strcpy(citystr[6].name, "Binondo"); strcpy(citystr[6].code, "BND");
	strcpy(citystr[7].name, "Ayaw ko na"); strcpy(citystr[7].code, "AKN");
	strcpy(citystr[8].name, "I Dont Know"); strcpy(citystr[8].code, "IDK");
	strcpy(citystr[9].name, "Last na Itu"); strcpy(citystr[9].code, "LNI");
	
	(*cityc) = 10;
	
	
	
		for(i = 0; i < fly; i++)
	{
		r = rand();
		for(g = 0; g < 2; g ++)
			flightstr[i].code[g] = 'A' + rand() % 26;
			
		for(g = 2; g < 4; g++)
			flightstr[i].code[g] = '1' + rand() % 9;
			
		flightstr[i].code[4] = '\0';
		strcpy(flightstr[i].source, citystr[(r) % MAXC].code);
		strcpy(flightstr[i].destination, citystr[(r + rand()%5+1) % MAXC ].code);
		flightstr[i].departuret = (rand() % 23) * 100 + (rand() % 59);
		flightstr[i].durationt = (rand() % 200) * 2;
		flightstr[i].etat = mttimeadder(flightstr[i].departuret, flightstr[i].durationt);
		(*flightc)++;
	}
}


void printbooking(struct fbnode *fbooking)
{
	struct fbnode *pRun;
	
	pRun = fbooking;
	printf("\n\n");
	printf("\n\tFlight Code\t\tSource\t\tDestination\t\tDeparture Time\t\tEstimated Arrival Time\n\n");
	while(pRun != NULL)
	{
		printf("\t%4s       \t\t%3s   \t\t%3s        \t\t%04d          \t\t%04d\n",pRun->flight.code, pRun->flight.source, 
																pRun->flight.destination,pRun->flight.departuret,
																pRun->flight.etat);
		pRun = pRun->next;
	}

	
	system("pause");
}

int flightcounter(structflight flightarr[MAXF], int flightc, int time, char source[5])
{
	//time is the earliest time possible na kunwari yung last flight mo ang eta 0500 dapat ang departure 0515 pataas
	int i,g = 0;
	for(i = 0; i < flightc; i++)
	{
		if(flightarr[i].departuret >= time && strcmp(flightarr[i].source, source) == 0)
			g++;
	}
	
	return g;
}

structflight selectflight(structflight flightarr[MAXF], int flightc, int time, char source[5], int a)
{
	
	int i, d, g = 0, ch = 1, s;
	
	do
    {
			
    	if(ch == 27)//escape
		return;
		

		
        if (ch == 0 || ch == 224)
        {
        	ch = getch();
        	
			if(ch == 72)
				g = (g - 1 + a) % a;
				
			if(ch == 80)
				g = (g + 1) % a;
						
		}
		
	d = 0;
	system("cls");
	santillanairlines(2);
	printf("\nAvailable Connecting Flights:\n");
	printf("\n\tFlight Code\t\tSource\t\tDestination\t\tDeparture Time\t\tEstimated Arrival Time\n\n");
	
	for(i = 0; i < flightc; i++)
	{
		if(flightarr[i].departuret >= time && strcmp(flightarr[i].source, source) == 0)
		{
			if(g == d){printf("  --->> ");s = i;} else printf("\t");
			printf("%4s       \t\t%3s   \t\t%3s        \t\t%04d          \t\t%04d\n",flightarr[i].code, flightarr[i].source, 
																flightarr[i].destination,flightarr[i].departuret,
																flightarr[i].etat);
			d++; 
			
		}

	}
	
	ch = getch();
	
    }while (ch != 13); /* 13 = Enter Key*/
    
	
	
    return flightarr[s];
}

void addnode(struct fbnode **fbooking, structflight flighttoadd)
{
	
	struct fbnode *pRun;
	struct fbnode *pNew;
	
	pNew = malloc(sizeof(struct fbnode));
	pNew->flight = flighttoadd;
	pNew->next = NULL;
	
	pRun = *fbooking;
	while(pRun->next != NULL)
	{
		pRun = pRun->next;
	}
	pRun->next = pNew;

	
	return;
}

void fbsaving(struct fbnode *fbooking)
{
	char filename[50];
	FILE *fp;
	struct fbnode *pRun;
	
	pRun = fbooking;
	
	printf("Enter filename: ");
	gets(filename);
	
	fp = fopen(filename, "w");
	
	fprintf(fp,"CODE\t\tETDEPART\t\tSOURCE\t\tDESTIN\t\tETARRIVAL\n\n");
	while(pRun != NULL)
	{
		fprintf(fp,"%4s\t\t%04d    \t\t %3s  \t\t %3s  \t\t%4d\n", pRun->flight.code,pRun->flight.departuret,pRun->flight.source,pRun->flight.destination,
																pRun->flight.etat);
		pRun = pRun->next;
	}
	fclose(fp);
	
	printf("Booking is saved at file <%s>.",filename);
	system("pause");
}

int fbmenu(struct fbnode *fbooking, structcity cityarr[MAXC], int cityc)
{
	int mmvc = 0, ch = 1, i;
	struct fbnode *pRun;
	char citysource[16];
	char citydestination[16];
	pRun = fbooking;



	for(i = 0; i < cityc; i++)
	{
		if(strcmp(fbooking->flight.source, cityarr[i].code) == 0)
			strcpy(citysource, cityarr[i].name);
	}
			
	while(pRun->next != NULL)
	{
		pRun = pRun->next;
	}
		

	for(i = 0; i < cityc; i++)
	{		
		if(strcmp(pRun->flight.destination, cityarr[i].code) == 0)
			strcpy(citydestination, cityarr[i].name);
	}
	
	
	
	do
    {		
        if (ch == 0 || ch == 224)
        {
        	ch = getch();
        	
			if(ch == 72)
				mmvc = (mmvc - 1 + 5) % 5;
				
			if(ch == 80)
				mmvc = (mmvc + 1) % 5;				
		}
		system("cls");
		santillanairlines(2);
		
		if(fbooking != NULL)
		printf("\n\t\tYour Booking is From %s To %s.\n", citysource, citydestination);

		printf("\n\n\t\t\t\t");
		if(mmvc == 0) printf("  --->> "); else printf("\t");
		printf("1. Book Flight\n");
		printf("\t\t\t\t");
		if(mmvc == 1) printf("  --->> "); else printf("\t");
		printf("2. Cancel Booking\n");
		printf("\t\t\t\t");
		if(mmvc == 2) printf("  --->> "); else printf("\t");
		printf("3. View Itinerary\n");
		printf("\t\t\t\t");
		if(mmvc == 3) printf("  --->> "); else printf("\t");
		printf("4. Save\n");
		printf("\t\t\t\t");
		if(mmvc == 4) printf("  --->> "); else printf("\t");
		printf("5. Exit\n");
		printf("\t\t\t\t\n\n\n");
		
	ch = getch();
		
    }while (ch != 13); /* 13 = Enter Key*/

	return mmvc;
	
}

/*****
Function: flightbookingsystem
Description: sadyang wala kasi akong magawa sa lyf 
Returns: sobrang mareregret ko yung kacornyhan ko later on 
*****/

void bookflight(struct fbnode **fbooking, structflight flightarr[MAXF], int flightc)
{
	
	struct fbnode *pRun;
	structflight flighttoadd;
	pRun = *fbooking;
	
	
	
	while(pRun->next != NULL)
	{
		pRun = pRun->next;
	}
	
	int a = flightcounter(flightarr, flightc, pRun->flight.etat+15, pRun->flight.destination);

	if(a > 0)
	{
		flighttoadd = selectflight(flightarr, flightc, pRun->flight.etat+15, pRun->flight.destination, a);
		addnode(&*fbooking, flighttoadd);
		printf("Flight Booked Successfully.");
		system("pause");
	}
	
	else
	{
		printf("No more available connecting flights.");
		system("pause");
	}

	
	return;
}
struct fbnode *newly(void)
{
	return NULL;
}

struct fbnode *newbook(structcity cityarr[MAXC], int cityc, structflight flightarr[MAXF], int flightc)
{
	struct fbnode *fbooking;
	int ch = 1, ch1, s = 0, i, a, menu;
	structflight flighttoadd;
	
	fbooking = malloc(sizeof(struct fbnode));
	
	do
    {
	    if (ch == 0 || ch == 224)
        {
        	ch1 = getch();
			if(ch1 == 75)// left
				s = (s - 1 + cityc) % cityc;
				
			if(ch1 == 77)// right
				s = (s + 1) % cityc; 
		}
		

		
		system("cls");
		santillanairlines(2);
		fbart();
		do{
			a = flightcounter(flightarr, flightc, 0, cityarr[s].code); // gets valid available flights
			if(a == 0)
				s = (s + 1)% cityc;
		}while(a == 0);
		printf("\n\t\t\t\t\t\t\t\t\t\t\t    *****************\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t    *");for(i = 0; i < (15 - strlen(cityarr[s].name))/2; i++)printf(" ");
		printf("%s", cityarr[s].name);for(i = 0; i < (16 - strlen(cityarr[s].name))/2; i++)printf(" ");
		printf("*\n\t\t\t\t\t\t\t\t\t\t\t    *****************\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t  Flights Availabe: %d\n", a);
		ch = getch();

    }while (ch != 13); /* 13 = Enter Key*/
    
    system("cls");
	santillanairlines(2);
	flighttoadd = selectflight(flightarr, flightc, 0, cityarr[s].code, a);
	
	fbooking->flight = flighttoadd;
	fbooking->next = NULL;
	
    return fbooking;
    
}

void deletebooking(struct fbnode **fbooking, structcity cityarr[MAXC], int cityc, structflight flightarr[MAXF], int flightc)
{
	
	struct fbnode *pRun;
	struct fbnode *pTrail;
	pRun = *fbooking;
	pTrail = pRun;
	
	
	if((*fbooking)->next == NULL)
	{
		free(*fbooking);
		*fbooking = newbook(cityarr,cityc,flightarr,flightc);
		return;
	}
	
	while(pRun->next != NULL)
	{
		pTrail = pRun;
		pRun = pRun->next;
	}
	

	printf("\n\n\t\tFlight %s is cancelled from your booking\n", pRun->flight.code);
	pTrail->next = NULL;
	free(pRun);
	system("pause");

	return;
}

int exitfbooking(int changes)
{
	int ch;
	char exitphrase[50];
	
	
	if(changes == 0)
		return 4;
		
	else
	{
		printf("\t\t\tType \"Nais kong magpakalasing dahil wala ka na\" kung ayaw mo na talaga\n\t\t\t\t\t\t\t\t\t");
		gets(exitphrase);

		if(strcmp(exitphrase, "Nais kong magpakalasing dahil wala ka na") == 0)
			return 4;
			
		else
			return 5;
	}
	
}

void flightbookingsystem(structcity cityarr[MAXC], int cityc, structflight flightarr[MAXF], int flightc)
{
	struct fbnode *fbooking;
	int ch = 1, s = 0, i, a, menu;
	structflight flighttoadd;
	int changes = 1;

	fbooking = newbook(cityarr,cityc,flightarr,flightc);
	
	do{
		menu = fbmenu(fbooking, cityarr, cityc);
		switch(menu)
		{
			case 0: bookflight(&fbooking,flightarr, flightc);changes = 1;break;
			case 1: deletebooking(&fbooking,cityarr,cityc,flightarr,flightc);changes = 1;break;
			case 2: printbooking(fbooking);break;
			case 3: fbsaving(fbooking);changes = 0; break;
			case 4: menu = exitfbooking(changes);break;
		}
	}while(menu != 4);

    return;
}


int filemenu(void)
{
	int ch = 1, mmvc = 0;
	
	do
    {		
        if (ch == 0 || ch == 224)
        {
        	ch = getch();
        	
			if(ch == 72)
				mmvc = (mmvc - 1 + 6) % 6;
				
			if(ch == 80)
				mmvc = (mmvc + 1) % 6;				
		}
		system("cls");
		santillanairlines(2);

		printf("\n\n\t\t\t\t");
		if(mmvc == 0) printf("  --->> "); else printf("\t");
		printf("1. Save Cities\n");
		printf("\t\t\t\t");
		if(mmvc == 1) printf("  --->> "); else printf("\t");
		printf("2. Save Flights\n");
		printf("\t\t\t\t");
		if(mmvc == 2) printf("  --->> "); else printf("\t");
		printf("3. Load Cities\n");
		printf("\t\t\t\t");
		if(mmvc == 3) printf("  --->> "); else printf("\t");
		printf("4. Load Flights\n");
		printf("\t\t\t\t");
		if(mmvc == 4) printf("  --->> "); else printf("\t");
		printf("5. Auto-Initialize Flights and Cities\n");
		printf("\t\t\t\t");
		if(mmvc == 5) printf("  --->> "); else printf("\t");
		printf("6. Exit\n");
		printf("\t\t\t\t");
		
	ch = getch();
		
    }while (ch != 13); /* 13 = Enter Key*/
    
    return mmvc;
    
}

void savecities(structcity citystr[MAXC], int cityc)
{
	int i;
	char filename[50];
	FILE *fp;

	system("cls");
	santillanairlines(2);
	printf("\n\n\t\t\tEnter file name to save cities: ");
	gets(filename);
	
	fp = fopen(filename, "w");
	fprintf(fp,"%d\n",cityc);
	for(i = 0; i < cityc; i++)
	{
		fprintf(fp,"%s %3s\n", citystr[i].name, citystr[i].code);
	}
	
	fclose(fp);
	
	return;
}

void saveflights(structflight flightstr[MAXF], int flightc)
{
	int i;
	char filename[50];
	FILE *fp;

	system("cls");
	santillanairlines(2);
	printf("\n\n\t\t\tEnter file name to save flights: ");
	gets(filename);
	
	fp = fopen(filename, "w");
	fprintf(fp,"%d\n",flightc);
	for(i = 0; i < flightc; i++)
	{
		fprintf(fp,"FCODE = %s\nSRCCITY = %s\nDESTCITY = %s\nDEPARTURE = %04d\nDURATION = %04d\n", flightstr[i].code,flightstr[i].source,
																flightstr[i].destination,flightstr[i].departuret,flightstr[i].durationt);
	}
	
	fclose(fp);

	return;
}

void loadcities(structcity citystr[MAXC], int *cityc)
{
	int i, g, n, t;
	char filename[50];
	char parakangewan[20];
	char e;
	
	FILE *fp;
	char string[20];

	
	printf("\n\n\n\t\tInitializing means overwriting all current cities. Type \"You had me at my best\" if you want to continue.\n\t\t");
	gets(string);
	
	if(strcmp(string, "You had me at my best") != 0)
		return;
		
	system("cls");
	santillanairlines(2);
	printf("\n\n\t\t\tTANGINA AYUSIN MO YUNG FILE NA LALAGAY MO, MAWAWARAK DATA MODULE MO PARANG PUSO KO PAG DI KA PUMILI NG MAAYOS\n\t\t\tEnter file name to load cities: ");
	gets(filename);
	fp = fopen(filename, "r");
	
	if(fp == NULL)
		{
			printf("\t\t\tFile does not exist!");
			system("pause");
			fclose(fp);
			return;
		}
		
	else
	{
		fscanf(fp,"%d\n",&*cityc);	
		for(i = 0; i < *cityc;i++)
		{
//			fgets(citystr[i].name, 16, fp);
//			fgets(citystr[i].code, 4, fp);
//			fscanf(fp,"%s\n", citystr[i].name);
//			fscanf(fp,"%s\n", citystr[i].code);
			g = 0;
			while((e = getc(fp)) != '\n')
			{
				parakangewan[g] = e;
				g++;
			}
			parakangewan[g] = '\0';
			
			g = strlen(parakangewan);
			
			for(n = 0; n < g - 4;n++)
				citystr[i].name[n] = parakangewan[n];
				
			citystr[i].name[n] = '\0';
			
			citystr[i].code[0] = parakangewan[g-3];
			citystr[i].code[1] = parakangewan[g-2];
			citystr[i].code[2] = parakangewan[g-1];
			citystr[i].code[3] = '\0';
//	YUMMYTEH ANG PANGIT NG CODE KO HAHAHAHAHAHA
		}
	}
	
	fclose(fp);
	return;
}

void loadflights(structflight flightstr[MAXF], int *flightc)
{
	int i;
	char filename[50];
	FILE *fp;
	
	char string[20];

	
	printf("\n\n\n\t\tInitializing means overwriting all current flights. Type \"She had me at my worst\" if you want to continue.\n\t\t");
	gets(string);
	
	if(strcmp(string, "She had me at my worst") != 0)
		return;
	
	
	system("cls");
	santillanairlines(2);
	printf("\n\n\t\t\tMAKE SURE NA COMPATBILE CITIES SA FLIGHTS KUNG HINDI MASASAKTAN KA LANG WAG MO LOKOHIN SARILI MO PLS\n\t\t\tEnter file name to load flights: ");
	gets(filename);
	fp = fopen(filename, "r");
	
	if(fp == NULL)
		{
			printf("\t\t\tFile does not exist!");
			system("pause");
			fclose(fp);
			return;
		}
		
	else
	{
		fscanf(fp,"%d\n",&*flightc);	
		for(i = 0; i < *flightc;i++)
		{
			fscanf(fp,"FCODE = %s\n",flightstr[i].code);
			fscanf(fp,"SRCCITY = %s\n",flightstr[i].source);
			fscanf(fp,"DESTCITY = %s\n",flightstr[i].destination);
			fscanf(fp,"DEPARTURE = %04d\n",&flightstr[i].departuret);
			fscanf(fp,"DURATION = %04d\n",&flightstr[i].durationt);
			flightstr[i].etat = mttimeadder(flightstr[i].departuret,flightstr[i].durationt);
		}
	}
	
	
	fclose(fp);
	
	return;
}

void autoinitialize(structcity citystr[MAXC], int *cityc, structflight flightstr[MAXF], int *flightc)
{
	char string[20];
	int fly;
	
	printf("\n\n\n\t\tInitializing means overwriting all current data. Type \"But you chose to let me go\" if you want to continue.\n\t\t");
	gets(string);
	
	if(strcmp(string, "But you chose to let me go") == 0)
	{
		printf("\t\tHow many flights do you want to initialize(Maximum of %d): ", MAXF);
		scanf("%d", &fly);
		initialize(citystr, &*cityc, flightstr, &*flightc, fly % (MAXF + 1));
	}

	else 
		return;
}

void files(structcity citystr[MAXC], int *cityc, structflight flightstr[MAXF], int *flightc)
{
	// Future File processing

	int menu;

		do{
		menu = filemenu();
		switch(menu)
		{
			case 0: savecities(citystr, *cityc);break;
			case 1: saveflights(flightstr,*flightc);break;
			case 2: loadcities(citystr, &*cityc);break;
			case 3: loadflights(flightstr,&*flightc); break;
			case 4: autoinitialize(citystr, &*cityc, flightstr, &*flightc);break;
		}
	}while(menu != 5);
	
	return;
	
}

int main()
{
	int g, i;
	char exitphrase[100];
    int flc; //flight counter
    int cityc = 0;
    int flightc = 0;

    
    structflight flightstr[MAXF];
    structcity citystr[MAXC];
    
	fscrn();
	startmenu();
	initialize(citystr, &cityc, flightstr, &flightc, 50);
	do
	{
		g = mainmenu();
		if(g == 0)
		{
			if(flightc != 0)
				flightbookingsystem(citystr, cityc, flightstr, flightc);
			
			else
				 {
				 	system("cls");
					santillanairlines(2);
					printf("\n\n\n\n\n\t\t\t\t\t\t\t\tNo flights entered. Press any key to go back to Data Module System . . .\n");
					getch();
					g = 1;
				 }
		}
		
		if(g == 1)
		{
			do{	
				i = dmmenu();
			    switch(i)
				    {
				    	case 0 : addcity(citystr, &cityc); break;
				    	case 1 : deletecity(citystr, &cityc, flightstr, &flightc); break;
				    	case 2 : viewcity(citystr, cityc); break;
				    	case 3 : addflight(flightstr, citystr, &flightc, cityc);break;
				    	case 4 : deleteflight(flightstr, &flightc); break;
				    	case 5 : viewflight(flightstr, flightc); break;
				    	case 6 : search(flightstr, citystr, flightc, cityc); break;
				    	case 7 : files(citystr, &cityc, flightstr, &flightc); break;
					}
			}while(i != 8);
			
		}
		
		if(g == 666)
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tType \"Mag move-on ka na\" kung ayaw mo na talaga\n\t\t\t\t\t\t\t\t\t");
			gets(exitphrase);
			if(strcmp(exitphrase,"Mag move-on ka na") != 0)
				g = 69;
		}	
	}while(g!= 666);
	
	exitmenu();
	return 666;	
	
}
