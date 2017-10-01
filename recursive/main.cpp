#include <QCoreApplication>
#include <QtDebug>

///---------------------There is an almghty, he sets maximumDays for our life and condition as well:)----------
int INITIALCOUNT = 1;
int MAXIMUMDAYS = 5;//In global space Almightly set the maximum number of days he/she to live.
bool liveToday()
{
    qDebug()<< INITIALCOUNT;
    INITIALCOUNT++;
    if(INITIALCOUNT == MAXIMUMDAYS )///Time of death comes here, reason is well defined statically/dynamically return false.
    {
        return false; //Dead "Now Stack unwind, you are resposiblet to what you have done in each day:)
    }
    else
    {
        return liveToday(); //start another day, make sure there is a return at anytime.
    }
}

///
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //This is main thread of life
    liveToday();//Initated by Almighty
    return a.exec();
}
