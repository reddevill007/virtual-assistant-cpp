#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <ctime>   // for date and time
#include <cstdlib> // for system pause

using namespace std;

void speak(string s);
void typing(string s);
void wishme();
void datetime();
int snakewatergun(char you, char comp);
void sum();
void product();
void sub();
void div();
void remainder();
void square();
void cube();
void cos();
void sin();
void tan();
void cosh();
void sinh();
void tanh();
void acos();
void asin();
void atan();
void exp();
void log();
void log10();
void atan2();
void pow();
void calc();
void searchQuery(char ch[]);
void takeCommand();
void password(char password[]);
void intro();


int main()
{
    intro();

    char pass[20]; // password
    password(pass);

    return 0;
}

void intro()
{
    system("cls");

    cout << "\t\t\t<============================= W E L C O M E=============================>" << endl;
    cout << "\t\t\t<============================= I'M VIRTUAL ASSISTANT =============================>" << endl;
    cout << "\t\t\t<============================= MY NAME IS INERTIA =============================>" << endl;
    cout << "\t\t\t<============================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =============================>" << endl
         << endl;
}

// Speak function
void speak(string s)
{
    string command = "espeak \"" + s + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
}

// Typing Effect
void typing(string s)
{
    int x = 0;
    while (s[x] != '\0')
    {
        cout << s[x];
        Sleep(100);
        x++;
    };
    cout << endl;
}

// Wishing user according to time
void wishme()
{
    // current date/time based on current system
    time_t now = time(0);
    tm *time = localtime(&now);
    if (time->tm_hour < 12)
    {
        cout << "Good Morning Boss" << endl;
        string phrase = "Good Morning boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour >= 12 && time->tm_hour < 16)
    {
        cout << "Good afternoon Boss" << endl;
        string phrase = "Good Afternoon boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour >= 16 && time->tm_hour < 24)
    {
        cout << "Good evening Boss" << endl;
        string phrase = "Good evening boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

// datetime function
void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    // string time = dt;
    cout << "The date and time is" << endl
         << dt << endl;
}

// Game function
int snakewatergun(char you, char comp)
{
    // return 1 if you win, -1 if you loose and 0 if draw
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

void sum()
{
    int a, b, sum;
    cout << "\nenter the first number\n";
    cin >> a;
    cout << "\nenter the second number\n";
    cin >> b;
    sum = a + b;
    cout << "sum is ===> " << sum << endl;
}

void product()
{
    int a, b, product;
    cout << "\nenter the first number\n";
    cin >> a;
    cout << "\nenter the second number\n";
    cin >> b;
    product = a * b;
    cout << "product is ===> " << product << endl;
}

void sub()
{
    int a, b, sub;
    cout << "\nenter the first number\n";
    cin >> a;
    cout << "\nenter the second number\n";
    cin >> b;
    sub = a - b;
    cout << "subtraction is ===> " << sub << endl;
}

void div()
{
    int a, b, div;
    cout << "\nenter the first number\n";
    cin >> a;
    cout << "\nenter the second number\n";
    cin >> b;
    div = a / b;
    cout << "division is ===> " << div << endl;
}
void remainder()
{
    int a, b, remainder;
    cout << "\nenter the first number\n";
    cin >> a;
    cout << "\nenter the second number\n";
    cin >> b;
    remainder = a * b;
    cout << "remainder is ===> " << remainder << endl;
}

void square()
{
    int a, square;
    cout << "\nenter the number\n";
    cin >> a;
    square = a * a;
    cout << "square is ===> " << square << endl;
}

void cube()
{
    int a, cube;
    cout << "\nenter the number\n";
    cin >> a;
    cube = a * a * a;
    cout << "cube is ===> " << cube << endl;
}

void cos()
{
    double a, result, PI = 3.14159265;
    cout << "\nenter the angle\n";
    cin >> a;
    result = cos(a * PI / 180);
    cout << "the cosine of " << a << " is ===> " << result << endl;
}

void sin()
{
    double a, result, PI = 3.14159265;
    cout << "\nenter the angle\n";
    cin >> a;
    result = sin(a * PI / 180);
    cout << "the sine of " << a << " is ===> " << result << endl;
}

void tan()
{
    double a, result, PI = 3.14159265;
    cout << "\nenter the angle\n";
    cin >> a;
    result = tan(a * PI / 180);
    cout << "the tan of the " << a << " is ===> " << result << endl;
}

void cosh()
{
    double a, result, PI = 3.14159265;
    cout << "\nenter the angle\n";
    cin >> a;
    result = cosh(a);
    cout << "the hyperbolic cosine of " << a << " is ===> " << result << endl;
}

void sinh()
{
    double a, result, PI = 3.14159265;
    cout << "\nenter the angle\n";
    cin >> a;
    result = sinh(a);
    cout << "the hyperbolic sine of " << a << " is ===> " << result << endl;
}

void tanh()
{
    double a, result, PI = 3.14159265;
    cout << "\nenter the angle\n";
    cin >> a;
    result = tanh(a);
    cout << "The hyperbolic tangent of " << a << " is ===> " << result << endl;
}

void acos()
{
    double a, result, PI = 3.14159265;
    cout << "\nenter the angle\n";
    cin >> a;
    result = acos(a) * 180.0 / PI;
    cout << "The arc cosine of " << a << " is ===> " << result << endl;
}

void asin()
{
    double a, result, PI = 3.14159265;
    cout << "\nenter the angle\n";
    cin >> a;
    result = asin(a) * 180.0 / PI;
    cout << "The arc sine of " << a << " is ===> " << result << endl;
}

void atan()
{
    double a, result, PI = 3.14159265;
    cout << "\nenter the angle\n";
    cin >> a;
    result = atan(a) * 180.0 / PI;
    cout << "The arc tangential of " << a << " is ===> " << result << endl;
}


void exp()
{
    double a, result;
    cout << "\nenter the number\n";
    cin >> a;
    result = exp(a);
    cout << "The exponential value of " << a << " is ===> " << result << endl;
}

void log()
{
    double a, result;
    cout << "\nenter the value to take a log \n";
    cin >> a;
    result = log(a);
    cout << "The logarithm of " << a << " is ===> " << result << endl;
}

void log10()
{
    double a, result;
    cout << "\nenter the value to take a log \n";
    cin >> a;
    result = log10(a);
    cout << "The common logarithm of " << a << " is ===> " << result << endl;
}

void atan2()
{
    float a, b, result, PI = 3.14;
    cout << "\nenter the first number\n";
    cin >> a;
    cout << "\nenter second the number\n";
    cin >> b;
    result = atan2(a, b) * 180 / PI;
    cout << "The arc tangent for " << a << " and " << b << " is ===> " << result << endl;
}

void pow()
{
    int a, b, power;
    cout << "\nenter the number\n";
    cin >> a;
    cout << "\nenter the power\n";
    cin >> b;
    power = pow(a, b);
    cout << "\n"
         << a << " raise to power " << b << " is  ===> " << (a ^ b);
}

void calc()
{
    while (1)
    {
        char calcThis[10];

        string phrase2 = "please pick your choice";
        string command2 = "espeak \"" + phrase2 + "\"";
        const char *charCommand2 = command2.c_str();
        system(charCommand2);

        cout << "Your Choice ===> ";
        gets(calcThis);

        if (strcmp(calcThis, "1") == 0)
        {
            sum();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "2") == 0)
        {
            product();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "3") == 0)
        {
            sub();
            cout << "\n<================================================================================================>\n\n";
        }
        if (strcmp(calcThis, "4") == 0)
        {
            div();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "5") == 0)
        {
            remainder();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "6") == 0)
        {
            square();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "7") == 0)
        {
            cube();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "8") == 0)
        {
            cos();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "9") == 0)
        {
            sin();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "10") == 0)
        {
            tan();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "11") == 0)
        {
            cosh();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "12") == 0)
        {
            sinh();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "13") == 0)
        {
            tanh();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "14") == 0)
        {
            acos();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "15") == 0)
        {
            asin();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "16") == 0)
        {
            atan();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "17") == 0)
        {
            exp();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "18") == 0)
        {
            log();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "19") == 0)
        {
            log10();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "20") == 0)
        {
            atan2();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "21") == 0)
        {
            pow();
            cout << "\n<================================================================================================>\n\n";
        }
        else if (strcmp(calcThis, "22") == 0)
        {
            break;
        }
        else
        {
            cout << "\nInvalid Choice\n"
                 << endl;
            string phrase = "invalid Choice";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            cout << "\n<================================================================================================>\n\n";
        }
    }
}

void searchQuery(char ch[])
{
    if (strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 || strcmp(ch, "hiii") == 0)
    {
        cout << "Hello Boss...." << endl;
        speak("hello boss");
    }

    else if (strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0)
    {
        cout << "Good Bye sir, have a nice day!!!!" << endl;
        speak("Good Bye sir, have a nice day");
        exit(0);
    }

    else if (strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0)
    {
        cout << "I'm Inertia a virtual assistant created by Saurabh" << endl;
        speak("I'm Inertia a virtual assistant created by Saurabh");
    }

    else if (strcmp(ch, "how are you") == 0 || strcmp(ch, "whats up") == 0)
    {
        cout << "I'm good sir tell me how can i help you" << endl;
        speak("I'm good sir tell me how can i help you");
    }

    else if (strcmp(ch, "what are your features") == 0 || strcmp(ch, "features") == 0)
    {
        cout << "Here is the list of my features" << endl;
        speak("Here is the list of my features");
        cout << "1) I can talk" << endl;
        cout << "2) I can open you apps" << endl;
        cout << "3) I can wish according to time" << endl;
        cout << "4) I can surf web for you" << endl;
        cout << "5) We can play games together" << endl;
        cout << "6) I can do your calculation" << endl;
    }

    else if (strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0)
    {
        speak("The date and time is");
        datetime();
    }
    else if (strcmp(ch, "open notepad") == 0)
    {
        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};
        cout << "Opening Notepad....." << endl
             << endl;
        speak("Opening Notepad");

        CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
        cout << endl;
        speak("Successfully Opened notepad, press any key to continue");
        system("pause");
    }

    else if (strcmp(ch, "open google") == 0)
    {
        string url = "start https://www.google.com/search?q=";
        string str;

        cout << endl
             << endl
             << "What Should i Search ===> ";
        speak("What Should i Search");
        getline(cin, str);

        url += str;

        speak("opening " + str + "on google");
        system(string(url).c_str());
        system("pause");
    }

    else if (strcmp(ch, "open youtube") == 0)
    {
        string url = "start https://www.youtube.com/results?search_query=";
        string str;

        cout << endl
             << endl
             << "What Should i Search ===> ";
        speak("What Should i Search");

        url += str;

        speak("opening " + str + "on youtube");
        system(string(url).c_str());
        system("pause");
    }

    else if (strcmp(ch, "open instagram") == 0)
    {
        system("start http://www.instagram.com");
        cout << "Successfully Opened instagram" << endl
             << endl;
        speak("Successfully Opened instagram press any key to continue");
        cout << endl;
        system("pause");
    }

    else if (strcmp(ch, "play game") == 0 || strcmp(ch, "game") == 0)
    {
        while (1)
        {
            srand(time(0));
            int number = rand() % 100 + 1;
            char you, comp;

            if (number < 33)
            {
                comp = 's';
            }
            if (number > 33 && number < 66)
            {
                comp = 'w';
            }
            if (number > 66)
            {
                comp = 'g';
            }

            cout << "Please pick your choice\n";
            speak("Please pick your choice");
            cout << "1). s for snake\n";
            cout << "1). w for water\n";
            cout << "1). g for gun\n";
            cout << "1). x for stop\n"
                 << endl;
            cout << "Your choice ===> ";
            cin >> you;
            cout << endl;

            int result = snakewatergun(you, comp);

            cout << "You choose " << you << " and computer choosed " << comp << endl
                 << endl;
            cout << "Result ===> ";
            if (result == 0)
            {
                cout << "GAME DRAW!!!!\n"
                     << endl;
                speak("Game draw");
            }
            else if (result == 1)
            {
                cout << "CONGRATULATIONS YOU WON!!!!\n"
                     << endl;
                speak("CONGRATULATIONS YOU WON");
            }
            else if (result == -1)
            {
                cout << "YOU LOST!!! BETTER LUCK NEXT TIME....\n"
                     << endl;
                speak("you lost, better luck next time");
            }
            else if (you != 's' && you != 'w' && you != 'g' && you != 'x')
            {
                cout << "INVALI CHOICE PLEASE TRY AGAIN\n"
                     << endl;
                speak("invalid choice please try again");
            }
            else if (you == 'x')
            {
                cout << "Exiting the game\n"
                     << endl;
                speak("exiting the game");
                break;
            }
        }
    }

    else if (strcmp(ch, "calculator") == 0 || strcmp(ch, "calculate") == 0)
    {

        speak("Welcome to my calculator");

        cout << "\n**********************************************************************************************************\n";
        cout << "*******************                   Welcome To My Calculator                        ********************\n";
        cout << "**********************************************************************************************************\n\n";

        cout << "===========================\n";
        cout << "| Please pick your choice |\n";
        cout << "===========================\n";
        cout << "1 for addition                                         11 for hyperbolic tangent\n";
        cout << "2 for multiplication                                   12 for hyperbolic cosine\n";
        cout << "3 for division                                         13 for hyperbolic sine\n";
        cout << "4 for subtraction                                      14 for arc cosine\n";
        cout << "5 for remainder                                        15 for arc sine\n";
        cout << "6 for square                                           16 for arc tangential\n";
        cout << "7 for cube                                             17 for exponent\n";
        cout << "8 for cosine                                           18 for logarithm\n";
        cout << "9 for sine                                             19 for common logarithm i.e log10\n";
        cout << "10 for tangent                                         20 for atan2\n";
        cout << "21 for power                                           22 for exit\n";
        cout << "\n**********************************************************************************************************\n\n";

        calc();
    }
    
    else
    {
        cout << "sorry could not understand speak again" << endl;
        speak("sorry could not understand speak again");
    }
}


void password(char password[])
{
    do
    {
        cout << "=======================" << endl;
        cout << "| Enter Your Password |" << endl;
        cout << "=======================" << endl
             << endl;

        speak("enter your password");

        gets(password);
        cout << "\n<================================================================================================>\n\n";
        if (strcmp(password, "inertia") == 0)
        {

            wishme();
            cout << "\n<================================================================================================>\n\n";
            cout << endl
                 << "How can i help you boss...." << endl
                 << endl;
            speak("how can i help you boss");
            cout << "Your query ===> ";
            takeCommand();
        }
        else
        {

            intro();
            cout << "======================" << endl;
            cout << "X Incorrect Password X" << endl;
            cout << "======================" << endl
                 << endl;
            speak("incorrect password please try again");
        }
    } while (1);
}

void takeCommand()
{
    char ch[100]; //take input for user

    do
    {

        gets(ch); // Takes input and also reads space
        cout << endl;
        cout << "here is the result for your query ===> ";

        searchQuery(ch);

        cout << "\n<================================================================================================>\n\n";
        cout << endl
             << "Anything else Boss...." << endl
             << endl;
        speak("Anything else Boss");
        cout << "Your query ===> ";

    } while (1);
}
