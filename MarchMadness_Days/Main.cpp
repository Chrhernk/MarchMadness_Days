#include<iostream>
#include<string>
#include<cmath>

void MarchDay1();
void MarchDay2();
void MarchDay3();
void MarchDay4();
void MarchDay5();
void MarchDay6();
void MarchDay7();
void MarchDay8();
void MarchDay9();
void MarchDay10();
void MarchDay11();
void MarchDay12();
void MarchDay13();
void MarchDay14();
void MarchDay15();
void MarchDay16();
void MarchDay17();
void MarchDay18();
void MarchDay19();
void MarchDay20();
void MarchDay21();
void MarchDay22();
void MarchDay23();
void MarchDay24();
void MarchDay25();
void MarchDay26();
void MarchDay27();
void MarchDay28();
void MarchDay29();
void MarchDay30();
void MarchDay31();



int main()
{
	std::cout << "*** Welcome to a new adventure! Today, we will be leading you " << std::endl;
	std::cout << "through the month of march, and its everyday holidays! ***" << std::endl;

	std::cout << "But here, Before we begin, Why dont we go through a few facts of the month!" << std::endl;
	std::cout << "\n\n" << std::endl;
	std::cout << "March is the month named after the roman god, Mars! \n" << std::endl;
	std::cout << "*** The month is the following month-long celebrations! ***\n" << std::endl;
	std::cout << " 1 : Irish American Heritage Month" << std::endl;
	std::cout << " 2 : Music in Our Schools Month" << std::endl;
	std::cout << " 3 : National Celery Month" << std::endl;
	std::cout << " 4 : National Craft Month" << std::endl;
	std::cout << " 5 : National Frozen Food Month" << std::endl;
	std::cout << " 6 : National Nutrition Month" << std::endl;
	std::cout << " 7 : National Peanut Month" << std::endl;
	std::cout << " 8 : National Women's History Month" << std::endl;
	std::cout << " 9 : Red Cross Month" << std::endl;
	std::cout << "10 : Social Workers Month" << std::endl;
	std::cout << "\n\n" << std::endl;

	std::cout << " *** These are the following week-long celebrations! ***\n\n" << std::endl;

	std::cout << "Celebrate Your Name Week - 1 st full week of March" << std::endl;
	std::cout << "2 nd Week National Bubble Week" << std::endl;
	std::cout << "2 nd Week Crochet Week" << std::endl;

	std::cout << "\n\n" << std::endl;

	std::cout << " *** These are all of the facts we have for you! Enjoy your adventure! ***\n" << std::endl;

	system("pause");

	MarchDay1();

	return 0;
}

void MarchDay1()
{
	int Choice;
	std::cout << "You wake up on the first day of march, Groaning as you look over to the calander your sister gave you, It told you all of the holidays people" << std::endl;
	std::cout << "put on the days of the month, and seeing all of them, you decide to choose one to celebrate today.\n" << std::endl;

	std::cout << "1.National Pig Day " << std::endl;
	std::cout << "2.Peace Corps Day " << std::endl;
	std::cout << "3.Peanut Butter Lovers' Day " << std::endl;
	std::cout << "4.Plan a Solo Vacation Day " << std::endl;
	std::cout << "5.World Compliment Day \n" << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-5 :";
	std::cin >> Choice;

	switch(Choice) {
	case 1 :
		std::cout << "You go out to the nearby farm, and help out with the pigs!" << std::endl;
		system("pause");
		MarchDay1();
	case 2 :
		std::cout << "You go to the local Peace Corp Branch, and Volintear for some community service" << std::endl;
		system("pause");
		MarchDay1();
	case 3 :
		std::cout << "You grab a PB&J sandwich" << std::endl;
		system("pause");
		MarchDay1();
	case 4 :
		std::cout << "You plan out a solo vacation today! you think of a nice roadtrip!" << std::endl;
		system("pause");
		MarchDay1();
	case 5 :
		std::cout << "You go through the day, Complimenting everybody you run into, you make them smile!" << std::endl;
		system("pause");
		MarchDay2();
	}
}
void MarchDay2()
{
	int Choice;
	std::cout << "The second day at last!" << std::endl;
	std::cout << "\nJust one holiday today?" << std::endl;

	std::cout << "1.Old Stuff Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-1 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You go out to GoodWill! You find a nice old set of Books" << std::endl;
		system("pause");
		MarchDay3();
	}
}
void MarchDay3()
{
	int Choice;
	std::cout << "Day three, Lets keep going!" << std::endl;
	std::cout << "\nTodays Holidays seem nice!" << std::endl;

	std::cout << "1.Caregiver Appreciation Day " << std::endl;
	std::cout << "2.I Want You to be Happy Day " << std::endl;
	std::cout << "3.If Pets Had Thumbs Day " << std::endl;
	std::cout << "4.National Anthem Day " << std::endl;
	std::cout << "5.Peach Blossom Day \n" << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-5 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You send a letter to your old babysitter, Thanking her for all she did for you" << std::endl;
		system("pause");
		MarchDay3();
	case 2:
		std::cout << "You send your girlfriend a song you wrote for her, Hoping it makes her happier today" << std::endl;
		system("pause");
		MarchDay3();
	case 3:
		std::cout << "You ponder, What if pets had thumbs?" << std::endl;
		system("pause");
		MarchDay3();
	case 4:
		std::cout << "You listen to the National Anthem on loop, Its such a beautiful song" << std::endl;
		system("pause");
		MarchDay3();
	case 5:
		std::cout << "You watch as the peach tree in your garden blossoms" << std::endl;
		system("pause");
		MarchDay4();
	}
}
void MarchDay4()
{
	int Choice;
	std::cout << "Forth day of the month, Nearly through the first week!" << std::endl;
	std::cout << "\nTwo...Strange Holidays today!" << std::endl;

	std::cout << "1.Holy Experiment Day " << std::endl;
	std::cout << "2.Hug a GI Day " << std::endl;
	

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-2 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You look up the Holy Experiment, Seeing what it was?" << std::endl;
		system("pause");
		MarchDay5();
	case 2:
		std::cout << "You hug your grandfather today " << std::endl;
		system("pause");
		MarchDay4();
	}
}
void MarchDay5()
{
	int Choice;
	std::cout << "Five days in! You finally made it through the first week!!!" << std::endl;
	std::cout << "\n Four interesting days today!" << std::endl;

	std::cout << "1.Employee Appreciation Day " << std::endl;
	std::cout << "2.Multiple Personality Day " << std::endl;
	std::cout << "3.National Salesperson Day " << std::endl;
	std::cout << "4.World Day of Prayer  " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-4 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You send an email to your Employees, Thanking them, and givin them the day off, but as a payed day off." << std::endl;
		system("pause");
		MarchDay6();
	case 2:
		std::cout << "You look up Multiple Personality Disorder, and How it efects people" << std::endl;
		system("pause");
		MarchDay5();
	case 3:
		std::cout << "You talk to a few salespeople that come to your door, politely telling them no today." << std::endl;
		system("pause");
		MarchDay5();
	case 4:
		std::cout << "You pray today, pray for peace, and world happiness" << std::endl;
		system("pause");
		MarchDay5();
	}
}
void MarchDay6()
{
	int Choice;
	std::cout << "Sixth day in, So many more to go" << std::endl;
	std::cout << "\n Three interesting holidays today" << std::endl;

	std::cout << "1.Dentist's Day " << std::endl;
	std::cout << "2.National Frozen Food Day " << std::endl;
	std::cout << "3.National Oreo Cookie Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You send an email to your dentists office, as well as a fruit basket to their office." << std::endl;
		system("pause");
		MarchDay6();
	case 2:
		std::cout << "You get a frozen dinner!" << std::endl;
		system("pause");
		MarchDay6();
	case 3:
		std::cout << "You grab a pack of Oreos, Eating them quickly!" << std::endl;
		system("pause");
		MarchDay7();
	}
}
void MarchDay7()
{
	int Choice;
	std::cout << "Seven days in!" << std::endl;
	std::cout << "\n Three more holidays today!" << std::endl;

	std::cout << "1.Namesake Day " << std::endl;
	std::cout << "2.National Cereal Day " << std::endl;
	std::cout << "3.National Crown Roast of Pork Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You find somthing that shares your name" << std::endl;
		system("pause");
		MarchDay8();
	case 2:
		std::cout << "You eat cereal today!" << std::endl;
		system("pause");
		MarchDay7();
	case 3:
		std::cout << "You buy a crown roast for dinner!" << std::endl;
		system("pause");
		MarchDay7();
	}
}
void MarchDay8()
{
	int Choice;
	std::cout << "Eight days, Hopefully th loop ends soon" << std::endl;
	std::cout << "\n Three more" << std::endl;

	std::cout << "1.Be Nasty Day " << std::endl;
	std::cout << "2.International (Working) Women's Day " << std::endl;
	std::cout << "3.National Proofreading Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You decide to be nasty to a few friends, making jokes with them after telling them the holiday" << std::endl;
		system("pause");
		MarchDay8();
	case 2:
		std::cout << "You celebrate your mother, Who was a single working mother" << std::endl;
		system("pause");
		MarchDay8();
	case 3:
		std::cout << "You proofread an essay from your Highschool days, Man, there were so many mistakes..." << std::endl;
		system("pause");
		MarchDay9();
	}
}
void MarchDay9()
{
	int Choice;
	std::cout << "Ninth day, " << std::endl;
	std::cout << "\n Three more!" << std::endl;

	std::cout << "1.Barbie Day " << std::endl;
	std::cout << "2.Get Over It Day " << std::endl;
	std::cout << "3.Panic Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You gift your neice a barbie doll" << std::endl;
		system("pause");
		MarchDay10();
	case 2:
		std::cout << "You decide to go through your old items of clothing, Throwing away anything your exes gave you" << std::endl;
		system("pause");
		MarchDay9();
	case 3:
		std::cout << "You prepare a panic pack, food, clothes, and more!" << std::endl;
		system("pause");
		MarchDay9();
	}
}
void MarchDay10()
{
	int Choice;
	std::cout << "Ten days! The Big one-oh" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.International Day of Awesomeness " << std::endl;
	std::cout << "2.International Find a Pay Phone Booth Day " << std::endl;
	std::cout << "3.Middle Name Pride Day " << std::endl;


	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You celebrate your sister as awesome!" << std::endl;
		system("pause");
		MarchDay10();
	case 2:
		std::cout << "You go out on the town and find a pay phone!" << std::endl;
		system("pause");
		MarchDay11();
	case 3:
		std::cout << "You look up the meaning of your middle name...Interesting!" << std::endl;
		system("pause");
		MarchDay10();
	}
}

void MarchDay11()
{
	int Choice;
	std::cout << "Eleven days!" << std::endl;
	std::cout << "\n Three more holidays!" << std::endl;

	std::cout << "1.Johnny Appleseed Day " << std::endl;
	std::cout << "2.Popcorn Lover's Day " << std::endl;
	std::cout << "3.Worship of Tools Day  " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You read the Johnny Appleseed Folktale to your niece and nephew!" << std::endl;
		system("pause");
		MarchDay11();
	case 2:
		std::cout << "You pop yourself some popcorn!" << std::endl;
		system("pause");
		MarchDay12();
	case 3:
		std::cout << "You make a small shrine of your toolbox, why not?" << std::endl;
		system("pause");
		MarchDay11();
	}
}
void MarchDay12()
{
	int Choice;
	std::cout << "Twelfth day!" << std::endl;
	std::cout << "\n Two holidays today!" << std::endl;

	std::cout << "1.Girl Scouts Day " << std::endl;
	std::cout << "2.Plant a Flower Day " << std::endl;
	

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-2 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You buy some girl scout cookies!" << std::endl;
		system("pause");
		MarchDay12();
	case 2:
		std::cout << "You plant a few flowers in the garden today!" << std::endl;
		system("pause");
		MarchDay13();
	}
}
void MarchDay13()
{
	int Choice;
	std::cout << "Thirteen...Man, How long is this month?" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.Ear Muff Day " << std::endl;
	std::cout << "2.Genealogy Day " << std::endl;
	std::cout << "3.International Fanny Pack Day " << std::endl;
	std::cout << "4.Jewel Day " << std::endl;
	std::cout << "5.Smart & Sexy Day \n" << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-5 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You wear a pair of Ear Muffs....You're hot all day" << std::endl;
		system("pause");
		MarchDay13();
	case 2:
		std::cout << "You look up a few ancstors!" << std::endl;
		system("pause");
		MarchDay13();
	case 3:
		std::cout << "You wear a fanny pack all day! extra storage!!!" << std::endl;
		system("pause");
		MarchDay13();
	case 4:
		std::cout << "You get your Girlfriend a new necklace" << std::endl;
		system("pause");
		MarchDay14();
	case 5:
		std::cout << "You send your girlfriend a new dress, and a few books! Shes always smart and sexy!" << std::endl;
		system("pause");
		MarchDay13();
	}
}
void MarchDay14()
{
	int Choice;
	std::cout << "Fourteen...So many more days" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.Learn about Butterflies Day " << std::endl;
	std::cout << "2.National Potato Chip Day " << std::endl;
	std::cout << "3.National Pi Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You read all about butterflies today!" << std::endl;
		system("pause");
		MarchDay14();
	case 2:
		std::cout << "You eat some Potato chips!" << std::endl;
		system("pause");
		MarchDay14();
	case 3:
		std::cout << "You read through the discoveries of Pi, and try to memorise some!" << std::endl;
		system("pause");
		MarchDay15();
	}
}
void MarchDay15()
{
	int Choice;
	std::cout << "Day Fifteen" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.Buzzards Day " << std::endl;
	std::cout << "2.Dumbstruck Day " << std::endl;
	std::cout << "3.Everything You Think is Wrong Day " << std::endl;
	std::cout << "4.Ides of March " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-4 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You learn about buzzards today!" << std::endl;
		system("pause");
		MarchDay15();
	case 2:
		std::cout << "You arnt sure how to celebrate this one..." << std::endl;
		system("pause");
		MarchDay15();
	case 3:
		std::cout << "You write down everything you think is wrong in the world" << std::endl;
		system("pause");
		MarchDay15();
	case 4:
		std::cout << "You read about the death of Ceaser" << std::endl;
		system("pause");
		MarchDay16();
	}
}
void MarchDay16()
{
	int Choice;
	std::cout << "Day Sixteen of the month" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.Everything You Do is Right Day " << std::endl;
	std::cout << "2.Freedom of Information Day " << std::endl;
	std::cout << "3.Giant Panda Bear Day " << std::endl;
	std::cout << "4.Tea for Two Tuesday  " << std::endl;
	

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-4 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You do everything correct today!" << std::endl;
		system("pause");
		MarchDay16();
	case 2:
		std::cout << "You read about the freedom of information act!" << std::endl;
		system("pause");
		MarchDay17();
	case 3:
		std::cout << "You read about the giant panda!" << std::endl;
		system("pause");
		MarchDay16();
	case 4:
		std::cout << "You and your sister have tea today!" << std::endl;
		system("pause");
		MarchDay16();
	}
}
void MarchDay17()
{
	int Choice;
	std::cout << "Day Seventeen" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.Corned Beef and Cabbage Day " << std::endl;
	std::cout << "2.Submarine Day  " << std::endl;
	std::cout << "3.Saint Patrick's Day " << std::endl;


	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You cook corned beef and cabbage today!" << std::endl;
		system("pause");
		MarchDay17();
	case 2:
		std::cout << "You read about Submarines, how they work, and how expensive they are!" << std::endl;
		system("pause");
		MarchDay17();
	case 3:
		std::cout << "You wear green all day!" << std::endl;
		system("pause");
		MarchDay18();
	}
}
void MarchDay18() 
{
	int Choice;
	std::cout << "Eighteen...Just over Halfway through the month" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.Absolutely Incredible Kid Day " << std::endl;
	std::cout << "2.Awkward Moments Day " << std::endl;
	std::cout << "3.Goddess of Fertility Day " << std::endl;
	std::cout << "4.Supreme Sacrifice Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-4 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You celebrate your niece and nephew!" << std::endl;
		system("pause");
		MarchDay18();
	case 2:
		std::cout << "You celebrate the awkward moments of life" << std::endl;
		system("pause");
		MarchDay18();
	case 3:
		std::cout << "You celebrate the old goddesses of fertility! " << std::endl;
		system("pause");
		MarchDay18();
	case 4:
		std::cout << "You sacrifice your time to help out the neighborhood." << std::endl;
		system("pause");
		MarchDay19();
	}
}
void MarchDay19()
{
	int Choice;
	std::cout << "Nineteen" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.Let's Laugh Day " << std::endl;
	std::cout << "2.Poultry Day " << std::endl;
	

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-2 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You decide to joke around with your friends today!" << std::endl;
		system("pause");
		MarchDay20();
	case 2:
		std::cout << "You cook chicken, and read all about other birds today!" << std::endl;
		system("pause");
		MarchDay19();
	}
}
void MarchDay20()
{
	int Choice;
	std::cout << "Twentyith day" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.International Sports Car Racing Day " << std::endl;
	std::cout << "2.International Earth Day " << std::endl;
	std::cout << "3.International Day of Happiness " << std::endl;
	std::cout << "4.Extraterrestrial Abductions Day " << std::endl;
	std::cout << "5.World Sparrow Day   \n" << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-5 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You watch the Indie-500 recording!" << std::endl;
		system("pause");
		MarchDay20();
	case 2:
		std::cout << "You celebrate the earth! You make sure to recycle more today!" << std::endl;
		system("pause");
		MarchDay20();
	case 3:
		std::cout << "You feel happier today!" << std::endl;
		system("pause");
		MarchDay21();
	case 4:
		std::cout << "You look up some new things about so-said abductions!" << std::endl;
		system("pause");
		MarchDay20();
	case 5:
		std::cout << "You figure out new information about the sparrow!" << std::endl;
		system("pause");
		MarchDay20();
	}
}
void MarchDay21()
{
	int Choice;
	std::cout << "The Twenty-first of March" << std::endl;
	std::cout << "\nMarching even onward!" << std::endl;

	std::cout << "1.Credit Card Reduction Day " << std::endl;
	std::cout << "2.Fragrance Day " << std::endl;
	std::cout << "3.World Poetry Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "Your credit company calls! They dropped your monthly payments by a few dollars!" << std::endl;
		system("pause");
		MarchDay21();
	case 2:
		std::cout << "You decide to try out a new cologne" << std::endl;
		system("pause");
		MarchDay21();
	case 3:
		std::cout << "You write a poem, about a long- lost Love" << std::endl;
		system("pause");
		MarchDay22();
	}
}
void MarchDay22()
{
	int Choice;
	std::cout << "The twenty-second, Nearly there" << std::endl;
	std::cout << "\n What is the Holiday of choice today?" << std::endl;

	std::cout << "1.As Young As You  Feel Day " << std::endl;
	std::cout << "2.National Goof Off Day " << std::endl;


	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-2 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You decide to go to the beach and make a sand castle! Nobody is gonna stop you!" << std::endl;
		system("pause");
		MarchDay22();
	case 2:
		std::cout << "You goof off today, You deserve it!" << std::endl;
		system("pause");
		MarchDay23();
	}
}
void MarchDay23()
{
	int Choice;
	std::cout << "The twenty third!" << std::endl;
	std::cout << "\n one step closer to the end of the month!" << std::endl;

	std::cout << "1.Melba Toast Day " << std::endl;
	std::cout << "2.National Chip and Dip Day " << std::endl;
	std::cout << "3.National / World Agriculture Day " << std::endl;
	std::cout << "4.National Puppy Day " << std::endl;
	std::cout << "5.Near Miss Day \n" << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-5 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You get some Melba toast with some soup!" << std::endl;
		system("pause");
		MarchDay23();
	case 2:
		std::cout << "You get some Chips and dip from the store!" << std::endl;
		system("pause");
		MarchDay23();
	case 3:
		std::cout << "You research farmers, and how they help the world!" << std::endl;
		system("pause");
		MarchDay24();
	case 4:
		std::cout << "You stop by a petco! You see the puppies they have up for adoption, and decide, once youre out of this loop, you're going to get one!" << std::endl;
		system("pause");
		MarchDay23();
	case 5:
		std::cout << "You nearly get hit by a passing bird, That was close!" << std::endl;
		system("pause");
		MarchDay23();
	}
}
void MarchDay24()
{
	int Choice;
	std::cout << "The Twenty-forth" << std::endl;
	std::cout << "\nYoure doing great!" << std::endl;

	std::cout << "1.National Cheesesteak Day " << std::endl;
	std::cout << "2.National Chocolate Covered Raisin Day " << std::endl;


	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-2 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You grab a philly Cheesesteak from the local butchers shop!" << std::endl;
		system("pause");
		MarchDay25();
	case 2:
		std::cout << "You get a pack of chockloate raisins...Weird" << std::endl;
		system("pause");
		MarchDay24();
	}
}
void MarchDay25()
{
	int Choice;
	std::cout << "" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.Feast of the Annunciation " << std::endl;
	std::cout << "2.Pecan Day " << std::endl;
	std::cout << "3.Waffle Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You decide to help out at the nearby homeless shelter, Its a feast, but not for everyone out there." << std::endl;
		system("pause");
		MarchDay25();
	case 2:
		std::cout << "You grab a slice of pecan pie after going out!" << std::endl;
		system("pause");
		MarchDay25();
	case 3:
		std::cout << "You grab waffles for breakfast, its a good morning!" << std::endl;
		system("pause");
		MarchDay26();
	}
}
void MarchDay26()
{
	int Choice;
	std::cout << "Twenty-six days in..." << std::endl;
	std::cout << "\nWhat is todays Holiday of choice?" << std::endl;

	std::cout << "1.Live Long and Prosper Day " << std::endl;
	std::cout << "2.Make Up Your Own Holiday Day " << std::endl;
	std::cout << "3.National Spinach Day " << std::endl;
	

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-3 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You watch the Star Trek Movies, They bring back some good memories!" << std::endl;
		system("pause");
		MarchDay27();
	case 2:
		std::cout << "You decide to name a holiday after your mother! A holiday all about family, and baking!" << std::endl;
		system("pause");
		MarchDay26();
	case 3:
		std::cout << "You put spinach on your pizza! It was a good addition to the day" << std::endl;
		system("pause");
		MarchDay26();
	}
}
void MarchDay27()
{
	int Choice;
	std::cout << "" << std::endl;
	std::cout << "\n" << std::endl;

	std::cout << "1.National Joe Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-1 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You decide to call up you'r friend, Joe! Hes grateful for the call, work has been hard on him." << std::endl;
		system("pause");
		MarchDay28();
	}
}
void MarchDay28()
{
	int Choice;
	std::cout << "You're almost there" << std::endl;
	std::cout << "\n What's todays holiday?" << std::endl;

	std::cout << "1.Something on a Stick Day " << std::endl;
	std::cout << "2.Weed Appreciation Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-2 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << " You get a corndog for lunch! " << std::endl;
		system("pause");
		MarchDay28();
	case 2:
		std::cout << "You go to your garden, picking a few weeds before putting them in the Composter!" << std::endl;
		system("pause");
		MarchDay29();
	}
}
void MarchDay29()
{
	int Choice;
	std::cout << "Three days to go! Yoube got this" << std::endl;
	std::cout << "\n What is todays poison?" << std::endl;

	std::cout << "1.National Mom and Pop Business Owners Day " << std::endl;
	std::cout << "2.Smoke and Mirrors Day " << std::endl;
	

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-2 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You stop by the local candy shop on your way to see your sister!" << std::endl;
		system("pause");
		MarchDay29();
	case 2:
		std::cout << "You go to a local magicians show, it was a fun time!" << std::endl;
		system("pause");
		MarchDay30();
	}
}
void MarchDay30()
{
	int Choice;
	std::cout << "Two days Left" << std::endl;
	std::cout << "\n Pick todays Poison" << std::endl;

	std::cout << "1.I am in Control Day " << std::endl;
	std::cout << "2.National Doctor's Day " << std::endl;
	std::cout << "3.Take a Walk in the Park Day " << std::endl;
	std::cout << "4.Turkey Neck Soup Day " << std::endl;
	

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-4 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You tell yourself you're in control of the weird...Loop youre in" << std::endl;
		system("pause");
		MarchDay30();
	case 2:
		std::cout << "You decide to send a thank-you to your doctor!" << std::endl;
		system("pause");
		MarchDay30();
	case 3:
		std::cout << "You go on a walk in the nearby park, It was a nice day today" << std::endl;
		system("pause");
		MarchDay31();
	case 4:
		std::cout << "You get an online order of Turky neck soup...It was a strange thing to eat." << std::endl;
		system("pause");
		MarchDay30();
	}
}
void MarchDay31()
{
	int Choice;
	std::cout << "Finally, the last morning of March" << std::endl;
	std::cout << "\n What Holiday are you celebrating today?" << std::endl;

	std::cout << "1.Bunsen Burner Day " << std::endl;
	std::cout << "2.National Clam on the Half Shell Day " << std::endl;
	std::cout << "3.National Crayon Day " << std::endl;
	std::cout << "4.World Backup Day " << std::endl;

	std::cout << "Which would you like to choose?" << std::endl;
	std::cout << ": Choose 1-4 :";
	std::cin >> Choice;

	switch (Choice) {
	case 1:
		std::cout << "You order a Bunsen Burner Online! It could be fun to make somthing with." << std::endl;
		system("pause");
		MarchDay31();
	case 2:
		std::cout << "You go to a seafood resturaunt and get some clams!" << std::endl;
		system("pause");
		MarchDay31();
	case 3:
		std::cout << "You decide to go to your sisters, and hand out with your nephew today" << std::endl;
		system("pause");
		MarchDay31();
	case 4:
		std::cout << "You backup your computer, Hopefully this is your last day this month" << std::endl;
		system("pause");
		std::cout << "Congrats! You made it through the month of March!!" << std::endl;
		system("exit");
	}
}