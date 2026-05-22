#include <stdio.h>
#include <ctype.h>
int main(void) {
    char menuChoice;
    printf("What would you like to order? \n a)Starter \tb)Mains \tc)Desserts \td)Drinks\n");
    fflush(stdin);
    scanf("%c",&menuChoice);
    switch (toupper(menuChoice)) {
        case 'A': {
            char starterChoice;
            printf("What starter would you like to choose? \n a)Garlic bread \t b)Chips \t c)Onion rings \t d)Mini salad \t e)Mozzarella sticks\n");
            fflush(stdin);
            scanf("%c",&starterChoice);
            switch (toupper(starterChoice)) {
                case 'A': {
                    printf("Tasty slices of baguette slathered with garlic butter");
                    break;
                }
                case 'B': {
                    printf("Thick and salty cuboids made of lovingly grown potatoes");
                    break;
                }
                case'C': {
                    printf("Onion slices covered in a crispy batter");
                    break;
                }
                case 'D': {
                    printf("A small salad made up of local greens and vegetables");
                    break;
                }
                case 'E': {
                    printf("Mozzarella sticks melted in a crispy batter");
                    break;
                }
                default: {
                    printf("Please enter a valid option");
                    break;
                }
            }
            break;
        }
        case 'B': {
            char mainChoice;
            printf("What main would you like?:\n a)Salad \tb)Cheeseburger \tc)Wrap \td)Steak \te)Battered cod\n");
            fflush(stdin);
            scanf("%c",&mainChoice);
            switch (toupper(mainChoice)) {
                case 'A': {
                    printf("A collection of selected greens and veg mixed with our home dressing");
                    break;
                }
                case 'B': {
                    printf("A burger filled with cheese from a local cow and a patty made from the same one");
                    break;
                }
                case 'C': {
                    printf("A house wrap that changes every day");
                    break;
                }
                case 'D': {
                    printf("A steak from a local butchers cooked based on your request");
                    break;
                }
                case 'E': {
                    printf("A cod that's been caught within the day and battered with our home recipe");
                    break;
                }
                default: {
                    printf("Please enter a valid option");
                    break;
                }
                    break;
            }
            break;
        }
        case 'C': {
            char dessertChoice;
            printf("What dessert would you like?\na)Banoffee pie\tb)Cheesecake\tc)Ice cream\td)Sticky toffee pudding\te)Chocolate cake\n");
            fflush(stdin);
            scanf("%c",&dessertChoice);
            switch (toupper(dessertChoice)) {
                case 'A': {
                    printf("A home cooked banoffee pie with local bananas");
                    break;
                }
                case 'B': {
                    printf("Our family recipe cheesecake");
                    break;
                }
                case 'C': {
                    printf("Your choice from our selection ice creams");
                    break;
                }
                case 'D': {
                    printf("Our famous STP!");
                    break;
                }
                case 'E': {
                    printf("Our family recipe chocolate cake");
                    break;
                }
                default: {
                    printf("Please enter a valid option");
                    break;
                }
            }
            break;
        }
        case 'D': {
            char drinkChoice;
            printf("What drink would you like?\na)Cola\tb)Lemonade\tc)Water\td)Tea\te)Coffee\n");
            fflush(stdin);
            scanf("%c",&drinkChoice);
            switch (toupper(drinkChoice)) {
                case 'A': {
                    printf("A standard Cola");
                    break;
                }
                case'B': {
                    printf("Our homemade lemonade");
                    break;
                }
                case 'C': {
                    printf("Tap water");
                    break;
                }
                case 'D': {
                    printf("A choice of our selection of teas");
                    break;
                }
                case 'E': {
                    printf("A coffee made from locally sourced coffee beans");
                    break;
                }
                default: {
                    printf("Please enter a valid option");
                    break;
                }
            }
            break;
        }
        default: {
            printf("Please enter a valid option");
            break;
        }
    }
    return 0;
}