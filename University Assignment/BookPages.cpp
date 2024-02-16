/*Write a program that inputs the numbers of page in a book,a number of page user read in one day 
and number of days a person read the book.Display number of pages that user read and the number of
pages left*/
#include <iostream>
using namespace std;
int main(){
int total_pages,read_daily,num_days,remain_page,read_on;
cout<<"Enter total pages of book:";
cin >>total_pages;
cout<<"Enter how many pages you read daily:";
cin >>read_daily;
cout<<"Enter how many days you read the book:";
cin >>num_days;
remain_page = total_pages - (read_daily*num_days);
read_on = total_pages - remain_page;
cout<<"The number of pages left is:"<<remain_page<<endl<<"The number of pages you read is :"<<read_on;
return 0;



}