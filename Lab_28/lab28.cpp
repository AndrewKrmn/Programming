#include <iostream>
#include <string>
using namespace std;
void SendSms(const string &number, const string &message)
{
    cout << "Send '" << message << "' to number " << number << endl;
}
void SendEmail(const string &email, const string &message)
{
    cout << "Send '" << message << "' to e-mail " << email
         << endl;
}
class INotifier
{
public:
    virtual void Notify(const string &message) const = 0;
    virtual ~INotifier() = default;
    //^--- ініціалізація віртуального конструктора і деструктора
};
class SmsNotifier : public INotifier
{
public:
    SmsNotifier(const string &number) : phone_number(number) {}
    void Notify(const string &message) const override
    {
        SendSms(phone_number, message);
    }

private:
    string phone_number;
};
class EmailNotifier : public INotifier
{
public:
    EmailNotifier(const string &email) : emailAddress(email) {}
    //^--- конструктор

    void Notify(const string &message) const override
    {
        SendEmail(emailAddress, message);
    }
    //^--- віртуальний метод який викликає функцію

private:
    string emailAddress;
};
void Notify(INotifier &notifier, const string &message)
{

    notifier.Notify(message);
}

int main()
{
    SmsNotifier sms{"+38-067-777-77-77"};
    EmailNotifier email{"lab28-final@pnu.edu.ua"};
    Notify(sms, "I am learning C++");
    Notify(email, "and I want to be successful");
    return 0;
}