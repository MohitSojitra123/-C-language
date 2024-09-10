#include <stdio.h>

int main()
{

    int user, car_user, car_book;

    printf("Choose The Any  Option ...\n");
    printf("1 For Car....\n");
    printf("2 For Auto...\n");
    printf("3 For Bike...\n");
    scanf("%d", &user);

    switch (user)
    {
    case 1:
        printf("You Are Choose For Car\n");
        printf("Choose starting Point....And Ending Point....\n");
        printf("1 For Rajkot To Surat\n");
        printf("2 For Rajkot To Gondal\n");
        printf("3 For Rajkot To Ahemdabad\n");
        scanf("%d", &car_user);

        switch (car_user)
        {

        case 1:
            printf("You Are Select  Rajkot To Surat\n");
            printf("Enter 1 Book The Car For Rajkot To Surat....\n");
            printf("Total Price Is..800\n");
            printf("Enter 2 For Cancle Booking...\n");
            scanf("%d", &car_book);

            switch (car_book)
            {
            case 1:
                printf("You Booking Process SucessFully Complete...");
                break;
            case 2:
                printf("You Booking Process Cancle...");
                break;

            default:
                printf("Pleace Enter Valid Input...");
                break;
            }

            break;

        case 2:

            printf("You Are Select  Rajkot To Gondal\n");
            printf("Enter 1 Book The Car For Rajkot To Gondal....\n");
            printf("Total Price Is..700\n");
            printf("Enter 2 For Cancle Booking...\n");
            scanf("%d", &car_book);

            switch (car_book)
            {
            case 1:
                printf("You Booking Process SucessFully Complete...\n");
                break;
            case 2:
                printf("You Booking Process Cancle...\n");
                break;

            default:
                printf("Pleace Enter Valid Input...\n");
                break;
            }

            break;
        case 3:

            printf("You Are Select  Rajkot To Ahemdabad\n");
            printf("Enter 1 Book The Car For Rajkot To Ahemdabad....\n");
            printf("Total Price Is..600\n");
            printf("Enter 2 For Cancle Booking...\n");
            scanf("%d", &car_book);

            switch (car_book)
            {
            case 1:
                printf("You Booking Process SucessFully Complete...\n");
                break;
            case 2:
                printf("You Booking Process Cancle...\n");
                break;

            default:
                printf("Pleace Enter Valid Input...\n");
                break;
            }

            break;

        default:
            printf("Pleace Enter Valid Input...\n");
            break;
        }

        break;

    case 2:
        printf("You Are Choose For Auto\n");
        printf("Choose starting Point....And Ending Point....\n");
        printf("1 For Rajkot To Surat\n");
        printf("2 For Rajkot To Gondal\n");
        printf("3 For Rajkot To Ahemdabad\n");
        scanf("%d", &car_user);

        switch (car_user)
        {

        case 1:
            printf("You Are Select  Rajkot To Surat\n");
            printf("Enter 1 Book The Car For Rajkot To Surat....\n");
            printf("Total Price Is..400\n");
            printf("Enter 2 For Cancle Booking...\n");
            scanf("%d", &car_book);

            switch (car_book)
            {
            case 1:
                printf("You Booking Process SucessFully Complete...");
                break;
            case 2:
                printf("You Booking Process Cancle...");
                break;

            default:
                printf("Pleace Enter Valid Input...");
                break;
            }

            break;

        case 2:

            printf("You Are Select  Rajkot To Gondal\n");
            printf("Enter 1 Book The Car For Rajkot To Gondal....\n");
            printf("Total Price Is..300\n");
            printf("Enter 2 For Cancle Booking...\n");
            scanf("%d", &car_book);

            switch (car_book)
            {
            case 1:
                printf("You Booking Process SucessFully Complete...\n");
                break;
            case 2:
                printf("You Booking Process Cancle...\n");
                break;

            default:
                printf("Pleace Enter Valid Input...\n");
                break;
            }

            break;
        case 3:

            printf("You Are Select  Rajkot To Ahemdabad\n");
            printf("Enter 1 Book The Car For Rajkot To Ahemdabad....\n");
            printf("Total Price Is..200\n");
            printf("Enter 2 For Cancle Booking...\n");
            scanf("%d", &car_book);

            switch (car_book)
            {
            case 1:
                printf("You Booking Process SucessFully Complete...\n");
                break;
            case 2:
                printf("You Booking Process Cancle...\n");
                break;

            default:
                printf("Pleace Enter Valid Input...\n");
                break;
            }

            break;

        default:
            printf("Pleace Enter Valid Input...\n");
            break;
        }

        break;

    case 3:
        printf("You Are Choose For Bike\n");
        printf("Choose starting Point....And Ending Point....\n");
        printf("1 For Rajkot To Surat\n");
        printf("2 For Rajkot To Gondal\n");
        printf("3 For Rajkot To Ahemdabad\n");
        scanf("%d", &car_user);

        switch (car_user)
        {

        case 1:
            printf("You Are Select  Rajkot To Surat\n");
            printf("Enter 1 Book The Car For Rajkot To Surat....\n");
            printf("Total Price Is..500\n");
            printf("Enter 2 For Cancle Booking...\n");
            scanf("%d", &car_book);

            switch (car_book)
            {
            case 1:
                printf("You Booking Process SucessFully Complete...");
                break;
            case 2:
                printf("You Booking Process Cancle...");
                break;

            default:
                printf("Pleace Enter Valid Input...");
                break;
            }

            break;

        case 2:

            printf("You Are Select  Rajkot To Gondal\n");
            printf("Enter 1 Book The Car For Rajkot To Gondal....\n");
            printf("Total Price Is..400\n");
            printf("Enter 2 For Cancle Booking...\n");
            scanf("%d", &car_book);

            switch (car_book)
            {
            case 1:
                printf("You Booking Process SucessFully Complete...\n");
                break;
            case 2:
                printf("You Booking Process Cancle...\n");
                break;

            default:
                printf("Pleace Enter Valid Input...\n");
                break;
            }

            break;
        case 3:

            printf("You Are Select  Rajkot To Ahemdabad\n");
            printf("Enter 1 Book The Car For Rajkot To Ahemdabad....\n");
            printf("Total Price Is..300\n");
            printf("Enter 2 For Cancle Booking...\n");
            scanf("%d", &car_book);

            switch (car_book)
            {
            case 1:
                printf("You Booking Process SucessFully Complete...\n");
                break;
            case 2:
                printf("You Booking Process Cancle...\n");
                break;

            default:
                printf("Pleace Enter Valid Input...\n");
                break;
            }

            break;

        default:
            printf("Pleace Enter Valid Input...\n");
            break;
        }

        break;

    default:
        printf("Pleace Enter Valid Input...");
        break;
    }
}