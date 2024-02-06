 #include<iostream>
#include<ctime>
#include <stdlib.h>
using namespace std;

class bank
{
public:
  int reply;
  int ans;
  int pop;
  int pin=1130;
  long long balance =525000;
  int enteredpin;
  
  void wellcome();
  void insertcard();
  void warning();
  void language();
  void iamnotrobot();
  void enterpin();
  void menu();
  void pingeneration();
  void mobileverify();
  string otpgenerator();
  void mobilepage();
  void banking();
  string pinchange();
  void newpin();
  void repin();
  void balanceinquiry();
  void process();
  void balis();
  void deposit();
};
 void bank::wellcome()
  {
    //cout<<"\n\n\n\n\n\n\n\t\t\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc";
    cout<<"\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2          |==========================================|          \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2          |             WELCOME TO S.B.I. ATM        |          \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2          |==========================================|          \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
  }
  
      void bank::insertcard()
      {
    cout<<"\n\t\t\xb2\xb2                    PLEASE INSERT YOUR CARD                     \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2            -------------------------------------------         \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2            |          PRESS 1 FOE INSTERT THE CARD   |         \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2            |          PRESS 2 FOR HELP               |         \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2            -------------------------------------------         \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                PLEASE ENTER YOUR CHOICE :-                     \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
       
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t                                       :- ";
        cin>>reply;
        
        if (reply==1)
        {
          system("cls");
          wellcome(); 
          warning();
          sleep(3);
          system("cls");
          
        }
        else
        {
          
    }
     
  }
  void bank::warning()
  {
 //     cout<<"\n\t\t\xb2\xb2                                                                    \xb2\xb2";
 //     cout<<"\n\t\t\xb2\xb2  1.DOMESTIC                                        2.INTERNATIONAL \xb2\xb2";
 //     cout<<"\n\t\t\xb2\xb2                                                                    \xb2\xb2";
  // cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2           HI! PLEASE DO NOT REMOVE YOUR CHIP CARD.             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                LEAVE YOUR CARD INSERTED DURING                 \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                      THE ENTIRE TRANSACTION.                   \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        
  }

void bank::language()
  {
    //sleep(3);
    system("cls");
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                PLEASE SELECT LANGUAGE                          \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | 1. ENGLISH |  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |1. HINDI    |  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | 1. GUJARATI|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\t\t ANSWER ;- ";
      cin>>ans;
      if (ans==1)
      {
        system("cls");
        iamnotrobot();
      }
  }
 
  void bank::iamnotrobot()
  {
    int NUMBER;
    int responce;
      cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                 ENTER ANY NUMBER BETWEEN 10 AND 99             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                           FOR E.X.'25'                         \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | 1. YES     |  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | 2. NO      |  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |------------|  \xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
      cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\t ENTER NUMBER :- ";
    cin>>NUMBER;
    cout<<"\n\t\t\t YES OR NO    :- ";
    cin>>responce;
    if (responce==1)
    {
      system("cls");
      enterpin();
    }
  }
void bank::enterpin()
{
  int png;
  static int pin=3011;
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2   PRESS 1              PLEASE ENTER YOUR PIN                   \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               ---------------------------------------          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     7     |     8       |     9     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     6     |     5       |     4     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     3     |     2       |     1     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |           |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |    0      |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |-----------|                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-----------------| \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |2. PIN GENERATION| \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-----------------| \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t PLEASE ENTER NUMBER :- ";
    cin>>png;
    switch(png)
       {
      case 1 : cout<<"\n\t\t\t\t\t ENTER PIN ;-   ";
                cin>>enteredpin;
               
               if (enteredpin==pin)
               {
                system("cls");
                 menu();
               }
               else
               {
                system("cls");
                cout<<"\n\n\t\tTRANSACTION FAILED,SORRY YOU HAVE ENTERED INVAILD ATM PIN ";
               }
              break; 
       case 2 : system("cls");
            pingeneration();
              break;
       default : cout<<"\n\n\t\t INVAILD INPUT PLEASE TRY AGAIN ";
                 cout<<"\n\n\t\t PRESS ANY  KEY FOR GO TO PREVIOUS PAGE ";
        }
    
     
   
}
   void bank::menu()
   {
  int select;
 cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                   PLEASE CHOOSE 'BANKING' FOR                  \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                         CASH  WITHDRAW                         \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  | 1.REGISTRATION |                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                     --------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                         |   5. BANKING     |   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                     --------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  |2.MINI STATEMENT|                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                         --------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                     | 6.BALANCE INQUIRY|   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  | 3.  SERVICES   |                      -------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                     --------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  | 4. QUICK CASH  |                     |  7.   TRANSFER   |   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                     --------------------   \xb2\xb2";
  cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
     cout<<"\n\n\t\t\t\t ENTER CHOICE :- ";
     cin>>select;
     switch(select)
     {
     	case 1:
     		break;
     	case 2:
     		break;
     	case 3:
     		break;
     	case 4:
     		break;
     	case 5:system("cls");
		       banking();
     		break;
     	case 6:system("cls");
              	balanceinquiry();
     		break;
     	case 7:
     		break;
	 }
   }
   void bank::pingeneration()
    {
        double accno;
        int correct;
        cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                    PLEASE ENTER TO YOUR ACCOUNT NUMBER                    \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
       cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2                             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2   ";cin>>accno;cout<<"                \xb2\xb2            \xb2\xb2                                                             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2                             \xb2\xb2";   
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |-------------------|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | PRESS 1 IF CORRECT|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |-------------------|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";  
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  |------------------------|  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  | press 2 if not correct |  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  |------------------------|  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\n\t\t ENTER RESPONCE :- ";
        cin>>correct;
        if (correct==1)
        {
        	system("cls");
          mobileverify();
        }
        else
        {
        	system("cls");
        	mobileverify();
		}
   }
    
   void bank::mobileverify()
   {
    long long vrfy;
    int crt;
    long int number = rand() % 9000 + 1000;
     cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                    ENTER 10 DIGITS MOBILE NUMBER                          \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
       cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2                             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2   ";cin>>vrfy;cout<<"                \xb2\xb2            \xb2\xb2                                                             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2            \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2                             \xb2\xb2";   
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |-------------------|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   | PRESS 1 IF CORRECT|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2   |-------------------|      \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";  
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  |------------------------|  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  | press 2 if not correct |  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2  |------------------------|  \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                           \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\n\t\t ENTER RESPONCEN:- ";
        cin>>crt; 
        if(crt==1)
        {
        	system("cls");
        	mobilepage();
        	sleep(3);
        	system("cls");
        	otpgenerator();
        	sleep(3);
        	system("cls");
        	menu();
		}
		else
		{
			mobileverify();
		}

       
    
}


 string bank ::otpgenerator() // Generating OTP 
{
		int n=4;
       
	string str = "0123456789";
    int len = str.length();
 	string otp;
    int j;
    srand(time(0));
	for(int i=1;i<=n;i++)
    {
	   int j = rand()%len;
       otp[i]=str[j];
	}
		time_t now = time(0);
            char* currentTime = ctime(&now);
			system("Color 1E");
		  cout<<"\n\n\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";	     
		  cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2                SBIATM                       \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";                 
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	
		  cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2  |---------------------------------------|  \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2  |                                       |  \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2  |  BE AWARE! DO NOT SHARE THIS          |  \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2  |  MESSEGE.YOUR ONE TIME PIN IS ";
    for(int i=1;i<=n;i++)
    {
       cout<<otp[i];
	}
	       cout<<"\n\t\t\t\t\xb2\xb2  |  SET YOUR NEW PIN AT ANY STATE        |  \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2  |  BANK ATM WITHIN 24HRS(BANKING-PIN)   |  \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2  |  CHANGE.(ONLY VAILID FOR 30 SECONDS)  |  \xb2\xb2";
           cout<<"\n\t\t\t\t\xb2\xb2  |                                       |  \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2  |---------------------------------------|  \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	       cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	      cout<<"\n\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";	     
		 
	
//	cout<<"\n\nOTP will expire in 5 seconds....."<<endl;
//    sleep(5);
//	cout<<"Oops OTP is expired !!\n\n";
//    int choice;
//	cout<<"press 1 for new OTP generation"<<endl;
//	cout<<"press 2 for exit \n\n";
//	cin>>choice;
//	
//	switch(choice)
//	{
//		case 1: system("CLS");
//		        cout<<"New OTP : "<<otpgenerator().c_str()<<endl;
//		        sleep(5);
//		        break;
//		case 2: exit(0);
//		        break;
//	}
  
}


 void bank::mobilepage()
 {
			time_t now = time(0);
            char* currentTime = ctime(&now);
			system("Color 1E");
		 cout<<"\n\n\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";	     
		 cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2           ";cout<<currentTime;cout<<"t";
		 cout<<"                 \t\t\xb2\xb2";
		 cout<<"\t\t\t\t\t       \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2        THIS IS YOUR MOBILE SCREEN           \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2       WAIT 3 SECONDS FOR SEE THE OTP        \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2    ^====>>  ====>>  ====>>  ====>>  ====>>  \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2                                             \xb2\xb2";
	     cout<<"\n\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";	     
	              
		
		
   }  
  

void bank::banking()
{
int select;
 cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                   PLEASE CHOOSE 'BANKING' FOR                  \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                         CASH  WITHDRAW                         \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  | 1.REGISTRATION |                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                    ---------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                        |  5. DEPOSIT CASH  |   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                     --------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  |2.  TRANSFER    |                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                         --------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                     | 6.BALANCE INQUIRY|   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  | 3.  SERVICES   |                      -------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                                            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                     --------------------   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  | 4.    OTHER    |                     |  7. PIN CHANGE   |   \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2  ------------------                     --------------------   \xb2\xb2";
  cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
     cout<<"\n\n\t\t\t\t ENTER CHOICE :- ";
     cin>>select;
     switch(select)
     {
     	case 1 :
     		break;
     	case 2 :
     		break;
     	case 3 :
     		break;
     	case 4 :
     		break;
        case 5 :system("cls");
               deposit();
            break;
     	case 6 :system("cls");
     	        balanceinquiry();
     	   break;
     	case 7 :system("cls");
		       pinchange();
     	   break;
	 }
     
}
string bank::pinchange()
{
	int verify;
	int ok;
	 int i;
	 string str = "0123456789";
    int len = str.length();
 	string otp;
    int j;
    srand(time(0));
	for(int i=1;i<=4;i++)
    {
	   int j = rand()%len;
       otp[i]=str[j];
	}
    for(int i=1;i<=4;i++)
    {
    	cout<<otp[i];
	}
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                PLEASE ENTER YOUR TEMPORARY PIN                 \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               ---------------------------------------          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     7     |     8       |     9     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     6     |     5       |     4     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     3     |     2       |     1     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |           |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |    0      |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |-----------|                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-------------|     \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |  1.  OK     |     \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-------------|     \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\t\t\t\tENTER OTP :- ";
   cin>>verify;
   if(otp[i]=verify)
   {
   	
   	cout<<"\n\n\t\t otp is verified";
   	cout<<"\n\n\t\t PRESS 1. IF CORRECT :- ";
   	cin>>ok;
   	system("cls");
   	newpin();
   }
	else
	{
		system("cls");
		cout<<"\n\n\t\t TRANSACTION IS FAILED ,PLEASE TAKE YOUR CARD,";
		exit(0);
	}
	
}
void bank::newpin()
{
	int npin;
	int ok;
	cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                      PLEASE ENTER NEW PIN                      \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               ---------------------------------------          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     7     |     8       |     9     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     6     |     5       |     4     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     3     |     2       |     1     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |           |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |    0      |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |-----------|                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-------------|     \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |  1.  OK     |     \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-------------|     \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\n\t\t ENTER PIN :- ";
   cin>>npin;
   cout<<"\n\n\t\t PRESS 1. IF CORRECT :- ";
   	cin>>ok;
   	if(ok==1)
   	{
   		system("cls");
   		repin();
	}
	else
	{
		system("cls");
		cout<<"\n\n\t\t TRANSACTION IS FAILED ,PLEASE TAKE YOUR CARD,";
		exit(0);
	}

}
void bank::repin()
{
		int rpin;
	int ok;
	cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                      PLEASE REENTER NEW PIN                    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               ---------------------------------------          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     7     |     8       |     9     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     6     |     5       |     4     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |     3     |     2       |     1     |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |           |             |           |          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2               |-------------------------------------|          \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |           |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |    0      |                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                            |-----------|                       \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-------------|     \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |  1.  OK     |     \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                            |-------------|     \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\n\t\t ENTER PIN :- ";
   cin>>rpin;
   cout<<"\n\n\t\t PRESS 1. IF CORRECT :- ";
   	cin>>ok;
   	if(ok==1)
   	{
   		system("cls");
   		menu();
	   }
}
void bank::balanceinquiry()
{
	int choice;
		cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                   PLEASE SELECT ACCOUNT TYPE                   \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
  // cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
 //  cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
 //  cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
 //  cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                         |-----------------|    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                         |   1. KCC        |    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                         |-----------------|    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                         |-----------------|    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                         |   2. CURRENT    |    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                         |-----------------|    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                         |-----------------|    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                         |    3. SAVVING   |    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                         |-----------------|    \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
   cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
       cout<<"\n\n\t\t ENTER CHOICE :- ";
       cin>>choice;
       switch(choice)
       {
       	case 1: system("cls");
       	       cout<<"\n\n\t\t WORK IN PROGRESS !";
       	       break;
    	case 2: system("cls");
       	       cout<<"\n\n\t\t WORK IN PROGRESS !";
       	       break;
       	case 3: system("cls");
       	        process();
       	        sleep(3);
       	        system("cls");
       	        balis();
       	       break;
	   }
       
}
void bank::process()
{
	cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2           .                                                    \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                YOUR TRANSACTION IS BEING PROCESSED.            \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                        PLEASE ,WAIT.......                     \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2                                                                \xb2\xb2";
    cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        
}
void bank::balis()
{
	static long long balance =125000;
	
	cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                    TRANSACTION COMPLETE                                   \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
       cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                       AVAILABLE BALANCE : "<<balance;       
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        //cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
       cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    
}

void bank::deposit()

{
		cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                      PLEASE SELECT DEPOSIT TRANSACTION                    \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
       cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2   |-----------------|                           |---------------|                                                \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2   | 1.OTHER ACCOUNT |                           | 2.CAH DEPOSIT |                                       \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2   |-----------------|                           |---------------|                                             \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2                                                                           \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2   |------------------|                                                                        \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2   | 3                |                                                       \xb2\xb2";
        cout<<"\n\t\t\xb2\xb2   |------------------|                                                                        \xb2\xb2";
  
}



int main()
{
 system("Color 1F");
  bank sbi;
  sbi.wellcome();
  sbi.insertcard();
  
  sbi.language();
  
  return 0;
}