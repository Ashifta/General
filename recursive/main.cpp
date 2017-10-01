#include <QCoreApplication>
#include <QtDebug>


///I think philosophy of recussive function maps to the life and death?



///---------------There is an almghty, he sets maximumDays for our life and condition as well:)----------


////Angel is Thread, who monitor and do the the process
/// God is Programmer, the domain expert, the product owner:) and many...
int angelCountGoodDeeds = 0;
int angelCountBadDeeds = 0;
int MAXIMUMDAYS = 5;//In global space Almightly set the maximum number of days he/she to live.

bool liveToday(int myDay)
{
    if(myDay == MAXIMUMDAYS )///Time of death comes here, reason is well defined statically/dynamically condition met
    {   qDebug()<< "Today is my last day to live, Can I have few more day to live?!";
        qDebug()<< "Angel said, there is no more chance you need to return now.., since it is your time to unwind.!!";
        qDebug()<< "Angel said, Dont worry, your have alreay marked your good/bad days, you will get what you deserve, After all it is I who is the supreme owner of judgement:)";
        return false; //Dead "Now Stack unwind, you are resposiblet to what you have done in each day:)
    }
    else
    {
        if(myDay== 2 || myDay==3 || myDay==4 )//Why I have put condition is effort is required for good deed, its not simple.
        {
           angelCountGoodDeeds++;
           qDebug()<< "I have good deeds Record:) for this day: "<< myDay;
        }
        else
        {
           angelCountBadDeeds++;
           qDebug()<<"I have Bad deed Record:( for this day: "<< myDay;
        }
        return liveToday(++myDay); //start another day
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);//universal environment

    //This is main thread of life
    liveToday(1);//Initated by Almighty, from day 1.

    ///Judgement day...
    if( angelCountGoodDeeds >= angelCountBadDeeds )
    {
        qDebug() << "WINNER";
    }
    else
    {
        qDebug() << "LOOSER";
    }
    return a.exec();
}
