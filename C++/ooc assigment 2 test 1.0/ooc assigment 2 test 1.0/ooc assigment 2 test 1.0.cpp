#include <cstring>
#include <iostream>
using namespace std;
//Declaring User Class
class User
{
protected:
	char userID[10];
	char password[25];
	char loginStatus[7];
	char registeredDate[10];
public:
	User(const char* ID, const char* pw);
	bool verifyLogin();
	~User();
};
//Implementing User Class
User::User(const char* ID, const char* pw)
{
	strcpy(userID, ID);
	strcpy(password, pw);
	cout << "Constructor executed" << endl;
}
bool User::verifyLogin()
{
	return false;
}
User::~User()
{
	cout << "User deleted" << endl;
}
//Declaring Administration Class
class Administration :
	public User
{
private:
	char adminName[25];
	char email[25];
public:
	Administration(const char* ID, const char* pw, const char* name, const char*
		pEmail);
	void display();
	bool addBusiness();
	bool removeBusiness();
	~Administration();
};
//Implementation of Administartion class
Administration::Administration(const char* ID, const char* pw, const char* name, const
	char* pEmail) : User(ID, pw)
{
	strcpy(adminName, name);
	strcpy(email, pEmail);
	cout << "Constructor executed" << endl;
}
void Administration::display()
{
}
bool Administration::addBusiness()
{
	return false;
}
bool Administration::removeBusiness()
{
	return false;
}
Administration::~Administration()
{
	cout << "Administration deleted" << endl;
}
//Declaring Payment Class
class Payment
{
protected:
	char payID[10];
	char eligableMethod[50];
public:
	Payment(const char* ID, const char* pMethod);
	bool updateInfo();
	void display();
	~Payment();
};
//implementation of Payment
Payment::Payment(const char* ID, const char* pMethod)
{
	strcpy(payID, ID);
	strcpy(eligableMethod, pMethod);
	cout << "Constructor executed" << endl;
}
bool Payment::updateInfo()
{
	return false;
}
void Payment::display()
{
}
Payment::~Payment()
{
	cout << "Payment deleted" << endl;
}
//Declaring OnlineTransfer Class
class OnlineTransfer :
	public Payment
{
private:
	char paymentProcessingService[10];
	char bank[10];
	int cerditCardNo;
	char expireDate[10];
	double accountBalance;
public:
	OnlineTransfer(const char* ID, const char* pMethod, const char* pService, const
		char* pBank, int cardNo, const char* expDate);
	bool checkBalance();
	bool confirm();
	void display();
	~OnlineTransfer();
};
//Implementation of OnlineTransfer Class
OnlineTransfer::OnlineTransfer(const char* ID, const char* pMethod, const char* pService,
	const char* pBank, int cardNo, const char* expDate) : Payment(ID, pMethod)
{
	strcpy(paymentProcessingService, pService);
	strcpy(bank, pBank);
	strcpy(expireDate, expDate);
	cerditCardNo = cardNo;
	cout << "Constructor executed" << endl;
}
bool OnlineTransfer::checkBalance()
{
	return false;
}
bool OnlineTransfer::confirm()
{
	return false;
}
void OnlineTransfer::display()
{
}
OnlineTransfer::~OnlineTransfer() {
	cout << "Online Payment Details deleted" << endl;
}
//Declaring Cash Class
class Cash :
	public Payment
{
public:
	Cash(const char* ID, const char* pMethod);
	bool confirm();
	void display();
	~Cash();
};
//Implementation of Cash Class
Cash::Cash(const char* ID, const char* pMethod) : Payment(ID, pMethod)
{
	cout << "Constructor executed" << endl;
}
bool Cash::confirm()
{
	return false;
}
void Cash::display()
{
}
Cash::~Cash()
{
	cout << "Cash Payment Details deleted" << endl;
}
//Declaring Customer Class
class Customer :
	public User
{
protected:
	Payment* pay;
	char customerName[25];
	char email[25];
	char address[50];
	char telephoneNumber[10];
public:
	Customer();
	Customer(const char* ID, const char* pw, const char* name, const char* pEmail,
		const char* teleNo);
	void setAddress(const char* add);
	void setpayment(Payment* pPay);
	bool updateInfo();
	bool cancelAccount();
	void display();
	~Customer();
};
//Implementation of Customer class
Customer::Customer(const char* ID, const char* pw, const char* name, const char* pEmail,
	const char* teleNo) : User(ID, pw)
{
	strcpy(customerName, name);
	strcpy(email, pEmail);
	strcpy(telephoneNumber, teleNo);
	cout << "Constructor executed" << endl;
}
void Customer::setAddress(const char* add)
{
}
void Customer::setpayment(Payment* pPay)
{
}
bool Customer::updateInfo()
{
	return false;
}
bool Customer::cancelAccount()
{
	return false;
}
void Customer::display()
{
}
Customer::~Customer()
{
	cout << "Customer deleted" << endl;
}
//Declaring Rider Class
class Rider :
	public Customer
{
public:
	Rider(const char* ID, const char* pw, const char* name, const char* pEmail, const
		char* teleNo);
	bool makeReservations();
	bool cancelReservation();
	bool reserveTicket();
	bool cancelTicket();
	bool makePayments();
	void display();
	~Rider();
};
//Implementation of Rider Class
Rider::Rider(const char* ID, const char* pw, const char* name, const char* pEmail, const
	char* teleNo) : Customer(ID, pw, name, pEmail, teleNo)
{
	cout << "Constructor executed" << endl;
}
bool Rider::makeReservations()
{
	return false;
}
bool Rider::cancelReservation()
{
	return false;
}
bool Rider::reserveTicket()
{
	return false;
}
bool Rider::cancelTicket()
{
	return false;
}
bool Rider::makePayments()
{
	return false;
}
void Rider::display()
{
}
Rider::~Rider()
{
	cout << "Rider deleted" << endl;
}
//Declaring Reservation Class
class Reservation
{
private:
	Rider* rider;
	char reservationID[10];
	char pickUpLocation[25];
	char dropLocation[25];
	public
		Reservation(const char* ID);
	void placeReservation(const char* pickUp, const char* drop);
	bool addFavourite();
	void display();
	~Reservation();
};
//Implementation of Reservation Class
Reservation::Reservation(const char* ID)
{
	Rider* rider;
	strcpy(reservationID, ID);
	cout << "Constructor executed" << endl;
}
void Reservation::placeReservation(const char* pickUp, const char* drop)
{
}
bool Reservation::addFavourite()
{
}
void Reservation::display()
{
}
Reservation::~Reservation()
{
	cout << "Reservation deleted" << endl;
}
//Declaring FavReservation Class
class FavReservation
{
private:
	Reservation* res;
public:
	FavReservation(Reservation* res);
	void display();
	~FavReservation();
};
//Implementation of FavReservation Class
FavReservation::FavReservation(Reservation* res)
{
	cout << "Constructor executed" << endl;
}
void FavReservation::display()
{
}
FavReservation::~FavReservation()
{
	cout << "Favourite Reservation deleted." << endl;
}
//Declaring Ticket Class
class Ticket
{
	Rider* rider;
	char ticketID[10];
	char depature[25];
	char destination[25];
	char type[10];
public:
	Ticket(const char* ID);
	void reserveTicket();
	void display();
	~Ticket();
};
//Implementation of Ticket Class
Ticket::Ticket(const char* ID)
{
	strcpy(ticketID, ID);
	cout << "Constructor executed" << endl;
}
void Ticket::reserveTicket()
{
}
void Ticket::display()
{
}
Ticket::~Ticket()
{
	cout << "Ticket deleted." << endl;
}
//Declaring Business Class
class Business :
	public Customer
{
private:
	char businessInfo[100];
public:
	Business();
	Business(const char* ID, const char* pw, const char* name, const char* pEmail,
		const char* teleNo, const char* info);
	bool makeRequest();
	bool canceRequest();
	bool makePayments();
	void display();
	~Business();
};
//Implementation of Business class
Business::Business(const char* ID, const char* pw, const char* name, const char* pEmail,
	const char* teleNo, const char* info) : Customer(ID, pw, name, pEmail, teleNo)
{
	strcpy(businessInfo, info);
	cout << "Constructor executed" << endl;
}
bool Business::makeRequest()
{
	return false;
}
bool Business::canceRequest()
{
	return false;
}
bool Business::makePayments()
{
	return false;
}
void Business::display()
{
}
Business::~Business()
{
	cout << "Business deleted." << endl;
}
//Declaring Vehicle Class
class Vehicle
{
private:
	char licensePlateNo[10];
	char model[10];
	char type[10];
public:
	Vehicle(const char* plateNo, const char* pModel, const char* pType);
	void display();
	~Vehicle();
};
//Implementation of Vehicle
Vehicle::Vehicle(const char* plateNo, const char* pModel, const char* pType)
{
	strcpy(licensePlateNo, plateNo);
	strcpy(model, pModel);
	strcpy(type, pType);
	cout << "Constructor executed" << endl;
}
void Vehicle::display()
{
}
Vehicle::~Vehicle()
{
	cout << "vehicle deleted" << endl;
}
//Declaring Agent Class
class Agent :
	public Customer
{
	Driver* driver[1];
	int NoOfVechicle;
	char agencyBio[100];
	char typeOfServicers[50];
public:
	Agent(const char* ID, const char* pw, const char* name, const char* pEmail, const
		char* teleNo, int noVehicle, const char* bio, const char* typeService);
	bool acceptRide();
	bool cancelRide();
	bool recivePayments();
	bool applyForCertification();
	void display();
	~Agent();
};
//Implementation of Agent Class
Agent::Agent(const char* ID, const char* pw, const char* name, const char* pEmail, const
	char* teleNo, int noVehicle, const char* bio, const char* typeService) : Customer(ID, pw,
		name, pEmail, teleNo)
{
	NoOfVechicle = noVehicle;
	strcpy(agencyBio, bio);
	strcpy(typeOfServicers, typeService);
	cout << "Constructor executed" << endl;
}
bool Agent::acceptRide()
{
	return false;
}
bool Agent::cancelRide()
{
	return false;
}
bool Agent::recivePayments()
{
	return false;
}
bool Agent::applyForCertification()
{
	return false;
}
void Agent::display()
{
}
Agent::~Agent()
{
	cout << "Agent deleted" << endl;
}
//Declaring ListedAgent Class
class ListedAgent :
	public Agent
{
private:
	int certificationNo;
public:
	ListedAgent(const char* ID, const char* pw, const char* name, const char* pEmail,
		const char* teleNo, int noVehicle, const char* bio, const char* typeService, int cNo);
	bool acceptDelivery();
	bool cancelDelivery();
	bool recivePayments();
	void display();
	~ListedAgent();
};
//Implementation of Listed Agent Class
ListedAgent::ListedAgent(const char* ID, const char* pw, const char* name, const char*
	pEmail, const char* teleNo, int noVehicle, const char* bio, const char* typeService, int
	cNo) : Agent(ID, pw, name, pEmail, teleNo, noVehicle, bio, typeService)
{
	certificationNo = cNo;
	cout << "Constructor executed" << endl;
}
bool ListedAgent::acceptDelivery()
{
	return false;
}
bool ListedAgent::cancelDelivery()
{
	return false;
}
bool ListedAgent::recivePayments()
{
	return false;
}
void ListedAgent::display()
{
}
ListedAgent::~ListedAgent()
{
	cout << "Listed Agent deleted" << endl;
}
//Declaring Package Class
class Package
{
private:
	char packageID[10];
	char packageType[25];
	double weight;
	char comment[100];
public:
	Package(const char* ID, const char* type, double weigh, const char* com);
	void display();
	~Package();
};
//Implementation of Package Class
Package::Package(const char* ID, const char* type, double weigh, const char* com)
{
	strcpy(packageID, ID);
	strcpy(packageType, type);
	weight = weight;
	strcpy(comment, com);
	cout << "Constructor executed" << endl;
}
void Package::display()
{
}
Package::~Package()
{
	cout << "package deleted." << endl;
}
//Declaring Delivery Class
class Delivery
{
private:
	Business* business;
	ListedAgent* LAgent;
	Package* pack[1];
	char deliveryID[10];
	char pickUpLocation[25];
	char dropLocation[25];
public:
	Delivery(const char* ID);
	void setDelivery();
	void display();
	~Delivery();
};
//Implementation of Delivery Class
Delivery::Delivery(const char* ID)
{
	strcpy(deliveryID, ID);
	cout << "Constructor executed" << endl;
}
void Delivery::setDelivery()
{
}
void Delivery::display()
{
}
Delivery::~Delivery()
{
	cout << "Delivery deleted" << endl;
	for (int i = 0; i < 1; i++) {
		delete pack[i];
	}
}
//Declaring Driver Class
class Driver :
	public Customer
{
private:
	Reservation* reservation;
	Delivery* delivery;
	Vehicle* vehicle;
	char referalID[10];
	char driverBio[100];
public:
	Driver(const char* ID, const char* pw, const char* name, const char* pEmail, const
		char* teleNo, const char* rID, const char* bio);
	bool acceptRide();
	bool cancelRide();
	bool acceptDelivery();
	bool cancelDelivery();
	bool recivePayments();
	void display();
	~Driver();
};
//Implementation of Driver Class
Driver::Driver(const char* ID, const char* pw, const char* name, const char* pEmail,
	const char* teleNo, const char* rID, const char* bio) : Customer(ID, pw, name, pEmail,
		teleNo)
{
	strcpy(referalID, rID);
	strcpy(driverBio, bio);
	cout << "Constructor executed" << endl;
}
bool Driver::acceptRide()
{
	return false;
}
bool Driver::cancelRide()
{
	return false;
}
bool Driver::acceptDelivery()
{
	return false;
}
bool Driver::cancelDelivery()
{
	return false;
}
bool Driver::recivePayments()
{
	return false;
}
void Driver::display()
{
}
Driver::~Driver()
{
	cout << "Driver deleted." << endl;
}
//Declaring Ownership Class
class Ownership
{
private:
	Customer* cus;
	Vehicle* vehicle;
public:
	Ownership();
	void display();
	~Ownership();
};
//Implementation of Ownership Class
Ownership::Ownership()
{
	cout << "Constructor executed" << endl;
}
void Ownership::display()
{
}
Ownership::~Ownership()
{
	cout << "Ownership removed" << endl;
}
//Declaring Invoice Class
class Invoice
{
private:
	Customer* customer;
	Payment* pay;
	Reservation* reservation;
	Delivery* delivery;
	Ticket* ticket;
	char invoiceID[10];
	double amount;
public:
	Invoice(const char* ID, double pAmount);
	double checkBalance();
	double calcAmount();
	void display();
	~Invoice();
};
//Implementation of Invoice Class
Invoice::Invoice(const char* ID, double pAmount)
{
	strcpy(invoiceID, ID);
	amount = pAmount;
	cout << "Constructor executed" << endl;
}
double Invoice::checkBalance()
{
	return 0.0;
}
double Invoice::calcAmount()
{
	return 0.0;
}
void Invoice::display()
{
}
Invoice::~Invoice()
{
	cout << "Invoice deleted." << endl;
}
//Main program.
int main()
{
	//Creating objects.
	Administration* admin = new Administration("SA20201017", "adminpw12345", "Jack 
		Bannon", "JackBannon@example.com");
		Rider * rider = new Rider("RD10082020", "riderpw12345", "Paloma Faith",
			"betSykes@abc.com", "0712345689");
	Driver * driver = new Driver("DR10131710", "driverpw12345", "Ben Aldridge",
		"thomasWay@thomasmail.com", "0723456891", "no Agent", "I'm use this system to earn few 
		extra money by driving you guys.");
		Agent * agent = new Agent("AT10181017", "agentpw12345", "Emma Corrin",
			"emma@penny.com", "0734568912", 10, "Luxury Taxi Service for your every day today need",
			"taxi");
	Business * business = new Business("BS10221017", "bussinesspw12345", "Andrew 
		Lincoln", "rickGrimrs@TWD.com", "0745689123", "We are food delivery system we need to
		find good drivers to deliver our foods to our customers' doorsteps");
		//Delete objects
		delete admin;
	delete rider;
	delete driver;
	delete agent;
	delete business;
}
//void display() methods show polymorphism. retrieve all required data needed to be 
displayed.
//objects of class like vehicle, payment , invoice , reservation ,delivery and ticket are 
created by settermethods in customer child classes.