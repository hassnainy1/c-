#include <iostream>
#include <string>
using namespace std;
void start () {
cout << "\t\t\t\t...............................................\t\t\t" << endl;
cout << "\t\t\t\tWelcome to E-Library management system \t\t\t" << endl ;
cout << "\t\t\t\tDevelop by Hassnain Ali \t\t\t" << endl;
cout << "\t\t\t\t...............................................\t\t\t" << endl;
}
void welcome (){
cout << "\t\t\t\tWelcome to E-Library management system \t\t\t" << endl ;
}
void Bookmenu(){
welcome ();
char bookname ;
cout  << "Book Menu " << endl;
cout << ""

}
int main (){
start();
int res ;
int choice ;
cout << " Main Menu . \n 1.Book Menu . \n 2.Book Issue . \n 3.Administration Menu . \n 4.Exit . \n Kindly Select option (1 To 4) " << endl;
cin >> choice ;
switch (choice)
{

    case 1:
    //1.Book Menu
    break ;
    case 2 :
    //2.Book Issue
    break ;
    case 3 :
    //3.Administration Menu .
    break ;
    case 4 :
    //4.Exit .
    break ;
    default :
        cout  << "ERROR 404 : " << endl;
}

}
