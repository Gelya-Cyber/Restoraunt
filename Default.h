/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Thu, 18, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Authorization_Form;

//## auto_generated
class CancelReservation_Form;

//## auto_generated
class Database;

//## auto_generated
class Main_Form;

//## auto_generated
class MenuAdd_Form;

//## auto_generated
class MenuDelete_Form;

//## auto_generated
class MenuEdit_Form;

//## auto_generated
class Menu_Form;

//## auto_generated
class OrderAdd_Form;

//## auto_generated
class OrderDelete_Form;

//## auto_generated
class OrderEdit_Form;

//## auto_generated
class Order_Form;

//## auto_generated
class Reservation_Form;

//## auto_generated
class Table_Form;

//## auto_generated
class WaiterAdd_Form;

//## auto_generated
class WaiterDelete_Form;

//## auto_generated
class WaiterEdit_Form;

//## auto_generated
class Waiter_Form;

//#[ ignore
#define Enter_Password_Default_id 18601
//#]

//## package Default



//## event Enter_Password()
class Enter_Password : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Enter_Password();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
