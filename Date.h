#ifndef DATE_H
#define DATE_H


class Date
{

public:
    Date();
    ~Date();
    bool operator<(const Date& b) const;
    void setDate(int d,int m,int y);
    Date getDate() const;

    int getDay() const;
    void setDay(int value);

    int getYear() const;
    void setYear(int value);

    int getMonth() const;
    void setMonth(int value);

private:
    int day;
    int month;
    int year;
};

#endif // DATE_H
